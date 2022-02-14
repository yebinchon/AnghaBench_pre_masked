
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int error; int section; int data; } ;
typedef int LONG ;
typedef scalar_t__ HINF ;
typedef int DWORD ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int,char*,unsigned int,int ,...) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    unsigned int VAR_2;
    UINT VAR_3;
    HINF VAR_4;
    DWORD VAR_5;
    LONG VAR_6;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
    {
        FUNC_2( 0xdeadbeef );
        VAR_4 = FUNC_6( VAR_1[VAR_2].data, &VAR_3 );
        FUNC_5( VAR_4 != VAR_0, "line %u: open failed err %u\n", VAR_2, FUNC_1() );
        if (VAR_4 == VAR_0) continue;

        VAR_6 = FUNC_4( VAR_4, VAR_1[VAR_2].section );
        VAR_5 = FUNC_1();
        FUNC_7( "hinf=%p ret=%d err=0x%x\n", VAR_4, VAR_6, VAR_5 );
        if (VAR_6 != -1)
        {
            FUNC_5( !VAR_1[VAR_2].error, "line %u: section name %s found\n",
                VAR_2, VAR_1[VAR_2].section );
            FUNC_5( !VAR_5, "line %u: bad error code %u\n", VAR_2, VAR_5 );
        }
        else
        {
            FUNC_5( VAR_1[VAR_2].error, "line %u: section name %s not found\n",
                VAR_2, VAR_1[VAR_2].section );
            FUNC_5( VAR_5 == VAR_1[VAR_2].error, "line %u: bad error %u/%u\n",
                VAR_2, VAR_5, VAR_1[VAR_2].error );
        }
        FUNC_3( VAR_4 );
    }
}
