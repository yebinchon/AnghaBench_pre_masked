
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int version; } ;
struct TYPE_9__ {TYPE_2__* subdir; } ;
typedef TYPE_1__ ChangeSetDirent ;
typedef TYPE_2__ ChangeSetDir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ,int ,int *) ;
 TYPE_1__* FUNC_2 (int ,int ,char const*,int ,int *,int ) ;

__attribute__((used)) static ChangeSetDir *
FUNC_3 (ChangeSetDir *VAR_2, const char *VAR_3)
{
    ChangeSetDirent *VAR_4;

    VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_3, 0, ((void*)0), 0);
    VAR_4->subdir = FUNC_1 (VAR_2->version, VAR_0, ((void*)0));
    FUNC_0 (VAR_2, VAR_4);

    return VAR_4->subdir;
}
