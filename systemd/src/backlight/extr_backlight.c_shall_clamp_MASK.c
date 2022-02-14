
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char*,char const**) ;

__attribute__((used)) static bool FUNC_4(sd_device *VAR_0) {
        const char *VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_3(VAR_0, "ID_BACKLIGHT_CLAMP", &VAR_1);
        if (VAR_2 < 0) {
                FUNC_1(VAR_0, VAR_2, "Failed to get ID_BACKLIGHT_CLAMP property, ignoring: %m");
                return 1;
        }

        VAR_2 = FUNC_2(VAR_1);
        if (VAR_2 < 0) {
                FUNC_1(VAR_0, VAR_2, "Failed to parse ID_BACKLIGHT_CLAMP property, ignoring: %m");
                return 1;
        }

        return VAR_2;
}
