
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct policydb {int dummy; } ;
struct avtab {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct avtab*,scalar_t__) ;
 int FUNC_1 (struct avtab*) ;
 int VAR_3 ;
 int FUNC_2 (struct avtab*,void*,struct policydb*,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct avtab *VAR_4, void *VAR_5, struct policydb *VAR_6)
{
 int VAR_7;
 __le32 VAR_8[1];
 u32 VAR_9, VAR_10;


 VAR_7 = FUNC_4(VAR_8, VAR_5, sizeof(u32));
 if (VAR_7 < 0) {
  FUNC_5("SELinux: avtab: truncated table\n");
  goto bad;
 }
 VAR_9 = FUNC_3(VAR_8[0]);
 if (!VAR_9) {
  FUNC_5("SELinux: avtab: table is empty\n");
  VAR_7 = -VAR_1;
  goto bad;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_9);
 if (VAR_7)
  goto bad;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3, ((void*)0));
  if (VAR_7) {
   if (VAR_7 == -VAR_2)
    FUNC_5("SELinux: avtab: out of memory\n");
   else if (VAR_7 == -VAR_0)
    FUNC_5("SELinux: avtab: duplicate entry\n");

   goto bad;
  }
 }

 VAR_7 = 0;
out:
 return VAR_7;

bad:
 FUNC_1(VAR_4);
 goto out;
}
