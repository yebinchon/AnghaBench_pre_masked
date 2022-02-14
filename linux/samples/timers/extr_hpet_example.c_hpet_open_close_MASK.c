
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_1 ;

void
FUNC_3(int VAR_2, const char **VAR_3)
{
 int VAR_4;

 if (VAR_2 != 1) {
  FUNC_1(VAR_1, "hpet_open_close: device-name\n");
  return;
 }

 VAR_4 = FUNC_2(VAR_3[0], VAR_0);
 if (VAR_4 < 0)
  FUNC_1(VAR_1, "hpet_open_close: open failed\n");
 else
  FUNC_0(VAR_4);

 return;
}
