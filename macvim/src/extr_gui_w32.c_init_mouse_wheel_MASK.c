
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_2__ {scalar_t__ dwPlatformId; int dwMajorVersion; int dwMinorVersion; } ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,void*,int ,int ) ;
 int FUNC_3 (int ,int ,int*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static void
FUNC_4(void)
{
    HWND VAR_10;
    UINT VAR_11;

    VAR_8 = 0;
    VAR_7 = 3;

    if ((VAR_9.dwPlatformId == VAR_1
  && VAR_9.dwMajorVersion >= 4)
     || (VAR_9.dwPlatformId == VAR_2
  && ((VAR_9.dwMajorVersion == 4
   && VAR_9.dwMinorVersion >= 10)
      || VAR_9.dwMajorVersion >= 5)))
    {

 FUNC_3(104, 0,
  &VAR_7, 0);
    }
    else if (VAR_9.dwPlatformId == VAR_2
     || (VAR_9.dwPlatformId == VAR_1
  && VAR_9.dwMajorVersion < 4))
    {



 VAR_10 = FUNC_0("MouseZ", "Magellan MSWHEEL");
 if (VAR_10)
 {
     VAR_11 = FUNC_1("MSH_SCROLL_LINES_MSG");
     if (VAR_11)
     {
  VAR_7 = (int)FUNC_2(VAR_10,
   VAR_11, 0, 0);
  VAR_8 = FUNC_1("MSWHEEL_ROLLMSG");
     }
 }
    }
}
