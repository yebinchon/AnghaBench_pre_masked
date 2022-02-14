
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int sd_id128_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sd_id128_t VAR_0, const char *VAR_1, bool VAR_2) {
        uint16_t VAR_3;
        int VAR_4;

        if (!FUNC_2())
                return 0;

        VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
        if (VAR_4 != 1)
                return 0;

        VAR_4 = FUNC_0(VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        if (VAR_2)
                return FUNC_3(VAR_3);

        return 0;
}
