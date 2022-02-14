
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct rrdengine_journalfile* first; } ;
struct rrdengine_journalfile {struct rrdengine_journalfile* next; TYPE_1__ extents; struct rrdengine_journalfile* journalfile; } ;
struct TYPE_4__ {struct rrdengine_journalfile* first; } ;
struct rrdengine_instance {TYPE_2__ datafiles; } ;
struct rrdengine_datafile {struct rrdengine_datafile* next; TYPE_1__ extents; struct rrdengine_datafile* journalfile; } ;
struct extent_info {struct extent_info* next; TYPE_1__ extents; struct extent_info* journalfile; } ;


 int FUNC_0 (struct rrdengine_journalfile*) ;
 int FUNC_1 (struct rrdengine_journalfile*,struct rrdengine_journalfile*) ;
 int FUNC_2 (struct rrdengine_journalfile*) ;

void FUNC_3(struct rrdengine_instance *VAR_0)
{
    struct rrdengine_datafile *VAR_1, *VAR_2;
    struct rrdengine_journalfile *VAR_3;
    struct extent_info *VAR_4, *VAR_5;

    for (VAR_1 = VAR_0->datafiles.first ; VAR_1 != ((void*)0) ; VAR_1 = VAR_2) {
        VAR_3 = VAR_1->journalfile;
        VAR_2 = VAR_1->next;

        for (VAR_4 = VAR_1->extents.first ; VAR_4 != ((void*)0) ; VAR_4 = VAR_5) {
            VAR_5 = VAR_4->next;
            FUNC_2(VAR_4);
        }
        FUNC_1(VAR_3, VAR_1);
        FUNC_0(VAR_1);
        FUNC_2(VAR_3);
        FUNC_2(VAR_1);

    }
}
