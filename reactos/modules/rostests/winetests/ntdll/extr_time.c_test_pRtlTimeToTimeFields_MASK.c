
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_10__ {int Year; int Month; int Day; scalar_t__ Minute; scalar_t__ Second; int Hour; } ;
struct TYPE_9__ {int QuadPart; } ;
struct TYPE_8__ {int Year; int Month; int Day; scalar_t__ Minute; scalar_t__ Second; int Hour; } ;
typedef TYPE_1__ TIME_FIELDS ;
typedef int LONGLONG ;
typedef TYPE_2__ LARGE_INTEGER ;


 size_t FUNC_0 (int) ;
 int** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int,int,int,int,scalar_t__,scalar_t__,int,...) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    LARGE_INTEGER VAR_4 , VAR_5;
    TIME_FIELDS VAR_6;
    int VAR_7=0;
    VAR_4.QuadPart = ((ULONGLONG)0x0144017a << 32) | 0xf0b0a980;
    while( VAR_3.Year < 2110 ) {

        FUNC_3( &VAR_4, &VAR_6);
        FUNC_1( VAR_6.Year == VAR_3.Year && VAR_6.Month == VAR_3.Month &&
            VAR_6.Day == VAR_3.Day && VAR_6.Hour == VAR_3.Hour &&
            VAR_6.Minute == VAR_3.Minute && VAR_6.Second == VAR_3.Second,
            "#%d expected: %d-%d-%d %d:%d:%d  got:  %d-%d-%d %d:%d:%d\n", ++VAR_7,
            VAR_3.Year, VAR_3.Month, VAR_3.Day,
            VAR_3.Hour, VAR_3.Minute,VAR_3.Second,
            VAR_6.Year, VAR_6.Month, VAR_6.Day,
            VAR_6.Hour, VAR_6.Minute, VAR_6.Second);

        FUNC_2( &VAR_6, &VAR_5);
        FUNC_1( VAR_5.QuadPart == VAR_4.QuadPart," TimeFieldsToTime failed on %d-%d-%d %d:%d:%d. Error is %d ticks\n",
            VAR_6.Year, VAR_6.Month, VAR_6.Day,
            VAR_6.Hour, VAR_6.Minute, VAR_6.Second,
            (int) (VAR_5.QuadPart - VAR_4.QuadPart) );

        VAR_4.QuadPart += VAR_2 ;
        FUNC_3( &VAR_4, &VAR_6);
        FUNC_1( VAR_6.Year == VAR_3.Year + (VAR_3.Month ==12) &&
            VAR_6.Month == VAR_3.Month % 12 + 1 &&
            VAR_6.Day == 1 && VAR_6.Hour == 0 &&
            VAR_6.Minute == 0 && VAR_6.Second == 0,
            "#%d expected: %d-%d-%d %d:%d:%d  got:  %d-%d-%d %d:%d:%d\n", ++VAR_7,
            VAR_3.Year + (VAR_3.Month ==12),
            VAR_3.Month % 12 + 1, 1, 0, 0, 0,
            VAR_6.Year, VAR_6.Month, VAR_6.Day,
            VAR_6.Hour, VAR_6.Minute, VAR_6.Second);

        FUNC_2( &VAR_6, &VAR_5);
        FUNC_1( VAR_5.QuadPart == VAR_4.QuadPart," TimeFieldsToTime failed on %d-%d-%d %d:%d:%d. Error is %d ticks\n",
            VAR_6.Year, VAR_6.Month, VAR_6.Day,
            VAR_6.Hour, VAR_6.Minute, VAR_6.Second,
            (int) (VAR_5.QuadPart - VAR_4.QuadPart) );

        VAR_4.QuadPart -= VAR_2 ;
        if( VAR_3.Month == 12) {
            VAR_3.Month = 1;
            VAR_3.Year += 1;
        } else
            VAR_3.Month += 1;
        VAR_3.Day = VAR_0[FUNC_0(VAR_3.Year)][VAR_3.Month - 1];
        VAR_4.QuadPart += (LONGLONG) VAR_3.Day * VAR_2 * VAR_1;
    }
}
