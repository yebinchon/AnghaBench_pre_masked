
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef void* USHORT ;
struct TYPE_3__ {void* NumberOfIdEntries; void* NumberOfNamedEntries; scalar_t__ MinorVersion; scalar_t__ MajorVersion; scalar_t__ TimeDateStamp; scalar_t__ Characteristics; } ;
typedef TYPE_1__* PIMAGE_RESOURCE_DIRECTORY ;



__attribute__((used)) static
VOID
FUNC_0(
    PIMAGE_RESOURCE_DIRECTORY VAR_0,
    USHORT VAR_1,
    USHORT VAR_2)
{
    VAR_0->Characteristics = 0;
    VAR_0->TimeDateStamp = 0;
    VAR_0->MajorVersion = 0;
    VAR_0->MinorVersion = 0;
    VAR_0->NumberOfNamedEntries = VAR_1;
    VAR_0->NumberOfIdEntries = VAR_2;
}
