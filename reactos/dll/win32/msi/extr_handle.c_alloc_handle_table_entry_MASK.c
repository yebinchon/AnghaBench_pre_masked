
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int unk; int obj; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ msi_handle_info ;
typedef size_t UINT ;
typedef size_t MSIHANDLE ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static MSIHANDLE FUNC_2(void)
{
    UINT VAR_2;


    for(VAR_2=0; VAR_2<VAR_1; VAR_2++)
        if( !VAR_0[VAR_2].u.obj && !VAR_0[VAR_2].u.unk )
            break;
    if( VAR_2==VAR_1 )
    {
        msi_handle_info *VAR_3;
        int VAR_4;
        if (VAR_1 == 0)
        {
            VAR_4 = 256;
            VAR_3 = FUNC_0(VAR_4*sizeof(msi_handle_info));
        }
        else
        {
            VAR_4 = VAR_1 * 2;
            VAR_3 = FUNC_1(VAR_0,
                            VAR_4*sizeof(msi_handle_info));
        }
        if (!VAR_3)
            return 0;
        VAR_0 = VAR_3;
        VAR_1 = VAR_4;
    }
    return VAR_2 + 1;
}
