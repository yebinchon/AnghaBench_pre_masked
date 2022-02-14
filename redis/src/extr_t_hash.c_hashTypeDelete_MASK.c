
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_3__ {scalar_t__ encoding; unsigned char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 unsigned char* FUNC_5 (unsigned char*,unsigned char**) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned char*,int ,int) ;
 unsigned char* FUNC_7 (unsigned char*,int ) ;

int FUNC_8(robj *VAR_4, sds VAR_5) {
    int VAR_6 = 0;

    if (VAR_4->encoding == VAR_2) {
        unsigned char *VAR_7, *VAR_8;

        VAR_7 = VAR_4->ptr;
        VAR_8 = FUNC_7(VAR_7, VAR_3);
        if (VAR_8 != ((void*)0)) {
            VAR_8 = FUNC_6(VAR_8, (unsigned char*)VAR_5, FUNC_3(VAR_5), 1);
            if (VAR_8 != ((void*)0)) {
                VAR_7 = FUNC_5(VAR_7,&VAR_8);
                VAR_7 = FUNC_5(VAR_7,&VAR_8);
                VAR_4->ptr = VAR_7;
                VAR_6 = 1;
            }
        }
    } else if (VAR_4->encoding == VAR_1) {
        if (FUNC_0((dict*)VAR_4->ptr, VAR_5) == VAR_0) {
            VAR_6 = 1;


            if (FUNC_2(VAR_4->ptr)) FUNC_1(VAR_4->ptr);
        }

    } else {
        FUNC_4("Unknown hash encoding");
    }
    return VAR_6;
}
