
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int jsdisp; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_3__ property_desc_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int const*,int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_6, vdisp_t *VAR_7, WORD VAR_8, unsigned VAR_9, jsval_t *VAR_10,
        jsval_t *VAR_11)
{
    property_desc_t VAR_12;
    const WCHAR *VAR_13;
    jsstr_t *VAR_14;
    HRESULT VAR_15;

    FUNC_2("\n");

    if(VAR_9 != 1) {
        FUNC_1("argc %d not supported\n", VAR_9);
        return VAR_2;
    }

    if(!FUNC_3(VAR_7)) {
        FUNC_1("Host object this\n");
        return VAR_1;
    }

    VAR_15 = FUNC_7(VAR_6, VAR_10[0], &VAR_14, &VAR_13);
    if(FUNC_0(VAR_15))
        return VAR_15;

    VAR_15 = FUNC_4(VAR_7->u.jsdisp, VAR_13, VAR_5, &VAR_12);
    FUNC_5(VAR_14);
    if(FUNC_0(VAR_15) && VAR_15 != VAR_0)
        return VAR_15;

    if(VAR_11)
        *VAR_11 = FUNC_6(VAR_15 == VAR_4 && (VAR_12.flags & VAR_3) != 0);
    return VAR_4;
}
