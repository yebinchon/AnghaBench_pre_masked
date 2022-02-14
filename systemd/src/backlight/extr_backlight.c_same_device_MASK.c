
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const**) ;
 int FUNC_2 (int *,char const**) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(sd_device *VAR_0, sd_device *VAR_1) {
        const char *VAR_2, *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_4 = FUNC_1(VAR_0, &VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_1(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        if (!FUNC_3(VAR_2, VAR_3))
                return 0;

        VAR_4 = FUNC_2(VAR_0, &VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_3(VAR_2, VAR_3);
}
