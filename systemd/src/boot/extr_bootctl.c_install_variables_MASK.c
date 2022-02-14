
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int sd_id128_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3,
                             uint32_t VAR_4, uint64_t VAR_5, uint64_t VAR_6,
                             sd_id128_t VAR_7, const char *VAR_8,
                             bool VAR_9) {
        const char *VAR_10;
        uint16_t VAR_11;
        int VAR_12;

        if (!FUNC_4()) {
                FUNC_7("Not booted with EFI, skipping EFI variable setup.");
                return 0;
        }

        VAR_10 = FUNC_8(VAR_3, VAR_8);
        if (FUNC_0(VAR_10, VAR_1) < 0) {
                if (VAR_2 == VAR_0)
                        return 0;

                return FUNC_5(VAR_2, "Cannot access \"%s\": %m", VAR_10);
        }

        VAR_12 = FUNC_2(VAR_7, VAR_8, &VAR_11);
        if (VAR_12 < 0)
                return FUNC_5(VAR_12,
                                       VAR_12 == -VAR_0 ?
                                       "Failed to access EFI variables. Is the \"efivarfs\" filesystem mounted?" :
                                       "Failed to determine current boot order: %m");

        if (VAR_9 || VAR_12 == 0) {
                VAR_12 = FUNC_1(VAR_11, "Linux Boot Manager",
                                        VAR_4, VAR_5, VAR_6,
                                        VAR_7, VAR_8);
                if (VAR_12 < 0)
                        return FUNC_5(VAR_12, "Failed to create EFI Boot variable entry: %m");

                FUNC_6("Created EFI boot entry \"Linux Boot Manager\".");
        }

        return FUNC_3(VAR_11, VAR_9);
}
