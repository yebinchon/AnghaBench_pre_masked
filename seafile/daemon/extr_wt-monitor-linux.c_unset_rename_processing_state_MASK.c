
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int processing; int * old_path; scalar_t__ last_cookie; } ;
typedef TYPE_1__ RenameInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) inline static void
FUNC_1 (RenameInfo *VAR_1)
{
    VAR_1->last_cookie = 0;
    FUNC_0 (VAR_1->old_path);
    VAR_1->old_path = ((void*)0);
    VAR_1->processing = VAR_0;
}
