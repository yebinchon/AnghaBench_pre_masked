
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_core_single_number_file {int found; int fd; scalar_t__ value; int filename; } ;
struct cpu_chart {struct per_core_single_number_file* files; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int,char*,int) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct cpu_chart *VAR_4, size_t VAR_5, size_t VAR_6) {
    char VAR_7[50 + 1];
    size_t VAR_8, VAR_9 = 0, VAR_10 = 0;

    for(VAR_8 = 0; VAR_8 < VAR_5 ; VAR_8++) {
        struct per_core_single_number_file *VAR_11 = &VAR_4[VAR_8].files[VAR_6];

        VAR_11->found = 0;

        if(FUNC_7(!VAR_11->filename))
            continue;

        if(FUNC_7(VAR_11->fd == -1)) {
            VAR_11->fd = FUNC_4(VAR_11->filename, VAR_1);
            if (FUNC_7(VAR_11->fd == -1)) {
                FUNC_1("Cannot open file '%s'", VAR_11->filename);
                continue;
            }
        }

        ssize_t VAR_12 = FUNC_5(VAR_11->fd, VAR_7, 50);
        if(FUNC_7(VAR_12 < 0)) {


            FUNC_1("Cannot read file '%s'", VAR_11->filename);
            FUNC_0(VAR_11->fd);
            VAR_11->fd = -1;
            continue;
        }
        else {



            VAR_7[VAR_12] = '\0';

            if(FUNC_7(VAR_3 != VAR_0)) {
                FUNC_0(VAR_11->fd);
                VAR_11->fd = -1;
            }
            else if(FUNC_3(VAR_11->fd, 0, VAR_2) == -1) {
                FUNC_1("Cannot seek in file '%s'", VAR_11->filename);
                FUNC_0(VAR_11->fd);
                VAR_11->fd = -1;
            }
        }

        VAR_9++;
        VAR_11->found = 1;

        VAR_11->value = FUNC_6(VAR_7, ((void*)0));
        if(FUNC_2(VAR_11->value != 0))
            VAR_10++;
    }

    if(VAR_9 == 0)
        return -1;

    if(VAR_10 == 0)
        return 0;

    return (int)VAR_10;
}
