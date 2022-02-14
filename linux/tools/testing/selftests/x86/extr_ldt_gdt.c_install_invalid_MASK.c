
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {scalar_t__ seg_32bit; int entry_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int,struct user_desc const*,int) ;

__attribute__((used)) static void FUNC_3(const struct user_desc *VAR_4, bool VAR_5)
{
 int VAR_6 = FUNC_2(VAR_1, VAR_5 ? 1 : 0x11,
     VAR_4, sizeof(*VAR_4));
 if (VAR_6 < -1)
  VAR_2 = -VAR_6;
 if (VAR_6 == 0) {
  FUNC_0(VAR_4->entry_number, 1);
 } else if (VAR_2 == VAR_0) {
  FUNC_1("[OK]\tmodify_ldt returned -ENOSYS\n");
 } else {
  if (VAR_4->seg_32bit) {
   FUNC_1("[FAIL]\tUnexpected modify_ldt failure %d\n",
          VAR_2);
   VAR_3++;
  } else {
   FUNC_1("[OK]\tmodify_ldt rejected 16 bit segment\n");
  }
 }
}
