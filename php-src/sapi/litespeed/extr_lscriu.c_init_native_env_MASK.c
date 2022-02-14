
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,int ,char const*,...) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6()
{
    char *VAR_3;
    VAR_3 = FUNC_1("LSAPI_CRIU_SYNC_FD");
    if (!VAR_3)
        VAR_3 = FUNC_1("LSCAPI_CRIU_SYNC_FD");

    const char *VAR_4;
    VAR_4 = FUNC_1("LSAPI_CRIU_IMAGE_PATH");
    if (!VAR_3) {
        FUNC_4("LSCRIU (%d): LSAPI_CRIU_SYNC_FD internal environment "
                   "variable not set - contact Litespeed tech support\n", FUNC_2());
        return -1;
    }
    if (!VAR_4) {
        FUNC_4("LSCRIU (%d): LSAPI_CRIU_IMAGE_PATH internal environment "
                   "variable not set - contact Litespeed tech support\n", FUNC_2());
        return -1;
    }
    FUNC_3("LSCRIU (%d): Checkpoint dump.  ImagePath: %s\n",
               FUNC_2(), VAR_4);

    VAR_2 = FUNC_0(VAR_3);
    FUNC_3("LSCRIU (%d): Native checkpoint.  Use filepointer %d (%s) to send "
               "pid %d\n", FUNC_2(), VAR_2, VAR_3, VAR_0);
    VAR_1 = FUNC_5(VAR_4);
    return 0;
}
