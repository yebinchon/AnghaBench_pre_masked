
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char const*,int*) ;

int FUNC_3(int VAR_4, const char *VAR_5, unsigned char *VAR_6) {
        uint8_t VAR_7;
        int VAR_8;

        if (!FUNC_1(VAR_4, VAR_0, VAR_1))
                return -VAR_2;

        VAR_8 = FUNC_2(VAR_5, &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        if (VAR_7 > FUNC_0(VAR_4) * 8)
                return -VAR_3;

        *VAR_6 = VAR_7;
        return 0;
}
