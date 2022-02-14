
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef int USHORT ;
struct TYPE_4__ {int Length; int MaximumLength; scalar_t__* Buffer; } ;
typedef scalar_t__* PWCHAR ;
typedef TYPE_1__* PUNICODE_STRING ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static __inline VOID
FUNC_1(PWCHAR *VAR_0,
   PUNICODE_STRING VAR_1,
   PUNICODE_STRING VAR_2,
   USHORT VAR_3)
{
   VAR_1->Length = VAR_2->Length;
   VAR_1->MaximumLength = VAR_3 ? VAR_3 : VAR_2->MaximumLength;
   VAR_1->Buffer = (PWCHAR)(*VAR_0);
   if (VAR_2->Length)
     FUNC_0 (VAR_1->Buffer, VAR_2->Buffer, VAR_2->Length);
   VAR_1->Buffer[VAR_1->Length / sizeof(WCHAR)] = 0;
   *VAR_0 += VAR_1->MaximumLength/sizeof(WCHAR);
}
