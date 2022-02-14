
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ti ;
typedef char WCHAR ;
struct TYPE_6__ {int liKeBootTime; } ;
struct TYPE_5__ {int Milliseconds; int Second; int Minute; int Hour; int Day; int Month; int Year; } ;
typedef TYPE_1__ TIME_FIELDS ;
typedef TYPE_2__ SYSTEM_TIMEOFDAY_INFORMATION ;


 int FUNC_0 (int ,TYPE_2__*,int,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static WCHAR *FUNC_4(void)
{
    static const WCHAR VAR_1[] =
        {'%','0','4','u','%','0','2','u','%','0','2','u','%','0','2','u','%','0','2','u','%','0','2','u',
         '.','%','0','6','u','+','0','0','0',0};
    SYSTEM_TIMEOFDAY_INFORMATION VAR_2;
    TIME_FIELDS VAR_3;
    WCHAR *VAR_4;

    if (!(VAR_4 = FUNC_2( 26 * sizeof(WCHAR) ))) return ((void*)0);

    FUNC_0( VAR_0, &VAR_2, sizeof(VAR_2), ((void*)0) );
    FUNC_1( &VAR_2.liKeBootTime, &VAR_3 );
    FUNC_3( VAR_4, VAR_1, VAR_3.Year, VAR_3.Month, VAR_3.Day, VAR_3.Hour, VAR_3.Minute, VAR_3.Second, VAR_3.Milliseconds * 1000 );
    return VAR_4;
}
