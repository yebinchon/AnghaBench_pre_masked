
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdi_obj_funcs {int dummy; } ;
typedef int WORD ;
typedef int PVOID ;
typedef int * HGDIOBJ ;
typedef scalar_t__ GDILOOBJTYPE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int ,scalar_t__) ;

HGDIOBJ
FUNC_3(
    PVOID VAR_4,
    WORD VAR_5,
    const struct gdi_obj_funcs *VAR_6)
{
    GDILOOBJTYPE VAR_7;


    VAR_7 = FUNC_1(VAR_5);
    if ((VAR_7 != VAR_3) &&
        (VAR_7 != VAR_2) &&
        (VAR_7 != VAR_1))
    {

        FUNC_0(VAR_0);
        return ((void*)0);
    }


    return FUNC_2(VAR_4, VAR_7);
}
