
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uid_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(const char *VAR_1, uid_t *VAR_2) {
        uint32_t VAR_3 = 0;
        int VAR_4;

        FUNC_0(VAR_1);

        FUNC_1(sizeof(uid_t) == sizeof(uint32_t));
        VAR_4 = FUNC_2(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        if (!FUNC_3(VAR_3))
                return -VAR_0;




        if (VAR_2)
                *VAR_2 = VAR_3;

        return 0;
}
