
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t left; scalar_t__ err; } ;
typedef TYPE_1__ mp_cur ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_6 (int *,TYPE_1__*) ;

int FUNC_7(lua_State *VAR_3, int VAR_4, int VAR_5) {
    size_t VAR_6;
    const char *VAR_7;
    mp_cur VAR_8;
    int VAR_9;
    int VAR_10 = (!VAR_4 && !VAR_5);

    VAR_7 = FUNC_0(VAR_3,1,&VAR_6);

    if (VAR_5 < 0 || VAR_4 < 0)
        return FUNC_2(VAR_3,
            "Invalid request to unpack with offset of %d and limit of %d.",
            VAR_5, VAR_6);
    else if (VAR_5 > VAR_6)
        return FUNC_2(VAR_3,
            "Start offset %d greater than input length %d.", VAR_5, VAR_6);

    if (VAR_10) VAR_4 = VAR_0;

    FUNC_5(&VAR_8,(const unsigned char *)VAR_7+VAR_5,VAR_6-VAR_5);



    for(VAR_9 = 0; VAR_8.left > 0 && VAR_9 < VAR_4; VAR_9++) {
        FUNC_6(VAR_3,&VAR_8);

        if (VAR_8.err == VAR_2) {
            return FUNC_2(VAR_3,"Missing bytes in input.");
        } else if (VAR_8.err == VAR_1) {
            return FUNC_2(VAR_3,"Bad data format in input.");
        }
    }

    if (!VAR_10) {



        int VAR_11 = VAR_6 - VAR_8.left;

        FUNC_1(VAR_3, 1, "in function mp_unpack_full");


        FUNC_4(VAR_3, VAR_8.left == 0 ? -1 : VAR_11);






        FUNC_3(VAR_3, 2);
        VAR_9 += 1;
    }

    return VAR_9;
}
