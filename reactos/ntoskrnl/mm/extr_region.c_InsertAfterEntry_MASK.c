
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* Flink; struct TYPE_4__* Blink; } ;
typedef TYPE_1__* PLIST_ENTRY ;



__attribute__((used)) static VOID
FUNC_0(PLIST_ENTRY VAR_0,
                 PLIST_ENTRY VAR_1)



{
    VAR_0->Flink->Blink = VAR_1;

    VAR_1->Flink = VAR_0->Flink;
    VAR_1->Blink = VAR_0;

    VAR_0->Flink = VAR_1;
}
