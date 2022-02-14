
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_4__ {int m_chSocketDir; int m_chImageDirectory; int m_iPidToDump; } ;
typedef TYPE_1__ criu_native_dump_t ;
typedef int criu_native_dump ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 char* FUNC_5 (int ,char) ;
 int FUNC_6 (int,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(pid_t VAR_2,
                              char *VAR_3,
                              int VAR_4) {
    criu_native_dump_t VAR_5;
    char *VAR_6;

    FUNC_2(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.m_iPidToDump = VAR_2;
    FUNC_4(VAR_5.m_chImageDirectory, VAR_3,
            sizeof(VAR_5.m_chImageDirectory));
    VAR_6 = FUNC_5(VAR_5.m_chSocketDir,'/');
    if (VAR_6) {
        VAR_6++;
        (*VAR_6) = 0;
    }
    FUNC_0("LSCRIU (%d): Sent the dump request to the listener\n", VAR_1);
    if (FUNC_6(VAR_4,
              &VAR_5,
              sizeof(VAR_5)) == -1) {
        FUNC_1("LSCRIU (%d): Error sending dump request to the listener: %s\n",
                   VAR_1, FUNC_3(VAR_0));
        return(-1);
    }
    return 0;
}
