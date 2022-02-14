
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mls_range {TYPE_1__* level; } ;
typedef int __le32 ;
struct TYPE_2__ {int cat; void* sens; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct mls_range *VAR_1, void *VAR_2)
{
 __le32 VAR_3[2];
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_2, sizeof(u32));
 if (VAR_5)
  goto out;

 VAR_5 = -VAR_0;
 VAR_4 = FUNC_4(VAR_3[0]);
 if (VAR_4 > FUNC_0(VAR_3)) {
  FUNC_6("SELinux: mls:  range overflow\n");
  goto out;
 }

 VAR_5 = FUNC_5(VAR_3, VAR_2, sizeof(u32) * VAR_4);
 if (VAR_5) {
  FUNC_6("SELinux: mls:  truncated range\n");
  goto out;
 }

 VAR_1->level[0].sens = FUNC_4(VAR_3[0]);
 if (VAR_4 > 1)
  VAR_1->level[1].sens = FUNC_4(VAR_3[1]);
 else
  VAR_1->level[1].sens = VAR_1->level[0].sens;

 VAR_5 = FUNC_3(&VAR_1->level[0].cat, VAR_2);
 if (VAR_5) {
  FUNC_6("SELinux: mls:  error reading low categories\n");
  goto out;
 }
 if (VAR_4 > 1) {
  VAR_5 = FUNC_3(&VAR_1->level[1].cat, VAR_2);
  if (VAR_5) {
   FUNC_6("SELinux: mls:  error reading high categories\n");
   goto bad_high;
  }
 } else {
  VAR_5 = FUNC_1(&VAR_1->level[1].cat, &VAR_1->level[0].cat);
  if (VAR_5) {
   FUNC_6("SELinux: mls:  out of memory\n");
   goto bad_high;
  }
 }

 return 0;
bad_high:
 FUNC_2(&VAR_1->level[0].cat);
out:
 return VAR_5;
}
