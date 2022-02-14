
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned char in_addr ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*) ;

int FUNC_1(const struct in_addr *VAR_1, unsigned char *VAR_2) {
        uint8_t VAR_3 = *(uint8_t*) VAR_1;



        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        if (VAR_3 < 128)

                *VAR_2 = 8;
        else if (VAR_3 < 192)

                *VAR_2 = 16;
        else if (VAR_3 < 224)

                *VAR_2 = 24;
        else

                return -VAR_0;

        return 0;
}
