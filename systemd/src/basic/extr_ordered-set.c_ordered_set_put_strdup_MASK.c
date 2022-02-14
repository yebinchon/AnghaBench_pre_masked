
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const OrderedSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*) ;

int FUNC_3(OrderedSet *VAR_2, const char *VAR_3) {
        char *VAR_4;
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_4 = FUNC_2(VAR_3);
        if (!VAR_4)
                return -VAR_1;

        VAR_5 = FUNC_1(VAR_2, VAR_4);
        if (VAR_5 == -VAR_0)
                return 0;

        return VAR_5;
}
