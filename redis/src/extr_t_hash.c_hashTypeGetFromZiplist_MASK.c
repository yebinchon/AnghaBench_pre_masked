
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_3__ {scalar_t__ encoding; unsigned char* ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,unsigned char**,unsigned int*,long long*) ;
 unsigned char* FUNC_4 (unsigned char*,int ) ;
 unsigned char* FUNC_5 (unsigned char*,unsigned char*) ;

int FUNC_6(robj *VAR_2, sds VAR_3,
                           unsigned char **VAR_4,
                           unsigned int *VAR_5,
                           long long *VAR_6)
{
    unsigned char *VAR_7, *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10;

    FUNC_1(VAR_2->encoding == VAR_0);

    VAR_7 = VAR_2->ptr;
    VAR_8 = FUNC_4(VAR_7, VAR_1);
    if (VAR_8 != ((void*)0)) {
        VAR_8 = FUNC_2(VAR_8, (unsigned char*)VAR_3, FUNC_0(VAR_3), 1);
        if (VAR_8 != ((void*)0)) {

            VAR_9 = FUNC_5(VAR_7, VAR_8);
            FUNC_1(VAR_9 != ((void*)0));
        }
    }

    if (VAR_9 != ((void*)0)) {
        VAR_10 = FUNC_3(VAR_9, VAR_4, VAR_5, VAR_6);
        FUNC_1(VAR_10);
        return 0;
    }

    return -1;
}
