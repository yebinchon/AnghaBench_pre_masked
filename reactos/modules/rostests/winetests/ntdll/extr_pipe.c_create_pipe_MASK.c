
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int attr ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_5__ {int Length; int Attributes; int * SecurityQualityOfService; int * SecurityDescriptor; int * ObjectName; scalar_t__ RootDirectory; } ;
typedef int PHANDLE ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,TYPE_1__*,int *,int ,int,int ,int,int ,int ,int,int,int,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static NTSTATUS FUNC_2(PHANDLE VAR_3, ULONG VAR_4, ULONG VAR_5)
{
    IO_STATUS_BLOCK VAR_6;
    OBJECT_ATTRIBUTES VAR_7;
    UNICODE_STRING VAR_8;
    LARGE_INTEGER VAR_9;
    NTSTATUS VAR_10;

    FUNC_1(&VAR_8, VAR_2);

    VAR_7.Length = sizeof(VAR_7);
    VAR_7.RootDirectory = 0;
    VAR_7.ObjectName = &VAR_8;
    VAR_7.Attributes = 0x40;
    VAR_7.SecurityDescriptor = ((void*)0);
    VAR_7.SecurityQualityOfService = ((void*)0);

    VAR_9.QuadPart = -100000000;

    VAR_10 = FUNC_0(VAR_3, VAR_0 | VAR_1, &VAR_7, &VAR_6, VAR_4, 2 ,
                                 VAR_5, 1, 0, 0, 0xFFFFFFFF, 500, 500, &VAR_9);
    return VAR_10;
}
