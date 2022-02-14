
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int mp_uint_t ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,int ) ;

void FUNC_4(const char *VAR_1, mp_uint_t VAR_2) {
    static struct device *VAR_3;
    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_1(VAR_0);
    }

    while (VAR_2--) {
        FUNC_3(VAR_3, *VAR_1++);
    }

}
