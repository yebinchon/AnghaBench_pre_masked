
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
typedef int device_extension ;
struct TYPE_3__ {int count; void* offset; void* objid; void* root; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_1__ EXTENT_DATA_REF ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,void*,int ,TYPE_1__*,int *,int ,int ,int,int ) ;

NTSTATUS FUNC_1(device_extension* VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5,
                                       uint64_t VAR_6, uint32_t VAR_7, bool VAR_8, PIRP VAR_9) {
    EXTENT_DATA_REF VAR_10;

    VAR_10.root = VAR_4;
    VAR_10.objid = VAR_5;
    VAR_10.offset = VAR_6;
    VAR_10.count = VAR_7;

    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_10, ((void*)0), 0, 0, VAR_8, VAR_9);
}
