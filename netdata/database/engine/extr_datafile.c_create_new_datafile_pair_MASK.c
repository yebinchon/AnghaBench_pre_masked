
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdengine_journalfile {scalar_t__ pos; struct rrdengine_journalfile* journalfile; } ;
struct rrdengine_instance {char* dbfiles_path; int disk_space; } ;
struct rrdengine_datafile {scalar_t__ pos; struct rrdengine_datafile* journalfile; } ;
typedef int path ;


 int VAR_0 ;
 int FUNC_0 (struct rrdengine_journalfile*) ;
 int FUNC_1 (struct rrdengine_journalfile*,struct rrdengine_journalfile*) ;
 int FUNC_2 (struct rrdengine_journalfile*,struct rrdengine_instance*,unsigned int,unsigned int) ;
 int FUNC_3 (struct rrdengine_instance*,struct rrdengine_journalfile*) ;
 int FUNC_4 (struct rrdengine_journalfile*) ;
 int FUNC_5 (struct rrdengine_journalfile*) ;
 int FUNC_6 (struct rrdengine_journalfile*,char*,int) ;
 int FUNC_7 (struct rrdengine_journalfile*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct rrdengine_journalfile*,struct rrdengine_journalfile*) ;
 struct rrdengine_journalfile* FUNC_10 (int) ;

int FUNC_11(struct rrdengine_instance *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    struct rrdengine_datafile *VAR_4;
    struct rrdengine_journalfile *VAR_5;
    int VAR_6;
    char VAR_7[VAR_0];

    FUNC_8("Creating new data and journal files in path %s", VAR_1->dbfiles_path);
    VAR_4 = FUNC_10(sizeof(*VAR_4));
    FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
    VAR_6 = FUNC_0(VAR_4);
    if (!VAR_6) {
        FUNC_6(VAR_4, VAR_7, sizeof(VAR_7));
        FUNC_8("Created data file \"%s\".", VAR_7);
    } else {
        goto error_after_datafile;
    }

    VAR_5 = FUNC_10(sizeof(*VAR_5));
    VAR_4->journalfile = VAR_5;
    FUNC_9(VAR_5, VAR_4);
    VAR_6 = FUNC_1(VAR_5, VAR_4);
    if (!VAR_6) {
        FUNC_7(VAR_4, VAR_7, sizeof(VAR_7));
        FUNC_8("Created journal file \"%s\".", VAR_7);
    } else {
        goto error_after_journalfile;
    }
    FUNC_3(VAR_1, VAR_4);
    VAR_1->disk_space += VAR_4->pos + VAR_5->pos;

    return 0;

error_after_journalfile:
    FUNC_4(VAR_4);
    FUNC_5(VAR_5);
error_after_datafile:
    FUNC_5(VAR_4);
    return VAR_6;
}
