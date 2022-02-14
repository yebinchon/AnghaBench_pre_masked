
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;

void FUNC_4(uint8 VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
  uint32 VAR_9;

  if (VAR_4 == 0)
  {
    FUNC_1(VAR_1, 0);
    VAR_4 = 12;
  }
  else if (VAR_4 == 5)
  {
    FUNC_1(VAR_1, 0xffffffff);
    VAR_4 = 6;
  }
  else if (VAR_4 == 15)
  {
    FUNC_1(VAR_1, 0xffffffff);
    VAR_4 = 12;
  }
  if (VAR_4 == 12 || VAR_4 == 6)
  {
    VAR_9 = VAR_2[VAR_4];
    FUNC_2(VAR_1, VAR_9);
    FUNC_0(VAR_3, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_2(VAR_1, VAR_0);
  }
  else
  {
    FUNC_3("opcode %d in ui_destblt\n", VAR_4);
  }
}
