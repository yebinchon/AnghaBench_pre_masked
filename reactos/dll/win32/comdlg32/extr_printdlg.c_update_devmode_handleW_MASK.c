
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dmSize; scalar_t__ dmDriverExtra; } ;
typedef scalar_t__ SIZE_T ;
typedef scalar_t__ LPVOID ;
typedef int * HGLOBAL ;
typedef TYPE_1__ DEVMODEW ;


 int VAR_0 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static HGLOBAL FUNC_7(HGLOBAL VAR_1, DEVMODEW *VAR_2)
{
    SIZE_T VAR_3 = FUNC_4(VAR_1);
    LPVOID VAR_4;


    if ((VAR_2->dmSize + VAR_2->dmDriverExtra) > VAR_3) {
        if (VAR_1)
            VAR_1 = FUNC_3(VAR_1, VAR_2->dmSize + VAR_2->dmDriverExtra, 0);
        else
            VAR_1 = FUNC_0(VAR_0, VAR_2->dmSize + VAR_2->dmDriverExtra);
    }

    if (VAR_1) {
        VAR_4 = FUNC_2(VAR_1);
        if (VAR_4) {
            FUNC_6(VAR_4, VAR_2, VAR_2->dmSize + VAR_2->dmDriverExtra);
            FUNC_5(VAR_1);
        }
        else
        {
            FUNC_1(VAR_1);
            VAR_1 = ((void*)0);
        }
    }
    return VAR_1;
}
