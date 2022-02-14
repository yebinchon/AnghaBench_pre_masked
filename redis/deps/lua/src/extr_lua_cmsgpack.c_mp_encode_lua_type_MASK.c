
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;


 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int) ;

void FUNC_9(lua_State *VAR_2, mp_buf *VAR_3, int VAR_4) {
    int VAR_5 = FUNC_2(VAR_2,-1);



    if (VAR_5 == 128 && VAR_4 == VAR_0) VAR_5 = VAR_1;
    switch(VAR_5) {
    case 129: FUNC_7(VAR_2,VAR_3); break;
    case 131: FUNC_3(VAR_2,VAR_3); break;
    case 130:

        FUNC_6(VAR_2,VAR_3); break;
    case 128: FUNC_8(VAR_2,VAR_3,VAR_4); break;
    default: FUNC_5(VAR_2,VAR_3); break;
    }
    FUNC_1(VAR_2,1);
}
