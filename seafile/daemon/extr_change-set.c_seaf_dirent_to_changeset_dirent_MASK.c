
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int modifier; int mtime; int name; int mode; int id; } ;
typedef TYPE_1__ SeafDirent ;
typedef int ChangeSetDirent ;


 int * FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ChangeSetDirent *
FUNC_1 (SeafDirent *VAR_0)
{
    return FUNC_0 (VAR_0->id, VAR_0->mode, VAR_0->name,
                                 VAR_0->mtime, VAR_0->modifier, VAR_0->size);
}
