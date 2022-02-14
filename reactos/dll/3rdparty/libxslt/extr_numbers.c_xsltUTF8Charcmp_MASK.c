
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(xmlChar *VAR_0, xmlChar *VAR_1) {
    int VAR_2 = FUNC_1(VAR_0, 1);

    if (VAR_2 < 1)
        return -1;
    if (VAR_0 == ((void*)0) ) {
        if (VAR_1 == ((void*)0))
            return 0;
        return -1;
    }
    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
