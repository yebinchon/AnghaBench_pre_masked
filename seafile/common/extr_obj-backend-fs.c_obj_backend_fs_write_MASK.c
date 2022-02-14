
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int priv; } ;
typedef TYPE_1__ ObjBackend ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char*,char const*,int) ;
 scalar_t__ FUNC_2 (char*,void*,int,int ) ;
 int FUNC_3 (char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_4 (ObjBackend *VAR_1,
                      const char *VAR_2,
                      int VAR_3,
                      const char *VAR_4,
                      void *VAR_5,
                      int VAR_6,
                      gboolean VAR_7)
{
    char VAR_8[VAR_0];

    FUNC_1 (VAR_1->priv, VAR_4, VAR_8, VAR_2, VAR_3);





    if (FUNC_0 (VAR_8) < 0) {
        FUNC_3 ("[obj backend] Failed to create path for obj %s:%s.\n",
                      VAR_2, VAR_4);
        return -1;
    }

    if (FUNC_2 (VAR_8, VAR_5, VAR_6, VAR_7) < 0) {
        FUNC_3 ("[obj backend] Failed to write obj %s:%s.\n",
                      VAR_2, VAR_4);
        return -1;
    }






    return 0;
}
