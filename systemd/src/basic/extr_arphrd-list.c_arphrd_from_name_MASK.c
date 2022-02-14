
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arphrd_name {int id; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 struct arphrd_name* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_1) {
        const struct arphrd_name *VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_1, FUNC_2(VAR_1));
        if (!VAR_2)
                return -VAR_0;

        return VAR_2->id;
}
