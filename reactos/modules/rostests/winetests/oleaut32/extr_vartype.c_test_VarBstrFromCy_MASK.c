
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LCID ;


 int FUNC_0 (int,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{


  LCID VAR_5, VAR_6;

  VAR_5 = FUNC_2(FUNC_1(VAR_0,VAR_4),VAR_2);
  VAR_6 = FUNC_2(FUNC_1(VAR_1, VAR_3), VAR_2);

  FUNC_0(0, 0, "0", VAR_5, 34);
  FUNC_0(0, 10000, "1", VAR_5, 35);
  FUNC_0(0, 15000, "1.5", VAR_5, 36);
  FUNC_0(0xffffffff, ((15000)^0xffffffff)+1, "-1.5", VAR_5, 37);

  FUNC_0(0, 0xffffffff, "429496.7295", VAR_5, 39);

  FUNC_0(1, 0, "429496.7296", VAR_5, 41);

  FUNC_0(0x7fffffff, 0xffffffff, "922337203685477.5807", VAR_5, 43);
  FUNC_0(0, 9, "0.0009", VAR_5, 44);
  FUNC_0(0, 9, "0,0009", VAR_6, 45);


}
