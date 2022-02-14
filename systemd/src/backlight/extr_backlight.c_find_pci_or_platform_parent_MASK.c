
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (int ******) ;
 int FUNC_2 (int,char*,char const*,char const*,char const*) ;
 int FUNC_3 (char const*,unsigned long*) ;
 int FUNC_4 (int *****,int ******) ;
 int FUNC_5 (int *****,char const**) ;
 scalar_t__ FUNC_6 (int *****,char*,char const**) ;
 int FUNC_7 (int *****,char const**) ;
 char* FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*,int ) ;

__attribute__((used)) static int FUNC_11(sd_device *VAR_3, sd_device **VAR_4) {
        const char *VAR_5, *VAR_6, *VAR_7;
        sd_device *VAR_8;
        int VAR_9;

        FUNC_1(&VAR_3);
        FUNC_1(VAR_4);

        VAR_9 = FUNC_4(VAR_3, &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_5(VAR_8, &VAR_5);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_7(VAR_8, &VAR_6);
        if (VAR_9 < 0)
                return VAR_9;

        if (FUNC_9(VAR_5, "drm")) {
                const char *VAR_10;

                VAR_10 = FUNC_8(VAR_6, "card");
                if (!VAR_10)
                        return -VAR_1;

                VAR_10 += FUNC_10(VAR_10, VAR_0);
                if (*VAR_10 == '-') {

                        if (!FUNC_0(VAR_10, "-LVDS-", "-Embedded DisplayPort-"))
                                return -VAR_2;
                }

        } else if (FUNC_9(VAR_5, "pci") &&
                   FUNC_6(VAR_8, "class", &VAR_7) >= 0) {
                unsigned long VAR_11 = 0;

                VAR_9 = FUNC_3(VAR_7, &VAR_11);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_9, "Cannot parse PCI class '%s' of device %s:%s: %m",
                                                 VAR_7, VAR_5, VAR_6);


                if (VAR_11 == 0x30000) {
                        *VAR_4 = VAR_8;
                        return 0;
                }

        } else if (FUNC_9(VAR_5, "platform")) {
                *VAR_4 = VAR_8;
                return 0;
        }

        return FUNC_11(VAR_8, VAR_4);
}
