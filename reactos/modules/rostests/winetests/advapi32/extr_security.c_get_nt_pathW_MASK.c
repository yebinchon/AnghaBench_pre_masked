
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;
typedef int ANSI_STRING ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, UNICODE_STRING *VAR_2)
{
    UNICODE_STRING VAR_3;
    ANSI_STRING VAR_4;
    NTSTATUS VAR_5;
    BOOLEAN VAR_6;

    FUNC_4(&VAR_4, VAR_1);

    VAR_5 = FUNC_1(&VAR_3, &VAR_4, VAR_0);
    FUNC_0(!VAR_5, "RtlAnsiStringToUnicodeString failed with %08x\n", VAR_5);

    VAR_6 = FUNC_2(VAR_3.Buffer, VAR_2, ((void*)0), ((void*)0));
    FUNC_0(VAR_6, "RtlDosPathNameToNtPathName_U failed\n");

    FUNC_3(&VAR_3);
}
