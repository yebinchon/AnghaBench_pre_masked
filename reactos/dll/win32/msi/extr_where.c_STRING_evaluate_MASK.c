
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * sval; int column; } ;
struct expr {int type; TYPE_2__ u; } ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int rec_index; TYPE_1__* db; } ;
struct TYPE_5__ {int strings; } ;
typedef TYPE_3__ MSIWHEREVIEW ;
typedef int MSIRECORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int * FUNC_1 (int const*,int ) ;
 int FUNC_2 (int *,int const*,int *) ;
 int * FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static UINT FUNC_4( MSIWHEREVIEW *VAR_2, const UINT VAR_3[],
                                     const struct expr *VAR_4,
                                     const MSIRECORD *VAR_5,
                                     const WCHAR **VAR_6 )
{
    UINT VAR_7 = 0, VAR_8 = VAR_1;

    switch( VAR_4->type )
    {
    case 130:
        VAR_8 = FUNC_2(&VAR_4->u.column, VAR_3, &VAR_7);
        if (VAR_8 == VAR_1)
            *VAR_6 = FUNC_3(VAR_2->db->strings, VAR_7, ((void*)0));
        else
            *VAR_6 = ((void*)0);
        break;

    case 129:
        *VAR_6 = VAR_4->u.sval;
        break;

    case 128:
        *VAR_6 = FUNC_1(VAR_5, ++VAR_2->rec_index);
        break;

    default:
        FUNC_0("Invalid expression type\n");
        VAR_8 = VAR_0;
        *VAR_6 = ((void*)0);
        break;
    }
    return VAR_8;
}
