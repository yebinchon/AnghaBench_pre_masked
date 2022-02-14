
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int flags; unsigned long cluster_next; int cluster_nr; int pages; int inuse_pages; unsigned long lowest_bit; unsigned long highest_bit; char* swap_map; int lock; scalar_t__ cluster_info; int type; } ;
struct swap_cluster_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct swap_info_struct*,unsigned long,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct swap_info_struct*,scalar_t__,unsigned long) ;
 struct swap_cluster_info* FUNC_3 (struct swap_info_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (struct swap_info_struct*,unsigned long) ;
 scalar_t__ FUNC_5 (struct swap_info_struct*,unsigned long*,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct swap_info_struct*,unsigned long,int) ;
 int FUNC_9 (int ,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct swap_cluster_info*) ;
 scalar_t__ FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct swap_info_struct *VAR_7,
          unsigned char VAR_8, int VAR_9,
          swp_entry_t VAR_10[])
{
 struct swap_cluster_info *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14 = 0;
 int VAR_15 = VAR_0;
 int VAR_16 = 0;

 if (VAR_9 > VAR_2)
  VAR_9 = VAR_2;
 VAR_7->flags += VAR_4;
 VAR_13 = VAR_12 = VAR_7->cluster_next;


 if (VAR_7->cluster_info) {
  if (FUNC_5(VAR_7, &VAR_12, &VAR_13))
   goto checks;
  else
   goto scan;
 }

 if (FUNC_10(!VAR_7->cluster_nr--)) {
  if (VAR_7->pages - VAR_7->inuse_pages < VAR_1) {
   VAR_7->cluster_nr = VAR_1 - 1;
   goto checks;
  }

  FUNC_7(&VAR_7->lock);







  VAR_13 = VAR_12 = VAR_7->lowest_bit;
  VAR_14 = VAR_12 + VAR_1 - 1;


  for (; VAR_14 <= VAR_7->highest_bit; VAR_12++) {
   if (VAR_7->swap_map[VAR_12])
    VAR_14 = VAR_12 + VAR_1;
   else if (VAR_12 == VAR_14) {
    FUNC_6(&VAR_7->lock);
    VAR_12 -= VAR_1 - 1;
    VAR_7->cluster_next = VAR_12;
    VAR_7->cluster_nr = VAR_1 - 1;
    goto checks;
   }
   if (FUNC_10(--VAR_15 < 0)) {
    FUNC_1();
    VAR_15 = VAR_0;
   }
  }

  VAR_12 = VAR_13;
  FUNC_6(&VAR_7->lock);
  VAR_7->cluster_nr = VAR_1 - 1;
 }

checks:
 if (VAR_7->cluster_info) {
  while (FUNC_4(VAR_7, VAR_12)) {

   if (VAR_16)
    goto done;
   if (!FUNC_5(VAR_7, &VAR_12,
       &VAR_13))
    goto scan;
  }
 }
 if (!(VAR_7->flags & VAR_5))
  goto no_page;
 if (!VAR_7->highest_bit)
  goto no_page;
 if (VAR_12 > VAR_7->highest_bit)
  VAR_13 = VAR_12 = VAR_7->lowest_bit;

 VAR_11 = FUNC_3(VAR_7, VAR_12);

 if (FUNC_12() && VAR_7->swap_map[VAR_12] == VAR_3) {
  int VAR_17;
  FUNC_11(VAR_11);
  FUNC_7(&VAR_7->lock);
  VAR_17 = FUNC_0(VAR_7, VAR_12, VAR_6);
  FUNC_6(&VAR_7->lock);

  if (VAR_17)
   goto checks;
  goto scan;
 }

 if (VAR_7->swap_map[VAR_12]) {
  FUNC_11(VAR_11);
  if (!VAR_16)
   goto scan;
  else
   goto done;
 }
 VAR_7->swap_map[VAR_12] = VAR_8;
 FUNC_2(VAR_7, VAR_7->cluster_info, VAR_12);
 FUNC_11(VAR_11);

 FUNC_8(VAR_7, VAR_12, 1);
 VAR_7->cluster_next = VAR_12 + 1;
 VAR_10[VAR_16++] = FUNC_9(VAR_7->type, VAR_12);


 if ((VAR_16 == VAR_9) || (VAR_12 >= VAR_7->highest_bit))
  goto done;




 if (FUNC_10(--VAR_15 < 0)) {
  if (VAR_16)
   goto done;
  FUNC_7(&VAR_7->lock);
  FUNC_1();
  FUNC_6(&VAR_7->lock);
  VAR_15 = VAR_0;
 }


 if (VAR_7->cluster_info) {
  if (FUNC_5(VAR_7, &VAR_12, &VAR_13))
   goto checks;
  else
   goto done;
 }

 ++VAR_12;


 if (VAR_7->cluster_nr && !VAR_7->swap_map[VAR_12]) {
  --VAR_7->cluster_nr;
  goto checks;
 }

done:
 VAR_7->flags -= VAR_4;
 return VAR_16;

scan:
 FUNC_7(&VAR_7->lock);
 while (++VAR_12 <= VAR_7->highest_bit) {
  if (!VAR_7->swap_map[VAR_12]) {
   FUNC_6(&VAR_7->lock);
   goto checks;
  }
  if (FUNC_12() && VAR_7->swap_map[VAR_12] == VAR_3) {
   FUNC_6(&VAR_7->lock);
   goto checks;
  }
  if (FUNC_10(--VAR_15 < 0)) {
   FUNC_1();
   VAR_15 = VAR_0;
  }
 }
 VAR_12 = VAR_7->lowest_bit;
 while (VAR_12 < VAR_13) {
  if (!VAR_7->swap_map[VAR_12]) {
   FUNC_6(&VAR_7->lock);
   goto checks;
  }
  if (FUNC_12() && VAR_7->swap_map[VAR_12] == VAR_3) {
   FUNC_6(&VAR_7->lock);
   goto checks;
  }
  if (FUNC_10(--VAR_15 < 0)) {
   FUNC_1();
   VAR_15 = VAR_0;
  }
  VAR_12++;
 }
 FUNC_6(&VAR_7->lock);

no_page:
 VAR_7->flags -= VAR_4;
 return VAR_16;
}
