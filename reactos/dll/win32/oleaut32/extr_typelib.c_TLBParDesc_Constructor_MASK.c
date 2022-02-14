
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int custdata_list; } ;
typedef TYPE_1__ TLBParDesc ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static TLBParDesc *FUNC_2(UINT VAR_0)
{
    TLBParDesc *VAR_1;

    VAR_1 = FUNC_0(sizeof(TLBParDesc) * VAR_0);
    if(!VAR_1)
        return ((void*)0);

    while(VAR_0){
        FUNC_1(&VAR_1[VAR_0-1].custdata_list);
        --VAR_0;
    }

    return VAR_1;
}
