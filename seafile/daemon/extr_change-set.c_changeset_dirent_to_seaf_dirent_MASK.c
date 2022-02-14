
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int modifier; int mtime; int name; int mode; int id; } ;
typedef int SeafDirent ;
typedef TYPE_1__ ChangeSetDirent ;


 int * FUNC_0 (int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static SeafDirent *
FUNC_1 (int VAR_0, ChangeSetDirent *VAR_1)
{
    return FUNC_0 (VAR_0, VAR_1->id, VAR_1->mode, VAR_1->name,
                            VAR_1->mtime, VAR_1->modifier, VAR_1->size);
}
