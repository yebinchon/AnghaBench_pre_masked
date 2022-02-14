
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char* sds ;
struct TYPE_5__ {scalar_t__ encoding; } ;
typedef TYPE_1__ hashTypeIterator ;
typedef int client ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 int FUNC_1 (int *,long long) ;
 unsigned char* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,unsigned char**,unsigned int*,long long*) ;
 unsigned int FUNC_4 (unsigned char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(client *VAR_4, hashTypeIterator *VAR_5, int VAR_6) {
    if (VAR_5->encoding == VAR_2) {
        unsigned char *VAR_7 = ((void*)0);
        unsigned int VAR_8 = VAR_3;
        long long VAR_9 = VAR_0;

        FUNC_3(VAR_5, VAR_6, &VAR_7, &VAR_8, &VAR_9);
        if (VAR_7)
            FUNC_0(VAR_4, VAR_7, VAR_8);
        else
            FUNC_1(VAR_4, VAR_9);
    } else if (VAR_5->encoding == VAR_1) {
        sds VAR_10 = FUNC_2(VAR_5, VAR_6);
        FUNC_0(VAR_4, VAR_10, FUNC_4(VAR_10));
    } else {
        FUNC_5("Unknown hash encoding");
    }
}
