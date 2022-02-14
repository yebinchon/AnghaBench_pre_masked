
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entries; int dir_id; int version; } ;
typedef TYPE_1__ SeafDir ;
typedef int ChangeSetDir ;


 int * FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static ChangeSetDir *
FUNC_1 (SeafDir *VAR_0)
{
    return FUNC_0 (VAR_0->version, VAR_0->dir_id, VAR_0->entries);
}
