
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ SLIST_ENTRY ;



__attribute__((used)) static inline SLIST_ENTRY *FUNC_0(SLIST_ENTRY *VAR_0)
{
    SLIST_ENTRY *VAR_1 = VAR_0->Next;
    if (VAR_1){
        VAR_0->Next = VAR_1->Next;
        VAR_1->Next = ((void*)0);
    }
    return VAR_1;
}
