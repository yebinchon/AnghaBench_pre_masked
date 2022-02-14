
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t _u8 ;
struct TYPE_4__ {TYPE_1__* ObjPool; } ;
struct TYPE_3__ {size_t* pRespArgs; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t FUNC_2 (size_t,size_t) ;
 TYPE_2__* VAR_1 ;

_u8 FUNC_3(_u8 *VAR_2, _u8 VAR_3, _u8 VAR_4)
{
    _u8 VAR_5;



    VAR_5 = FUNC_2(VAR_3, VAR_4);

    if (VAR_0 != VAR_5)
    {
        FUNC_0();
        VAR_1->ObjPool[VAR_5].pRespArgs = VAR_2;
        FUNC_1();
    }

    return VAR_5;
}
