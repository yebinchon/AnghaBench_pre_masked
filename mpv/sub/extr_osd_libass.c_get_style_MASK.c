
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ass_state {TYPE_1__* track; } ;
struct TYPE_7__ {int Encoding; int Name; } ;
struct TYPE_6__ {TYPE_2__* styles; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Style ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ASS_Style *FUNC_3(struct ass_state *VAR_0, char *VAR_1)
{
    ASS_Track *VAR_2 = VAR_0->track;
    if (!VAR_2)
        return ((void*)0);

    int VAR_3 = FUNC_1(VAR_2, VAR_1, -1);
    if (VAR_3 >= 0)
        return &VAR_2->styles[VAR_3];

    VAR_3 = FUNC_0(VAR_2);
    ASS_Style *VAR_4 = &VAR_2->styles[VAR_3];
    VAR_4->Name = FUNC_2(VAR_1);

    VAR_4->Encoding = -1;
    return VAR_4;
}
