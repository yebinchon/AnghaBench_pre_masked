
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sd_device ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int*,char*) ;
 int FUNC_2 (unsigned int*,int,char*,...) ;
 int FUNC_3 (char const*,unsigned int*) ;
 int FUNC_4 (unsigned int*,char*,char const**) ;

__attribute__((used)) static int FUNC_5(sd_device *VAR_1, unsigned *VAR_2) {
        const char *VAR_3;
        unsigned VAR_4;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_5 = FUNC_4(VAR_1, "max_brightness", &VAR_3);
        if (VAR_5 < 0)
                return FUNC_2(VAR_1, VAR_5, "Failed to read 'max_brightness' attribute: %m");

        VAR_5 = FUNC_3(VAR_3, &VAR_4);
        if (VAR_5 < 0)
                return FUNC_2(VAR_1, VAR_5, "Failed to parse 'max_brightness' \"%s\": %m", VAR_3);

        if (VAR_4 <= 0) {
                FUNC_1(VAR_1, "Maximum brightness is 0, ignoring device.");
                return -VAR_0;
        }

        *VAR_2 = VAR_4;
        return 0;
}
