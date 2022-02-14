
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ gsize ;
typedef int gchar ;
struct TYPE_7__ {int message; } ;
struct TYPE_6__ {int priv; } ;
typedef TYPE_1__ ObjBackend ;
typedef TYPE_2__ GError ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (char*,int **,scalar_t__*,TYPE_2__**) ;
 int FUNC_2 (int ,char const*,char*,char const*,int) ;
 int FUNC_3 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_4 (ObjBackend *VAR_1,
                     const char *VAR_2,
                     int VAR_3,
                     const char *VAR_4,
                     void **VAR_5,
                     int *VAR_6)
{
    char VAR_7[VAR_0];
    gsize VAR_8;
    GError *VAR_9 = ((void*)0);

    FUNC_2 (VAR_1->priv, VAR_4, VAR_7, VAR_2, VAR_3);



    FUNC_1 (VAR_7, (gchar**)VAR_5, &VAR_8, &VAR_9);
    if (VAR_9) {
        FUNC_3 ("[obj backend] Failed to read object %s: %s.\n",
                    VAR_4, VAR_9->message);
        FUNC_0 (&VAR_9);
        return -1;

    }

    *VAR_6 = (int)VAR_8;
    return 0;
}
