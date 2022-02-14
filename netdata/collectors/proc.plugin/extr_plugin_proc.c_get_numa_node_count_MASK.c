
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; int * d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,int ,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;

int FUNC_7(void)
{
    static int VAR_3 = -1;

    if (VAR_3 != -1)
        return VAR_3;

    VAR_3 = 0;

    char VAR_4[VAR_1 + 1];
    FUNC_5(VAR_4, VAR_1, "%s%s", VAR_2, "/sys/devices/system/node");
    char *VAR_5 = FUNC_1("plugin:proc:/sys/devices/system/node", "directory to monitor", VAR_4);

    DIR *VAR_6 = FUNC_3(VAR_5);
    if(VAR_6) {
        struct dirent *VAR_7 = ((void*)0);
        while((VAR_7 = FUNC_4(VAR_6))) {
            if(VAR_7->d_type != VAR_0)
                continue;

            if(FUNC_6(VAR_7->d_name, "node", 4) != 0)
                continue;

            if(!FUNC_2(VAR_7->d_name[4]))
                continue;

            VAR_3++;
        }
        FUNC_0(VAR_6);
    }

    return VAR_3;
}
