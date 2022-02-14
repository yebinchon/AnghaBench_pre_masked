
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ SLIST_ENTRY ;



__attribute__((used)) static inline VOID FUNC_0(SLIST_ENTRY *VAR_0, SLIST_ENTRY *VAR_1)
{
    VAR_1->Next = VAR_0->Next;
    VAR_0->Next = VAR_1;
}
