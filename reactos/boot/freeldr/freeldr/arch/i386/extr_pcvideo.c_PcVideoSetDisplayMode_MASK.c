
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VIDEODISPLAYMODE ;
typedef scalar_t__ USHORT ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,int *,int ) ;

VIDEODISPLAYMODE
FUNC_8(char *VAR_5, BOOLEAN VAR_6)
{
  USHORT VAR_7 = VAR_4;

  if (((void*)0) == VAR_5 || '\0' == *VAR_5)
    {
      FUNC_2(! VAR_6);
      return VAR_0;
    }

  if (VAR_1 == FUNC_1())
    {
      FUNC_4("CGA or other display adapter detected.\n");
      FUNC_6("CGA or other display adapter detected.\n");
      FUNC_6("Using 80x25 text mode.\n");
      VAR_7 = VAR_4;
    }
  else if (VAR_2 == FUNC_1())
    {
      FUNC_4("EGA display adapter detected.\n");
      FUNC_6("EGA display adapter detected.\n");
      FUNC_6("Using 80x25 text mode.\n");
      VAR_7 = VAR_4;
    }
  else
    {
      FUNC_4("VGA display adapter detected.\n");

      if (0 == FUNC_5(VAR_5, "NORMAL_VGA"))
        {
          VAR_7 = VAR_4;
        }
      else if (0 == FUNC_5(VAR_5, "EXTENDED_VGA"))
        {
          VAR_7 = VAR_3;
        }
      else
        {
          VAR_7 = (USHORT)FUNC_7(VAR_5, ((void*)0), 0);
        }
    }

  if (! FUNC_3(VAR_7))
    {
      FUNC_6("Error: unable to set video display mode 0x%x\n", (int) VAR_7);
      FUNC_6("Defaulting to 80x25 text mode.\n");
      FUNC_6("Press any key to continue.\n");
      FUNC_0();

      FUNC_3(VAR_4);
    }

  FUNC_2(! VAR_6);

  return VAR_0;
}
