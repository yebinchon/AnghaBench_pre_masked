
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int colour; } ;
typedef TYPE_1__ PEN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int) ;

void FUNC_5(uint8 VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
             PEN * VAR_11)
{
  uint32 VAR_12;
  uint32 VAR_13;

  VAR_13 = VAR_11->colour;
  if (VAR_6 == 5)
  {
    VAR_13 = 0xffffffff;
    VAR_6 = 6;
  }
  if (VAR_6 == 12 || VAR_6 == 6)
  {
    VAR_12 = VAR_3[VAR_6];
    FUNC_3(VAR_2, VAR_12);
    if (VAR_4 == 16 && VAR_1 == 32)
    {
      VAR_13 = FUNC_0(VAR_13);
    }
    FUNC_2(VAR_2, VAR_13);
    FUNC_1(VAR_5, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_3(VAR_2, VAR_0);
  }
  else
  {
    FUNC_4("opcode %d in ui_line\n", VAR_6);
  }
}
