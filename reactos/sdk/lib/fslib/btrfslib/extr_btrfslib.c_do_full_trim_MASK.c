
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Size; int Flags; scalar_t__ DataSetRangesLength; scalar_t__ DataSetRangesOffset; scalar_t__ ParameterBlockLength; scalar_t__ ParameterBlockOffset; int Action; } ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_1__ DEVICE_MANAGE_DATA_SET_ATTRIBUTES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,int *,int *,int ,TYPE_1__*,int,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(HANDLE VAR_4) {
    IO_STATUS_BLOCK VAR_5;
    DEVICE_MANAGE_DATA_SET_ATTRIBUTES VAR_6;

    FUNC_1(&VAR_6, sizeof(DEVICE_MANAGE_DATA_SET_ATTRIBUTES));

    VAR_6.Size = sizeof(DEVICE_MANAGE_DATA_SET_ATTRIBUTES);
    VAR_6.Action = VAR_2;
    VAR_6.Flags = VAR_0 | VAR_1;
    VAR_6.ParameterBlockOffset = 0;
    VAR_6.ParameterBlockLength = 0;
    VAR_6.DataSetRangesOffset = 0;
    VAR_6.DataSetRangesLength = 0;

    FUNC_0(VAR_4, ((void*)0), ((void*)0), ((void*)0), &VAR_5, VAR_3, &VAR_6, sizeof(DEVICE_MANAGE_DATA_SET_ATTRIBUTES), ((void*)0), 0);
}
