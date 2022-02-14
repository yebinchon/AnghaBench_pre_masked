
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* root; } ;
struct TYPE_7__ {TYPE_1__ search; } ;
struct TYPE_6__ {struct TYPE_6__* next; int filename; } ;
typedef TYPE_2__ SearchItem ;
typedef TYPE_3__ HHInfo ;


 int FUNC_0 (int ) ;

void FUNC_1(HHInfo *VAR_0)
{
    SearchItem *VAR_1 = VAR_0->search.root;

    VAR_0->search.root = ((void*)0);
    while(VAR_1) {
        FUNC_0(VAR_1->filename);
        VAR_1 = VAR_1->next;
    }
}
