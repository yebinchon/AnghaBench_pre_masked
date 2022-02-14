
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int entry_number; } ;


 unsigned short FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int ,int,struct user_desc const*,int) ;

__attribute__((used)) static void FUNC_3(const struct user_desc *VAR_1, unsigned short *VAR_2,
      const char *VAR_3)
{
 if (FUNC_2(VAR_0, 1, VAR_1, sizeof(*VAR_1)) == 0) {
  *VAR_2 = FUNC_0(VAR_1->entry_number);
 } else {
  FUNC_1("[NOTE]\tFailed to create %s segment\n", VAR_3);
  *VAR_2 = 0;
 }
}
