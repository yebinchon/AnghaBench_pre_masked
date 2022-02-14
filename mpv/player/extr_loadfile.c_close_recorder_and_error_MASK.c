
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {int * record_file; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*,char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct MPContext *VAR_0)
{
    FUNC_1(VAR_0);
    FUNC_3(VAR_0->opts->record_file);
    VAR_0->opts->record_file = ((void*)0);
    FUNC_2(VAR_0, "record-file");
    FUNC_0(VAR_0, "Disabling stream recording.\n");
}
