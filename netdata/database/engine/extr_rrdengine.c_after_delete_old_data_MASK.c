
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct rrdengine_instance* data; } ;
typedef TYPE_3__ uv_work_t ;
struct TYPE_6__ {int * data; } ;
struct rrdengine_worker_config {int async; TYPE_2__ now_deleting; } ;
struct rrdengine_journalfile {unsigned int pos; struct rrdengine_journalfile* journalfile; } ;
struct TYPE_5__ {struct rrdengine_journalfile* first; } ;
struct rrdengine_instance {unsigned int disk_space; TYPE_1__ datafiles; struct rrdengine_worker_config worker_config; } ;
struct rrdengine_datafile {unsigned int pos; struct rrdengine_datafile* journalfile; } ;
typedef int path ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rrdengine_instance*,struct rrdengine_journalfile*) ;
 int FUNC_2 (struct rrdengine_journalfile*) ;
 int FUNC_3 (struct rrdengine_journalfile*,struct rrdengine_journalfile*) ;
 int FUNC_4 (struct rrdengine_journalfile*) ;
 int FUNC_5 (struct rrdengine_journalfile*,char*,int) ;
 int FUNC_6 (struct rrdengine_journalfile*,char*,int) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(uv_work_t *VAR_1, int VAR_2)
{
    struct rrdengine_instance *VAR_3 = VAR_1->data;
    struct rrdengine_worker_config* VAR_4 = &VAR_3->worker_config;
    struct rrdengine_datafile *VAR_5;
    struct rrdengine_journalfile *VAR_6;
    unsigned VAR_7, VAR_8, VAR_9;
    int VAR_10;
    char VAR_11[VAR_0];

    (void)VAR_2;
    VAR_5 = VAR_3->datafiles.first;
    VAR_6 = VAR_5->journalfile;
    VAR_9 = VAR_5->pos;
    VAR_8 = VAR_6->pos;
    VAR_7 = 0;

    FUNC_7("Deleting data and journal file pair.");
    FUNC_1(VAR_3, VAR_5);
    VAR_10 = FUNC_3(VAR_6, VAR_5);
    if (!VAR_10) {
        FUNC_6(VAR_5, VAR_11, sizeof(VAR_11));
        FUNC_7("Deleted journal file \"%s\".", VAR_11);
        VAR_7 += VAR_8;
    }
    VAR_10 = FUNC_2(VAR_5);
    if (!VAR_10) {
        FUNC_5(VAR_5, VAR_11, sizeof(VAR_11));
        FUNC_7("Deleted data file \"%s\".", VAR_11);
        VAR_7 += VAR_9;
    }
    FUNC_4(VAR_6);
    FUNC_4(VAR_5);

    VAR_3->disk_space -= VAR_7;
    FUNC_7("Reclaimed %u bytes of disk space.", VAR_7);


    VAR_4->now_deleting.data = ((void*)0);

    FUNC_0(0 == FUNC_8(&VAR_4->async));
}
