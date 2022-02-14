
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdengine_instance {int last_fileno; int dbfiles_path; } ;


 int FUNC_0 (struct rrdengine_instance*,int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct rrdengine_instance*) ;

int FUNC_4(struct rrdengine_instance *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_3(VAR_0);
    if (VAR_1 < 0) {
        FUNC_1("Failed to scan path \"%s\".", VAR_0->dbfiles_path);
        return VAR_1;
    } else if (0 == VAR_1) {
        FUNC_2("Data files not found, creating in path \"%s\".", VAR_0->dbfiles_path);
        VAR_1 = FUNC_0(VAR_0, 1, 1);
        if (VAR_1) {
            FUNC_1("Failed to create data and journal files in path \"%s\".", VAR_0->dbfiles_path);
            return VAR_1;
        }
        VAR_0->last_fileno = 1;
    }

    return 0;
}
