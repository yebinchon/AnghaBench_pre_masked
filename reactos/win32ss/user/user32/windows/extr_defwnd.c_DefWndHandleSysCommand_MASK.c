
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int ULONG_PTR ;
struct TYPE_3__ {short x; short y; } ;
typedef TYPE_1__ POINT ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int,TYPE_1__) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,int ) ;

LRESULT
FUNC_9(HWND VAR_5, WPARAM VAR_6, LPARAM VAR_7)
{
  POINT VAR_8;
  LRESULT VAR_9;

  if (!FUNC_5( VAR_5 )) return 0;

  switch (VAR_6 & 0xfff0)
    {
      case 135:
      case 130:

      case 136:
      case 139:
      case 131:
      case 137:
      case 138:
      case 132:
      case 142:
      case 141:
        FUNC_7( VAR_5, VAR_4, VAR_6, VAR_7, (ULONG_PTR)&VAR_9, VAR_1, VAR_0);
        return 0;

      default:
        break;
    }

  if (FUNC_4(VAR_3))
  {
     FUNC_7( VAR_5, VAR_4, VAR_6, VAR_7, (ULONG_PTR)&VAR_9, VAR_1, VAR_0);
     if (VAR_9) return 0;
  }

  switch (VAR_6 & 0xfff0)
    {

      case 128:
      case 140:
        {
          VAR_8.x = (short)FUNC_6(VAR_7);
          VAR_8.y = (short)FUNC_3(VAR_7);
          FUNC_0(VAR_5, VAR_6, VAR_8);
        }
 break;

      case 129:
        FUNC_8( "taskman.exe", VAR_2 );
        break;


      case 134:
      case 133:
        FUNC_1( VAR_6, VAR_7);
        break;

      default:
        FUNC_2("Unimplemented DefWndHandleSysCommand wParam 0x%x\n",VAR_6);
        break;
    }

  return(0);
}
