
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int attr ;
typedef int UNICODE_STRING ;
struct TYPE_3__ {int Length; int * SecurityQualityOfService; int * SecurityDescriptor; int * ObjectName; int Attributes; scalar_t__ RootDirectory; } ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,TYPE_1__*,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static NTSTATUS FUNC_1( HANDLE *VAR_5, UNICODE_STRING *VAR_6 )
{
    OBJECT_ATTRIBUTES VAR_7;
    IO_STATUS_BLOCK VAR_8;

    VAR_7.Length = sizeof(VAR_7);
    VAR_7.RootDirectory = 0;
    VAR_7.Attributes = VAR_3;
    VAR_7.ObjectName = VAR_6;
    VAR_7.SecurityDescriptor = ((void*)0);
    VAR_7.SecurityQualityOfService = ((void*)0);
    return FUNC_0( VAR_5, VAR_2 | VAR_4, &VAR_7, &VAR_8, VAR_0, VAR_1 );
}
