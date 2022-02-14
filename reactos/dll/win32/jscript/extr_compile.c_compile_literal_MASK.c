
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int str; } ;
struct TYPE_5__ {TYPE_2__ regexp; int str; int dval; int bval; } ;
struct TYPE_7__ {int type; TYPE_1__ u; } ;
typedef TYPE_3__ literal_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_5(compiler_ctx_t *VAR_9, literal_t *VAR_10)
{
    switch(VAR_10->type) {
    case 132:
        return FUNC_2(VAR_9, VAR_3, VAR_10->u.bval);
    case 131:
        return FUNC_1(VAR_9, VAR_4, VAR_10->u.dval);
    case 130:
        return FUNC_0(VAR_9, VAR_5) ? VAR_8 : VAR_2;
    case 128:
        return FUNC_3(VAR_9, VAR_7, VAR_10->u.str);
    case 129:
        return FUNC_4(VAR_9, VAR_6, VAR_10->u.regexp.str, VAR_10->u.regexp.flags);
    VAR_0;
    }
    return VAR_1;
}
