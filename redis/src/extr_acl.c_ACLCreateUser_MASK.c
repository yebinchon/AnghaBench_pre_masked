
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int allowed_commands; void* patterns; void* passwords; int * allowed_subcommands; int flags; int name; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 () ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,unsigned char*,size_t) ;
 int FUNC_6 (int ,unsigned char*,size_t,TYPE_1__*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char const*,size_t) ;
 TYPE_1__* FUNC_8 (int) ;

user *FUNC_9(const char *VAR_6, size_t VAR_7) {
    if (FUNC_5(VAR_4,(unsigned char*)VAR_6,VAR_7) != VAR_5) return ((void*)0);
    user *VAR_8 = FUNC_8(sizeof(*VAR_8));
    VAR_8->name = FUNC_7(VAR_6,VAR_7);
    VAR_8->flags = VAR_3;
    VAR_8->allowed_subcommands = ((void*)0);
    VAR_8->passwords = FUNC_0();
    VAR_8->patterns = FUNC_0();
    FUNC_3(VAR_8->passwords,VAR_2);
    FUNC_2(VAR_8->passwords,VAR_1);
    FUNC_1(VAR_8->passwords,VAR_0);
    FUNC_3(VAR_8->patterns,VAR_2);
    FUNC_2(VAR_8->patterns,VAR_1);
    FUNC_1(VAR_8->patterns,VAR_0);
    FUNC_4(VAR_8->allowed_commands,0,sizeof(VAR_8->allowed_commands));
    FUNC_6(VAR_4,(unsigned char*)VAR_6,VAR_7,VAR_8,((void*)0));
    return VAR_8;
}
