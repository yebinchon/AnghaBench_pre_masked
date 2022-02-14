
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int priv; } ;
typedef int SeafStat ;
typedef TYPE_1__ ObjBackend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,char*,char const*,int) ;
 scalar_t__ FUNC_1 (char*,int *) ;

__attribute__((used)) static gboolean
FUNC_2 (ObjBackend *VAR_3,
                       const char *VAR_4,
                       int VAR_5,
                       const char *VAR_6)
{
    char VAR_7[VAR_1];
    SeafStat VAR_8;

    FUNC_0 (VAR_3->priv, VAR_6, VAR_7, VAR_4, VAR_5);

    if (FUNC_1 (VAR_7, &VAR_8) == 0)
        return VAR_2;

    return VAR_0;
}
