
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ remain_files; struct TYPE_4__* new_path; struct TYPE_4__* path; } ;
typedef TYPE_1__ WTEvent ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3 (WTEvent *VAR_1)
{
    FUNC_0 (VAR_1->path);
    FUNC_0 (VAR_1->new_path);
    if (VAR_1->remain_files) {
        FUNC_1 (VAR_1->remain_files, VAR_0, ((void*)0));
        FUNC_2 (VAR_1->remain_files);
    }
    FUNC_0 (VAR_1);
}
