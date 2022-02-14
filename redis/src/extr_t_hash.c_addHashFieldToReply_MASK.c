
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char* sds ;
struct TYPE_5__ {scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;
typedef int client ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 int FUNC_1 (int *,long long) ;
 int FUNC_2 (int *) ;
 unsigned char* FUNC_3 (TYPE_1__*,unsigned char*) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,unsigned char**,unsigned int*,long long*) ;
 unsigned int FUNC_5 (unsigned char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(client *VAR_4, robj *VAR_5, sds VAR_6) {
    int VAR_7;

    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_4);
        return;
    }

    if (VAR_5->encoding == VAR_2) {
        unsigned char *VAR_8 = ((void*)0);
        unsigned int VAR_9 = VAR_3;
        long long VAR_10 = VAR_0;

        VAR_7 = FUNC_4(VAR_5, VAR_6, &VAR_8, &VAR_9, &VAR_10);
        if (VAR_7 < 0) {
            FUNC_2(VAR_4);
        } else {
            if (VAR_8) {
                FUNC_0(VAR_4, VAR_8, VAR_9);
            } else {
                FUNC_1(VAR_4, VAR_10);
            }
        }

    } else if (VAR_5->encoding == VAR_1) {
        sds VAR_11 = FUNC_3(VAR_5, VAR_6);
        if (VAR_11 == ((void*)0))
            FUNC_2(VAR_4);
        else
            FUNC_0(VAR_4, VAR_11, FUNC_5(VAR_11));
    } else {
        FUNC_6("Unknown hash encoding");
    }
}
