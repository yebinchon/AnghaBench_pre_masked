
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
struct TYPE_5__ {scalar_t__ StandardBias; scalar_t__ DaylightBias; int Bias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int LONG ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int ,int ,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static WCHAR *FUNC_4(void)
{
    static const WCHAR VAR_2[] =
        {'%','0','4','u','%','0','2','u','%','0','2','u','%','0','2','u','%','0','2','u','%','0','2','u',
         '.','%','0','6','u','%','+','0','3','d',0};
    TIME_ZONE_INFORMATION VAR_3;
    SYSTEMTIME VAR_4;
    WCHAR *VAR_5;
    DWORD VAR_6;
    LONG VAR_7;

    VAR_6 = FUNC_1(&VAR_3);

    if(VAR_6 == VAR_1) return ((void*)0);
    VAR_7 = VAR_3.Bias;
    if(VAR_6 == VAR_0)
        VAR_7+= VAR_3.DaylightBias;
    else
        VAR_7+= VAR_3.StandardBias;
    if (!(VAR_5 = FUNC_2( 26 * sizeof(WCHAR) ))) return ((void*)0);

    FUNC_0(&VAR_4);
    FUNC_3( VAR_5, VAR_2, VAR_4.wYear, VAR_4.wMonth, VAR_4.wDay, VAR_4.wHour, VAR_4.wMinute, VAR_4.wSecond, VAR_4.wMilliseconds * 1000, -VAR_7);
    return VAR_5;
}
