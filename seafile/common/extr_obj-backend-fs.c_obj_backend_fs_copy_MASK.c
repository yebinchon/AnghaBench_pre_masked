
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priv; } ;
typedef TYPE_1__ ObjBackend ;


 int FUNC_0 (char*,char*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char const*,char*,char const*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,char const*,...) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (ObjBackend *VAR_4,
                     const char *VAR_5,
                     int VAR_6,
                     const char *VAR_7,
                     int VAR_8,
                     const char *VAR_9)
{
    char VAR_10[VAR_2];
    char VAR_11[VAR_2];

    FUNC_4 (VAR_4->priv, VAR_9, VAR_10, VAR_5, VAR_6);
    FUNC_4 (VAR_4->priv, VAR_9, VAR_11, VAR_7, VAR_8);

    if (FUNC_3 (VAR_11, VAR_1))
        return 0;

    if (FUNC_2 (VAR_11) < 0) {
        FUNC_6 ("Failed to create dst path %s for obj %s.\n",
                      VAR_11, VAR_9);
        return -1;
    }
    int VAR_12 = FUNC_5 (VAR_10, VAR_11);
    if (VAR_12 < 0 && VAR_3 != VAR_0) {
        FUNC_6 ("Failed to link %s to %s: %s.\n",
                      VAR_10, VAR_11, FUNC_7(VAR_3));
        return -1;
    }
    return VAR_12;

}
