
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct rrdengine_instance* data; } ;
typedef TYPE_3__ uv_work_t ;
struct TYPE_6__ {struct rrdengine_datafile* first; } ;
struct rrdengine_instance {TYPE_2__ datafiles; } ;
struct TYPE_5__ {struct extent_info* first; } ;
struct rrdengine_datafile {TYPE_1__ extents; } ;
struct rrdeng_page_descr {int dummy; } ;
struct extent_info {unsigned int number_of_pages; struct extent_info* next; struct rrdeng_page_descr** pages; } ;


 int FUNC_0 (struct extent_info*) ;
 int FUNC_1 (struct rrdengine_instance*,struct rrdeng_page_descr*,int ) ;

__attribute__((used)) static void FUNC_2(uv_work_t *VAR_0)
{
    struct rrdengine_instance *VAR_1 = VAR_0->data;
    struct rrdengine_datafile *VAR_2;
    struct extent_info *VAR_3, *VAR_4;
    struct rrdeng_page_descr *VAR_5;
    unsigned VAR_6, VAR_7;


    VAR_2 = VAR_1->datafiles.first;

    for (VAR_3 = VAR_2->extents.first ; VAR_3 != ((void*)0) ; VAR_3 = VAR_4) {
        VAR_6 = VAR_3->number_of_pages;
        for (VAR_7 = 0 ; VAR_7 < VAR_6 ; ++VAR_7) {
            VAR_5 = VAR_3->pages[VAR_7];
            FUNC_1(VAR_1, VAR_5, 0);
        }
        VAR_4 = VAR_3->next;
        FUNC_0(VAR_3);
    }
}
