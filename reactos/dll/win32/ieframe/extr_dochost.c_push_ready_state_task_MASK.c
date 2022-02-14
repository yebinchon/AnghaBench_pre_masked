
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int header; int ready_state; int doc; } ;
typedef TYPE_1__ ready_state_task_t ;
struct TYPE_7__ {int document; } ;
typedef int READYSTATE ;
typedef TYPE_2__ DocHost ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(DocHost *VAR_3, READYSTATE VAR_4)
{
    ready_state_task_t *VAR_5 = FUNC_1(sizeof(ready_state_task_t));

    FUNC_0(VAR_3->document);
    VAR_5->doc = VAR_3->document;
    VAR_5->ready_state = VAR_4;

    FUNC_2(VAR_3, &VAR_5->header, VAR_1, VAR_2, VAR_0);
}
