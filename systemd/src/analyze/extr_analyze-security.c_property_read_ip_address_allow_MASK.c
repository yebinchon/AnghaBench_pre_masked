
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union in_addr_union {int in6; int in; } ;
typedef int uint32_t ;
struct security_info {int ip_address_allow_other; int ip_address_allow_localhost; int ip_address_deny_all; } ;
typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef char const sd_bus ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (scalar_t__,union in_addr_union*) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (char const*,char,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,...) ;
 int FUNC_6 (char const*,char,void const**,size_t*) ;
 char const* FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(
                sd_bus *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                sd_bus_error *VAR_5,
                void *VAR_6) {

        struct security_info *VAR_7 = VAR_6;
        bool VAR_8 = 0, VAR_9 = 0;
        int VAR_10;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_10 = FUNC_3(VAR_4, 'a', "(iayu)");
        if (VAR_10 < 0)
                return VAR_10;

        for (;;) {
                const void *VAR_11;
                size_t VAR_12;
                int32_t VAR_13;
                uint32_t VAR_14;

                VAR_10 = FUNC_3(VAR_4, 'r', "iayu");
                if (VAR_10 < 0)
                        return VAR_10;
                if (VAR_10 == 0)
                        break;

                VAR_10 = FUNC_5(VAR_4, "i", &VAR_13);
                if (VAR_10 < 0)
                        return VAR_10;

                VAR_10 = FUNC_6(VAR_4, 'y', &VAR_11, &VAR_12);
                if (VAR_10 < 0)
                        return VAR_10;

                VAR_10 = FUNC_5(VAR_4, "u", &VAR_14);
                if (VAR_10 < 0)
                        return VAR_10;

                VAR_10 = FUNC_4(VAR_4);
                if (VAR_10 < 0)
                        return VAR_10;

                if (FUNC_7(VAR_3, "IPAddressAllow")) {
                        union in_addr_union VAR_15;

                        if (VAR_13 == VAR_0 && VAR_12 == 4 && VAR_14 == 8)
                                FUNC_2(&VAR_15.in, VAR_11, VAR_12);
                        else if (VAR_13 == VAR_1 && VAR_12 == 16 && VAR_14 == 128)
                                FUNC_2(&VAR_15.in6, VAR_11, VAR_12);
                        else {
                                VAR_7->ip_address_allow_other = 1;
                                continue;
                        }

                        if (FUNC_1(VAR_13, &VAR_15))
                                VAR_7->ip_address_allow_localhost = 1;
                        else
                                VAR_7->ip_address_allow_other = 1;
                } else {
                        FUNC_0(FUNC_7(VAR_3, "IPAddressDeny"));

                        if (VAR_13 == VAR_0 && VAR_12 == 4 && VAR_14 == 0)
                                VAR_8 = 1;
                        else if (VAR_13 == VAR_1 && VAR_12 == 16 && VAR_14 == 0)
                                VAR_9 = 1;
                }
        }

        VAR_7->ip_address_deny_all = VAR_8 && VAR_9;

        return FUNC_4(VAR_4);
}
