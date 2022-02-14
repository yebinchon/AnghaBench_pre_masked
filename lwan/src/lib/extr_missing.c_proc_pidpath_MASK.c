
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (void*,char const*,size_t) ;
 size_t FUNC_3 (char*,void*,size_t) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(pid_t VAR_4, void *VAR_5, size_t VAR_6)
{
    ssize_t VAR_7;

    if (FUNC_1() != VAR_4) {
        VAR_3 = VAR_1;

        return -1;
    }
    VAR_7 = FUNC_3("/proc/self/exe", VAR_5, VAR_6);
    if (VAR_7 < 0)
        return -1;

    if (VAR_7 < (ssize_t)VAR_6) {
        ((char *)VAR_5)[VAR_7] = '\0';

        return 0;
    }

    VAR_3 = VAR_2;
    return -1;
}
