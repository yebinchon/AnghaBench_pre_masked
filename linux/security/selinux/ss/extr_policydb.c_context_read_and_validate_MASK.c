
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb {scalar_t__ policyvers; } ;
struct context {int range; void* type; void* role; void* user; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct context*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (struct policydb*,struct context*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct context *VAR_2,
         struct policydb *VAR_3,
         void *VAR_4)
{
 __le32 VAR_5[3];
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_4, sizeof VAR_5);
 if (VAR_6) {
  FUNC_5("SELinux: context truncated\n");
  goto out;
 }
 VAR_2->user = FUNC_1(VAR_5[0]);
 VAR_2->role = FUNC_1(VAR_5[1]);
 VAR_2->type = FUNC_1(VAR_5[2]);
 if (VAR_3->policyvers >= VAR_1) {
  VAR_6 = FUNC_2(&VAR_2->range, VAR_4);
  if (VAR_6) {
   FUNC_5("SELinux: error reading MLS range of context\n");
   goto out;
  }
 }

 VAR_6 = -VAR_0;
 if (!FUNC_4(VAR_3, VAR_2)) {
  FUNC_5("SELinux:  invalid security context\n");
  FUNC_0(VAR_2);
  goto out;
 }
 VAR_6 = 0;
out:
 return VAR_6;
}
