
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_mode; int st_size; } ;
typedef TYPE_1__ SeafStat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (char*,int,int ,unsigned char*) ;
 int FUNC_1 (unsigned char*,int,TYPE_1__*,int ,char const*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*,char const*,...) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(unsigned char *VAR_6, const char *VAR_7, SeafStat *VAR_8)
{
    int VAR_9;
    char VAR_10[VAR_3];
    int VAR_11;

    switch (VAR_8->st_mode & VAR_4) {
    case 128:
        VAR_9 = FUNC_3 (VAR_7, VAR_2 | VAR_1);
        if (VAR_9 < 0) {
            FUNC_4("g_open (\"%s\"): %s\n", VAR_7, FUNC_5(VAR_5));
            return -1;
        }
        if (FUNC_1(VAR_6, VAR_9, VAR_8, VAR_0, VAR_7) < 0) {
            return -1;
        }
        break;

    case 129:
        VAR_11 = FUNC_2(VAR_7, VAR_10, VAR_3);
        if (VAR_11 != VAR_8->st_size) {
            char *VAR_12 = FUNC_5(VAR_5);
            FUNC_4("readlink(\"%s\"): %s\n", VAR_7, VAR_12);
            return -1;
        }
        FUNC_0(VAR_10, VAR_11, FUNC_6(VAR_0), VAR_6);
        break;

    default:
        FUNC_4("%s: unsupported file type\n", VAR_7);
        return -1;
    }
    return 0;
}
