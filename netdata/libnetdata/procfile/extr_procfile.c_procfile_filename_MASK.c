
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {char* filename; int fd; } ;
typedef TYPE_1__ procfile ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

char *FUNC_3(procfile *VAR_1) {
    if(VAR_1->filename[0]) return VAR_1->filename;

    char VAR_2[VAR_0 + 1];
    FUNC_1(VAR_2, VAR_0, "/proc/self/fd/%d", VAR_1->fd);

    ssize_t VAR_3 = FUNC_0(VAR_2, VAR_1->filename, VAR_0);
    if(FUNC_2(VAR_3 == -1))
        FUNC_1(VAR_1->filename, VAR_0, "unknown filename for fd %d", VAR_1->fd);
    else
        VAR_1->filename[VAR_3] = '\0';




    return VAR_1->filename;
}
