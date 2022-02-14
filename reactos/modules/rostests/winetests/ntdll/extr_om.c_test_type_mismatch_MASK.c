
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int attr ;
struct TYPE_3__ {int Length; int * SecurityQualityOfService; int * SecurityDescriptor; scalar_t__ Attributes; int * ObjectName; scalar_t__ RootDirectory; } ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    HANDLE VAR_1;
    NTSTATUS VAR_2;
    OBJECT_ATTRIBUTES VAR_3;

    VAR_3.Length = sizeof(VAR_3);
    VAR_3.RootDirectory = 0;
    VAR_3.ObjectName = ((void*)0);
    VAR_3.Attributes = 0;
    VAR_3.SecurityDescriptor = ((void*)0);
    VAR_3.SecurityQualityOfService = ((void*)0);

    VAR_2 = FUNC_2( &VAR_1, 0, &VAR_3, 0, 0 );
    FUNC_0(!VAR_2, "can't create event: %x\n", VAR_2);

    VAR_2 = FUNC_3( VAR_1, 30, ((void*)0) );
    FUNC_0(VAR_2 == VAR_0, "expected 0xc0000024, got %x\n", VAR_2);

    FUNC_1( VAR_1 );
}
