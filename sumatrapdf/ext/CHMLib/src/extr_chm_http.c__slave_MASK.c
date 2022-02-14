
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chmHttpSlave {int fd; TYPE_1__* server; } ;
struct chmFile {int dummy; } ;
struct TYPE_2__ {struct chmFile* file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct chmHttpSlave*) ;
 int FUNC_2 (int ,struct chmFile*) ;

__attribute__((used)) static void *FUNC_3(void *VAR_0)
{
    struct chmHttpSlave *VAR_1;
    struct chmFile *VAR_2;


    VAR_1 = (struct chmHttpSlave *)VAR_0;
    VAR_2 = VAR_1->server->file;


    FUNC_2(VAR_1->fd, VAR_2);


    FUNC_0(VAR_1->fd);
    FUNC_1(VAR_1);
    return ((void*)0);
}
