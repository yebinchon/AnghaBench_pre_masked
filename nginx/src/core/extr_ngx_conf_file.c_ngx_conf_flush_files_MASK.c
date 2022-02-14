
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {int (* flush ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ ngx_open_file_t ;
struct TYPE_9__ {size_t nelts; TYPE_2__* elts; struct TYPE_9__* next; } ;
typedef TYPE_3__ ngx_list_part_t ;
struct TYPE_7__ {TYPE_3__ part; } ;
struct TYPE_10__ {int log; TYPE_1__ open_files; } ;
typedef TYPE_4__ ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(ngx_cycle_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_list_part_t *VAR_3;
    ngx_open_file_t *VAR_4;

    FUNC_0(VAR_0, VAR_1->log, 0, "flush files");

    VAR_3 = &VAR_1->open_files.part;
    VAR_4 = VAR_3->elts;

    for (VAR_2 = 0; ; VAR_2++) {

        if (VAR_2 >= VAR_3->nelts) {
            if (VAR_3->next == ((void*)0)) {
                break;
            }
            VAR_3 = VAR_3->next;
            VAR_4 = VAR_3->elts;
            VAR_2 = 0;
        }

        if (VAR_4[VAR_2].flush) {
            VAR_4[VAR_2].flush(&VAR_4[VAR_2], VAR_1->log);
        }
    }
}
