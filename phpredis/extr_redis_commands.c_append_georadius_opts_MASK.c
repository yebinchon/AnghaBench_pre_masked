
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int smart_string ;
struct TYPE_3__ {scalar_t__ sort; scalar_t__ store; int * key; scalar_t__ count; scalar_t__ withhash; scalar_t__ withdist; scalar_t__ withcoord; } ;
typedef TYPE_1__ geoOptions ;
typedef int RedisSock ;


 int FUNC_0 (short*,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,char**,size_t*) ;

void FUNC_8(RedisSock *VAR_4, smart_string *VAR_5, short *VAR_6,
                           geoOptions *VAR_7)
{
    char *VAR_8;
    size_t VAR_9;
    int VAR_10;

    if (VAR_7->withcoord)
        FUNC_1(VAR_5, "WITHCOORD");
    if (VAR_7->withdist)
        FUNC_1(VAR_5, "WITHDIST");
    if (VAR_7->withhash)
        FUNC_1(VAR_5, "WITHHASH");


    if (VAR_7->sort == VAR_0) {
        FUNC_1(VAR_5, "ASC");
    } else if (VAR_7->sort == VAR_1) {
        FUNC_1(VAR_5, "DESC");
    }


    if (VAR_7->count) {
        FUNC_1(VAR_5, "COUNT");
        FUNC_6(VAR_5, VAR_7->count);
    }


    if (VAR_7->store != VAR_3 && VAR_7->key != ((void*)0)) {

        VAR_8 = FUNC_3(VAR_7->key);
        VAR_9 = FUNC_2(VAR_7->key);
        VAR_10 = FUNC_7(VAR_4, &VAR_8, &VAR_9);

        if (VAR_7->store == VAR_2) {
            FUNC_1(VAR_5, "STORE");
        } else {
            FUNC_1(VAR_5, "STOREDIST");
        }

        FUNC_5(VAR_5, VAR_8, VAR_9);

        FUNC_0(VAR_6, VAR_8, VAR_9);
        if (VAR_10) FUNC_4(VAR_8);
    }
}
