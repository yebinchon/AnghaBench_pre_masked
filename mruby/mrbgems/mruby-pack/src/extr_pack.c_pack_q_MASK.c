
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 unsigned int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, mrb_int VAR_4, unsigned int VAR_5)
{
  uint64_t VAR_6;

  VAR_3 = FUNC_2(VAR_1, VAR_3, VAR_4 + 8);
  VAR_6 = (uint64_t)FUNC_1(VAR_2);
  if (VAR_5 & VAR_0) {
    FUNC_0(VAR_3)[VAR_4+0] = (char)(VAR_6 & 0xff);
    FUNC_0(VAR_3)[VAR_4+1] = (char)(VAR_6 >> 8);
    FUNC_0(VAR_3)[VAR_4+2] = (char)(VAR_6 >> 16);
    FUNC_0(VAR_3)[VAR_4+3] = (char)(VAR_6 >> 24);
    FUNC_0(VAR_3)[VAR_4+4] = (char)(VAR_6 >> 32);
    FUNC_0(VAR_3)[VAR_4+5] = (char)(VAR_6 >> 40);
    FUNC_0(VAR_3)[VAR_4+6] = (char)(VAR_6 >> 48);
    FUNC_0(VAR_3)[VAR_4+7] = (char)(VAR_6 >> 56);
  } else {
    FUNC_0(VAR_3)[VAR_4+0] = (char)(VAR_6 >> 56);
    FUNC_0(VAR_3)[VAR_4+1] = (char)(VAR_6 >> 48);
    FUNC_0(VAR_3)[VAR_4+2] = (char)(VAR_6 >> 40);
    FUNC_0(VAR_3)[VAR_4+3] = (char)(VAR_6 >> 32);
    FUNC_0(VAR_3)[VAR_4+4] = (char)(VAR_6 >> 24);
    FUNC_0(VAR_3)[VAR_4+5] = (char)(VAR_6 >> 16);
    FUNC_0(VAR_3)[VAR_4+6] = (char)(VAR_6 >> 8);
    FUNC_0(VAR_3)[VAR_4+7] = (char)(VAR_6 & 0xff);
  }
  return 8;
}
