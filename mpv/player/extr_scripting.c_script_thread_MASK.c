
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_arg {int client; int fname; TYPE_1__* backend; } ;
typedef int name ;
struct TYPE_2__ {char* name; scalar_t__ (* load ) (int ,int ) ;} ;


 int FUNC_0 (struct thread_arg*,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct thread_arg*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_0)
{
    FUNC_4(FUNC_5());

    struct thread_arg *VAR_1 = VAR_0;

    char VAR_2[90];
    FUNC_6(VAR_2, sizeof(VAR_2), "%s (%s)", VAR_1->backend->name,
             FUNC_2(VAR_1->client));
    FUNC_1(VAR_2);

    if (VAR_1->backend->load(VAR_1->client, VAR_1->fname) < 0)
        FUNC_0(VAR_1, "Could not load %s %s\n", VAR_1->backend->name, VAR_1->fname);

    FUNC_3(VAR_1->client);
    FUNC_8(VAR_1);
    return ((void*)0);
}
