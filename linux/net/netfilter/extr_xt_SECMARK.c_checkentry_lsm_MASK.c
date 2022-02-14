
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_secmark_target_info {char* secctx; scalar_t__ secid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct xt_secmark_target_info *VAR_3)
{
 int VAR_4;

 VAR_3->secctx[VAR_2 - 1] = '\0';
 VAR_3->secid = 0;

 VAR_4 = FUNC_1(VAR_3->secctx, FUNC_4(VAR_3->secctx),
           &VAR_3->secid);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   FUNC_0("invalid security context \'%s\'\n",
         VAR_3->secctx);
  return VAR_4;
 }

 if (!VAR_3->secid) {
  FUNC_0("unable to map security context \'%s\'\n",
        VAR_3->secctx);
  return -VAR_1;
 }

 VAR_4 = FUNC_3(VAR_3->secid);
 if (VAR_4) {
  FUNC_0("unable to obtain relabeling permission\n");
  return VAR_4;
 }

 FUNC_2();
 return 0;
}
