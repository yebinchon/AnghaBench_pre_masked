
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * notify; int * ds3db; int * iks; int numIfaces; } ;
typedef TYPE_1__ IDirectSoundBufferImpl ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

HRESULT FUNC_7(
    IDirectSoundBufferImpl *VAR_1)
{
    FUNC_4("(%p)\n",VAR_1);



    FUNC_3(&VAR_1->numIfaces);

    if (VAR_1->iks) {
        FUNC_5("iks not NULL\n");
        FUNC_2(VAR_1->iks);
        VAR_1->iks = ((void*)0);
    }

    if (VAR_1->ds3db) {
        FUNC_5("ds3db not NULL\n");
        FUNC_0(VAR_1->ds3db);
        VAR_1->ds3db = ((void*)0);
    }

    if (VAR_1->notify) {
        FUNC_5("notify not NULL\n");
        FUNC_1(VAR_1->notify);
        VAR_1->notify = ((void*)0);
    }

    FUNC_6(VAR_1);

    return VAR_0;
}
