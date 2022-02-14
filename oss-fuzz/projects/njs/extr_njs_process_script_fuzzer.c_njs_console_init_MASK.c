
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int njs_vm_t ;
typedef int njs_int_t ;
struct TYPE_4__ {int * completions; } ;
struct TYPE_5__ {TYPE_1__ completion; int time; int posted_events; int events; int * vm; } ;
typedef TYPE_2__ njs_console_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;

__attribute__((used)) static njs_int_t
FUNC_3(njs_vm_t *VAR_3, njs_console_t *VAR_4)
{
    VAR_4->vm = VAR_3;

    FUNC_0(&VAR_4->events);
    FUNC_1(&VAR_4->posted_events);

    VAR_4->time = VAR_2;

    VAR_4->completion.completions = FUNC_2(VAR_3, ((void*)0));
    if (VAR_4->completion.completions == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
