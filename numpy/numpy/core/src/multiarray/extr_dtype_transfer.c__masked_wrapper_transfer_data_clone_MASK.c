
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * transferdata; int * decsrcref_transferdata; } ;
typedef TYPE_1__ _masked_wrapper_transfer_data ;
typedef int NpyAuxData ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static NpyAuxData *FUNC_5(NpyAuxData *VAR_0)
{
    _masked_wrapper_transfer_data *VAR_1 = (_masked_wrapper_transfer_data *)VAR_0;
    _masked_wrapper_transfer_data *VAR_2;


    VAR_2 = (_masked_wrapper_transfer_data *)FUNC_3(
                                    sizeof(_masked_wrapper_transfer_data));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_4(VAR_2, VAR_1, sizeof(_masked_wrapper_transfer_data));


    if (VAR_2->transferdata != ((void*)0)) {
        VAR_2->transferdata = FUNC_0(VAR_2->transferdata);
        if (VAR_2->transferdata == ((void*)0)) {
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }
    if (VAR_2->decsrcref_transferdata != ((void*)0)) {
        VAR_2->decsrcref_transferdata =
                        FUNC_0(VAR_2->decsrcref_transferdata);
        if (VAR_2->decsrcref_transferdata == ((void*)0)) {
            FUNC_1(VAR_2->transferdata);
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }

    return (NpyAuxData *)VAR_2;
}
