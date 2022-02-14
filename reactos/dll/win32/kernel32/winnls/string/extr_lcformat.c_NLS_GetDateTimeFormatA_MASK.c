
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int dwCodePage; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ NLS_FORMAT_NODE ;
typedef char* LPSTR ;
typedef int LPCSTR ;
typedef int LCID ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int,char*,int) ;
 int FUNC_2 (int ,int,int const*,char*,char*,int) ;
 TYPE_1__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int,int const*,int ,char*,int) ;
 int FUNC_7 (int,int ,char*,int,char*,int,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static INT FUNC_9(LCID VAR_3, DWORD VAR_4,
                                  const SYSTEMTIME* VAR_5,
                                  LPCSTR VAR_6, LPSTR VAR_7, INT VAR_8)
{
  DWORD VAR_9 = VAR_0;
  WCHAR VAR_10[128], VAR_11[128];
  INT VAR_12;

  FUNC_6("(0x%04x,0x%08x,%p,%s,%p,%d)\n", VAR_3, VAR_4, VAR_5,
        FUNC_8(VAR_6), VAR_7, VAR_8);

  if (FUNC_4(VAR_3))
  {
    FUNC_5(VAR_1);
    return 0;
  }

  if (!(VAR_4 & VAR_2))
  {
    const NLS_FORMAT_NODE *VAR_13 = FUNC_3(VAR_3, VAR_4);
    if (!VAR_13)
    {
      FUNC_5(VAR_1);
      return 0;
    }

    VAR_9 = VAR_13->dwCodePage;
  }

  if (VAR_6)
    FUNC_1(VAR_9, 0, VAR_6, -1, VAR_10, FUNC_0(VAR_10));

  if (VAR_8 > (int) FUNC_0(VAR_11))
    VAR_8 = FUNC_0(VAR_11);

  VAR_11[0] = '\0';

  VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6 ? VAR_10 : ((void*)0),
                                VAR_7 ? VAR_11 : ((void*)0), VAR_8);

  if (VAR_7)
  {
    if (VAR_11[0])
      FUNC_7(VAR_9, 0, VAR_11, VAR_12 ? -1 : VAR_8, VAR_7, VAR_8, 0, 0);
    else if (VAR_8 && VAR_12)
      *VAR_7 = '\0';
  }
  return VAR_12;
}
