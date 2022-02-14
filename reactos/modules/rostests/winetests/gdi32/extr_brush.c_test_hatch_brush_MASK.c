
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lb ;
struct TYPE_3__ {int lbColor; int lbStyle; int lbHatch; } ;
typedef TYPE_1__ LOGBRUSH ;
typedef scalar_t__ HBRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    int VAR_4, VAR_5;
    HBRUSH VAR_6;
    LOGBRUSH VAR_7;

    for (VAR_4 = 0; VAR_4 < 20; VAR_4++)
    {
        FUNC_5( 0xdeadbeef );
        VAR_6 = FUNC_0( VAR_4, FUNC_4(12,34,56) );
        if (VAR_4 < VAR_2)
        {
            FUNC_6( VAR_6 != 0, "%u: CreateHatchBrush failed err %u\n", VAR_4, FUNC_2() );
            VAR_5 = FUNC_3( VAR_6, sizeof(VAR_7), &VAR_7 );
            FUNC_6( VAR_5 == sizeof(VAR_7), "wrong size %u\n", VAR_5 );
            FUNC_6( VAR_7.lbColor == FUNC_4(12,34,56), "wrong color %08x\n", VAR_7.lbColor );
            if (VAR_4 <= VAR_3)
            {
                FUNC_6( VAR_7.lbStyle == VAR_0, "wrong style %u\n", VAR_7.lbStyle );
                FUNC_6( VAR_7.lbHatch == VAR_4, "wrong hatch %lu/%u\n", VAR_7.lbHatch, VAR_4 );
            }
            else
            {
                FUNC_6( VAR_7.lbStyle == VAR_1, "wrong style %u\n", VAR_7.lbStyle );
                FUNC_6( VAR_7.lbHatch == 0, "wrong hatch %lu\n", VAR_7.lbHatch );
            }
            FUNC_1( VAR_6 );
        }
        else
        {
            FUNC_6( !VAR_6, "%u: CreateHatchBrush succeeded\n", VAR_4 );
            FUNC_6( FUNC_2() == 0xdeadbeef, "wrong error %u\n", FUNC_2() );
        }
    }
}
