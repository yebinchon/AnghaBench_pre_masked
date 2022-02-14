
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;


 int FUNC_0 (char*,int) ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(VARIANT *VAR_0)
{
    switch(FUNC_2(VAR_0)) {
    case 128:
        return FUNC_1(VAR_0);
    default:
        FUNC_0("unhandled child ID variant type: %d\n", FUNC_2(VAR_0));
        return -1;
    }
}
