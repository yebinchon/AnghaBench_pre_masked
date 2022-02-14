
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct in_addr const in_addr ;


 int FUNC_0 (struct in_addr const*) ;
 int FUNC_1 (struct in_addr const*,unsigned char*) ;
 int FUNC_2 (struct in_addr const*,unsigned char) ;

int FUNC_3(const struct in_addr *VAR_0, struct in_addr *VAR_1) {
        unsigned char VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(VAR_0, &VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        FUNC_2(VAR_1, VAR_2);
        return 0;
}
