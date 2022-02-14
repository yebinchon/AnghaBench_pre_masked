
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int seaf_dir; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*,char*,int ,int *) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static gboolean
FUNC_3 (SeafRepo *VAR_4)
{
    gboolean VAR_5;
    char *VAR_6 = FUNC_0 (VAR_3->seaf_dir, "storage", "blocks",
                                         VAR_4->id, ((void*)0));
    if (FUNC_1 (VAR_6, VAR_1))
        VAR_5 = VAR_2;
    else
        VAR_5 = VAR_0;
    FUNC_2 (VAR_6);
    return VAR_5;
}
