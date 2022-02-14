
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int*,int*) ;
 int FUNC_1 (int,int ,int ,size_t) ;

int FUNC_2(int VAR_3, size_t VAR_4) {
        int VAR_5, VAR_6;
        socklen_t VAR_7 = sizeof(VAR_6);

        VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_1, &VAR_6, &VAR_7);
        if (VAR_5 >= 0 && VAR_7 == sizeof(VAR_6) && (size_t) VAR_6 >= VAR_4*2)
                return 0;



        if (FUNC_1(VAR_3, VAR_0, VAR_1, VAR_4) < 0) {
                VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_2, VAR_4);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        return 1;
}
