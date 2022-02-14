
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* child; scalar_t__ name; } ;
typedef int HWND ;
typedef TYPE_1__ ContentItem ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(HWND VAR_0, ContentItem *VAR_1, ContentItem *VAR_2)
{
    while(VAR_2) {
        if(VAR_2->name) {
            FUNC_0(VAR_0, VAR_1, VAR_2);
            FUNC_1(VAR_0, VAR_2, VAR_2->child);
        }else {
            FUNC_1(VAR_0, VAR_1, VAR_2->child);
        }
        VAR_2 = VAR_2->next;
    }
}
