
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_info {int restrict_address_family_inet; int restrict_address_family_unix; int restrict_address_family_netlink; int restrict_address_family_packet; int restrict_address_family_other; } ;
typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef char const sd_bus ;


 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(
                sd_bus *VAR_0,
                const char *VAR_1,
                sd_bus_message *VAR_2,
                sd_bus_error *VAR_3,
                void *VAR_4) {

        struct security_info *VAR_5 = VAR_4;
        int VAR_6, VAR_7;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        VAR_7 = FUNC_2(VAR_2, 'r', "bas");
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_4(VAR_2, "b", &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_5->restrict_address_family_inet =
                VAR_5->restrict_address_family_unix =
                VAR_5->restrict_address_family_netlink =
                VAR_5->restrict_address_family_packet =
                VAR_5->restrict_address_family_other = VAR_6;

        VAR_7 = FUNC_2(VAR_2, 'a', "s");
        if (VAR_7 < 0)
                return VAR_7;

        for (;;) {
                const char *VAR_8;

                VAR_7 = FUNC_4(VAR_2, "s", &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;
                if (VAR_7 == 0)
                        break;

                if (FUNC_0(VAR_8, "AF_INET", "AF_INET6"))
                        VAR_5->restrict_address_family_inet = !VAR_6;
                else if (FUNC_5(VAR_8, "AF_UNIX"))
                        VAR_5->restrict_address_family_unix = !VAR_6;
                else if (FUNC_5(VAR_8, "AF_NETLINK"))
                        VAR_5->restrict_address_family_netlink = !VAR_6;
                else if (FUNC_5(VAR_8, "AF_PACKET"))
                        VAR_5->restrict_address_family_packet = !VAR_6;
                else
                        VAR_5->restrict_address_family_other = !VAR_6;
        }

        VAR_7 = FUNC_3(VAR_2);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_3(VAR_2);
}
