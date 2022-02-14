
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,struct user_desc*,int) ;

__attribute__((used)) static void FUNC_2(struct user_desc *VAR_3)
{
 if (FUNC_1(0x11, VAR_3, sizeof(*VAR_3)) == 0) {
  FUNC_0("[FAIL]\tmodify_ldt accepted a bad descriptor\n");
  VAR_2++;
 } else if (VAR_1 == VAR_0) {
  FUNC_0("[OK]\tmodify_ldt returned -ENOSYS\n");
 } else {
  FUNC_0("[OK]\tmodify_ldt failure %d\n", VAR_1);
 }
}
