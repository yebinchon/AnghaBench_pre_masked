
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {int pool; TYPE_1__** modules; int log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_17__ {int files_n; int files; TYPE_5__* log; } ;
struct TYPE_16__ {int fd; } ;
struct TYPE_15__ {int * writer; int * next; TYPE_7__* file; } ;
struct TYPE_13__ {int (* exit_master ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_9__* VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 TYPE_9__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 int FUNC_4 (int ,int ,int ,char*) ;
 TYPE_5__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(ngx_cycle_t *VAR_5)
{
    ngx_uint_t VAR_6;

    FUNC_2(VAR_5);

    FUNC_4(VAR_0, VAR_5->log, 0, "exit");

    for (VAR_6 = 0; VAR_5->modules[VAR_6]; VAR_6++) {
        if (VAR_5->modules[VAR_6]->exit_master) {
            VAR_5->modules[VAR_6]->exit_master(VAR_5);
        }
    }

    FUNC_1(VAR_5);
    VAR_3 = *FUNC_5(VAR_1->log);

    VAR_4.fd = VAR_3.file->fd;
    VAR_3.file = &VAR_4;
    VAR_3.next = ((void*)0);
    VAR_3.writer = ((void*)0);

    VAR_2.log = &VAR_3;
    VAR_2.files = VAR_1->files;
    VAR_2.files_n = VAR_1->files_n;
    VAR_1 = &VAR_2;

    FUNC_3(VAR_5->pool);

    FUNC_0(0);
}
