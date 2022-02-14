
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct capability_name {int id; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 struct capability_name* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_2) {
        const struct capability_name *VAR_3;
        int VAR_4, VAR_5;

        FUNC_1(VAR_2);


        VAR_4 = FUNC_3(VAR_2, &VAR_5);
        if (VAR_4 >= 0) {
                if (VAR_5 >= 0 && (size_t) VAR_5 < FUNC_0(VAR_1))
                        return VAR_5;
                else
                        return -VAR_0;
        }


        VAR_3 = FUNC_2(VAR_2, FUNC_4(VAR_2));
        if (!VAR_3)
                return -VAR_0;

        return VAR_3->id;
}
