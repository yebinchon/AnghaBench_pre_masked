
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ebitmap_node {int startbit; int* maps; struct ebitmap_node* next; } ;
struct ebitmap {int highbit; struct ebitmap_node* node; } ;
typedef int __le64 ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ebitmap*) ;
 int FUNC_2 (struct ebitmap*) ;
 int VAR_6 ;
 struct ebitmap_node* FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,void*,int) ;
 int FUNC_7 (char*,...) ;

int FUNC_8(struct ebitmap *VAR_7, void *VAR_8)
{
 struct ebitmap_node *VAR_9 = ((void*)0);
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 __le32 VAR_14;
 u64 VAR_15;
 __le64 VAR_16;
 __le32 VAR_17[3];
 int VAR_18, VAR_19;

 FUNC_2(VAR_7);

 VAR_18 = FUNC_6(VAR_17, VAR_8, sizeof VAR_17);
 if (VAR_18 < 0)
  goto out;

 VAR_10 = FUNC_4(VAR_17[0]);
 VAR_7->highbit = FUNC_4(VAR_17[1]);
 VAR_11 = FUNC_4(VAR_17[2]);

 if (VAR_10 != VAR_0) {
  FUNC_7("SELinux: ebitmap: map size %u does not "
         "match my size %zd (high bit was %d)\n",
         VAR_10, VAR_0, VAR_7->highbit);
  goto bad;
 }


 VAR_7->highbit += VAR_1 - 1;
 VAR_7->highbit -= (VAR_7->highbit % VAR_1);

 if (!VAR_7->highbit) {
  VAR_7->node = ((void*)0);
  goto ok;
 }

 if (VAR_7->highbit && !VAR_11)
  goto bad;

 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  VAR_18 = FUNC_6(&VAR_14, VAR_8, sizeof(u32));
  if (VAR_18 < 0) {
   FUNC_7("SELinux: ebitmap: truncated map\n");
   goto bad;
  }
  VAR_12 = FUNC_4(VAR_14);

  if (VAR_12 & (VAR_10 - 1)) {
   FUNC_7("SELinux: ebitmap start bit (%d) is "
          "not a multiple of the map unit size (%u)\n",
          VAR_12, VAR_10);
   goto bad;
  }
  if (VAR_12 > VAR_7->highbit - VAR_10) {
   FUNC_7("SELinux: ebitmap start bit (%d) is "
          "beyond the end of the bitmap (%u)\n",
          VAR_12, (VAR_7->highbit - VAR_10));
   goto bad;
  }

  if (!VAR_9 || VAR_12 >= VAR_9->startbit + VAR_1) {
   struct ebitmap_node *VAR_20;
   VAR_20 = FUNC_3(VAR_6, VAR_5);
   if (!VAR_20) {
    FUNC_7("SELinux: ebitmap: out of memory\n");
    VAR_18 = -VAR_4;
    goto bad;
   }

   VAR_20->startbit = VAR_12 - (VAR_12 % VAR_1);
   if (VAR_9)
    VAR_9->next = VAR_20;
   else
    VAR_7->node = VAR_20;
   VAR_9 = VAR_20;
  } else if (VAR_12 <= VAR_9->startbit) {
   FUNC_7("SELinux: ebitmap: start bit %d"
          " comes after start bit %d\n",
          VAR_12, VAR_9->startbit);
   goto bad;
  }

  VAR_18 = FUNC_6(&VAR_16, VAR_8, sizeof(u64));
  if (VAR_18 < 0) {
   FUNC_7("SELinux: ebitmap: truncated map\n");
   goto bad;
  }
  VAR_15 = FUNC_5(VAR_16);

  VAR_13 = (VAR_12 - VAR_9->startbit) / VAR_2;
  while (VAR_15) {
   VAR_9->maps[VAR_13++] = VAR_15 & (-1UL);
   VAR_15 = FUNC_0(VAR_15);
  }
 }
ok:
 VAR_18 = 0;
out:
 return VAR_18;
bad:
 if (!VAR_18)
  VAR_18 = -VAR_3;
 FUNC_1(VAR_7);
 goto out;
}
