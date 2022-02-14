
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_2__ {int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int const,int,int) ;
 scalar_t__ FUNC_1 (int const,int ,int ,int*,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int const,int ,int ,void*,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(const int VAR_5) {
    socklen_t VAR_6 = sizeof(int);
    int VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11;


    if (FUNC_1(VAR_5, VAR_1, VAR_2, &VAR_11, &VAR_6) != 0) {
        if (VAR_3.verbose > 0)
            FUNC_2("getsockopt(SO_SNDBUF)");
        return;
    }


    VAR_8 = VAR_11;
    VAR_9 = VAR_0;

    while (VAR_8 <= VAR_9) {
        VAR_10 = ((unsigned int)(VAR_8 + VAR_9)) / 2;
        if (FUNC_3(VAR_5, VAR_1, VAR_2, (void *)&VAR_10, VAR_6) == 0) {
            VAR_7 = VAR_10;
            VAR_8 = VAR_10 + 1;
        } else {
            VAR_9 = VAR_10 - 1;
        }
    }

    if (VAR_3.verbose > 1)
        FUNC_0(VAR_4, "<%d send buffer was %d, now %d\n", VAR_5, VAR_11, VAR_7);
}
