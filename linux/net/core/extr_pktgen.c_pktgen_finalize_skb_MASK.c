
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_sec; int tv_nsec; } ;
struct sk_buff {int data_len; int len; } ;
struct pktgen_hdr {void* tv_usec; void* tv_sec; void* seq_num; void* pgh_magic; } ;
struct pktgen_dev {int nfrags; int node; int flags; int seq_num; int page; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct timespec64*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 struct pktgen_hdr* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct pktgen_dev *VAR_8, struct sk_buff *VAR_9,
    int VAR_10)
{
 struct timespec64 VAR_11;
 struct pktgen_hdr *VAR_12;

 VAR_12 = FUNC_9(VAR_9, sizeof(*VAR_12));
 VAR_10 -= sizeof(*VAR_12);

 if (VAR_8->nfrags <= 0) {
  FUNC_10(VAR_9, VAR_10);
 } else {
  int VAR_13 = VAR_8->nfrags;
  int VAR_14, VAR_15;
  int VAR_16;


  if (VAR_13 > VAR_3)
   VAR_13 = VAR_3;
  VAR_15 = VAR_10 - VAR_13 * VAR_5;
  if (VAR_15 > 0) {
   FUNC_10(VAR_9, VAR_15);
   VAR_10 = VAR_13 * VAR_5;
  }

  VAR_14 = 0;
  VAR_16 = (VAR_10/VAR_13) < VAR_5 ?
      (VAR_10/VAR_13) : VAR_5;
  while (VAR_10 > 0) {
   if (FUNC_12(!VAR_8->page)) {
    int VAR_17 = FUNC_4();

    if (VAR_8->node >= 0 && (VAR_8->flags & VAR_0))
     VAR_17 = VAR_8->node;
    VAR_8->page = FUNC_0(VAR_17, VAR_2 | VAR_7, 0);
    if (!VAR_8->page)
     break;
   }
   FUNC_1(VAR_8->page);
   FUNC_6(VAR_9, VAR_14, VAR_8->page);
   FUNC_5(&FUNC_11(VAR_9)->frags[VAR_14], 0);

   if (VAR_14 == (VAR_13 - 1))
    FUNC_8(&FUNC_11(VAR_9)->frags[VAR_14],
        (VAR_10 < VAR_5 ? VAR_10 : VAR_5));
   else
    FUNC_8(&FUNC_11(VAR_9)->frags[VAR_14], VAR_16);
   VAR_10 -= FUNC_7(&FUNC_11(VAR_9)->frags[VAR_14]);
   VAR_9->len += FUNC_7(&FUNC_11(VAR_9)->frags[VAR_14]);
   VAR_9->data_len += FUNC_7(&FUNC_11(VAR_9)->frags[VAR_14]);
   VAR_14++;
   FUNC_11(VAR_9)->nr_frags = VAR_14;
  }
 }




 VAR_12->pgh_magic = FUNC_2(VAR_6);
 VAR_12->seq_num = FUNC_2(VAR_8->seq_num);

 if (VAR_8->flags & VAR_1) {
  VAR_12->tv_sec = 0;
  VAR_12->tv_usec = 0;
 } else {
  FUNC_3(&VAR_11);
  VAR_12->tv_sec = FUNC_2(VAR_11.tv_sec);
  VAR_12->tv_usec = FUNC_2(VAR_11.tv_nsec / VAR_4);
 }
}
