
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int manager; int is_readonly; } ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;

void
FUNC_1 (SeafRepo *VAR_2)
{
    VAR_2->is_readonly = VAR_0;
    FUNC_0 (VAR_2->manager, VAR_2->id, VAR_1, "false");
}
