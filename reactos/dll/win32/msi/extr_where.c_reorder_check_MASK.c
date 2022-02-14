
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct expr* left; struct expr* right; } ;
struct TYPE_5__ {int * table; } ;
struct TYPE_6__ {TYPE_1__ parsed; } ;
struct TYPE_8__ {TYPE_3__ expr; TYPE_2__ column; } ;
struct expr {int type; TYPE_4__ u; } ;
typedef int UINT ;
typedef int JOINTABLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int *) ;

__attribute__((used)) static UINT FUNC_4( const struct expr *VAR_2, JOINTABLE **VAR_3,
                           BOOL VAR_4, JOINTABLE **VAR_5 )
{
    UINT VAR_6 = 0;

    switch (VAR_2->type)
    {
        case 128:
        case 131:
        case 129:
            return 0;
        case 136:
        case 135:
        case 134:
            if (FUNC_3(VAR_3, VAR_2->u.column.parsed.table))
                return VAR_1;
            *VAR_5 = VAR_2->u.column.parsed.table;
            return VAR_0;
        case 132:
        case 133:
            VAR_6 = FUNC_4(VAR_2->u.expr.right, VAR_3, VAR_4, VAR_5);

        case 130:
            VAR_6 += FUNC_4(VAR_2->u.expr.left, VAR_3, VAR_4, VAR_5);
            if (VAR_6 == 0)
                return 0;
            if (VAR_6 == VAR_0)
                FUNC_1(VAR_3, *VAR_5);
            if (VAR_4 && VAR_6 == VAR_1 + VAR_0)
                FUNC_1(VAR_3, *VAR_5);
            return VAR_6;
        default:
            FUNC_0("Unknown expr type: %i\n", VAR_2->type);
            FUNC_2(0);
            return 0x1000000;
    }
}
