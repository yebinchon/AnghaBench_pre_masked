
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_2__ {int repo_mgr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static gboolean
FUNC_3 (const char *VAR_2)
{
    char *VAR_3 = FUNC_2 (VAR_1->repo_mgr,
                                                                   VAR_2,
                                                                   VAR_0);
    gboolean VAR_4 = (FUNC_1(VAR_3, "true") == 0);
    FUNC_0 (VAR_3);
    return VAR_4;
}
