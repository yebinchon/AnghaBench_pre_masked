
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int num_chapters; TYPE_1__* chapters; } ;
struct TYPE_2__ {int metadata; } ;


 char* FUNC_0 (int ,char*) ;

char *FUNC_1(struct MPContext *VAR_0, int VAR_1)
{
    if (VAR_1 < 0 || VAR_1 >= VAR_0->num_chapters)
        return ((void*)0);
    return FUNC_0(VAR_0->chapters[VAR_1].metadata, "title");
}
