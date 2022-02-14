
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;


 int FUNC_0 (struct config*) ;
 struct config* FUNC_1 (char*) ;
 int FUNC_2 (struct config*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_0, char *VAR_1[])
{
    struct config *VAR_2;
    int VAR_3 = 0;

    if (VAR_0 < 2) {
        FUNC_3("Usage: %s /path/to/config/file.conf", VAR_1[0]);
        return 1;
    }

    VAR_2 = FUNC_1(VAR_1[1]);
    if (!VAR_2) {
        FUNC_4("Could not open configuration file %s",
                                    VAR_1[1]);
        return 1;
    }

    FUNC_2(VAR_2, VAR_3);

    FUNC_0(VAR_2);

    return 0;
}
