
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {int sun_path; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int transport; } ;
typedef TYPE_1__ conn ;
typedef int addr_text ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const,int *,char*,int) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,size_t) ;

__attribute__((used)) static inline void FUNC_7(const conn *VAR_1, const int VAR_2,
                char* VAR_3, struct sockaddr *VAR_4) {
    char VAR_5[VAR_0];
    VAR_5[0] = '\0';
    const char *VAR_6 = "?";
    unsigned short VAR_7 = 0;
    size_t VAR_8 = 0;

    switch (VAR_2) {
        case 130:
            (void) FUNC_1(VAR_2,
                    &((struct sockaddr_in *)VAR_4)->sin_addr,
                    VAR_5,
                    sizeof(VAR_5) - 1);
            VAR_7 = FUNC_2(((struct sockaddr_in *)VAR_4)->sin_port);
            VAR_6 = FUNC_0(VAR_1->transport) ? "udp" : "tcp";
            break;

        case 129:
            VAR_5[0] = '[';
            VAR_5[1] = '\0';
            if (FUNC_1(VAR_2,
                    &((struct sockaddr_in6 *)VAR_4)->sin6_addr,
                    VAR_5 + 1,
                    sizeof(VAR_5) - 2)) {
                FUNC_4(VAR_5, "]");
            }
            VAR_7 = FUNC_2(((struct sockaddr_in6 *)VAR_4)->sin6_port);
            VAR_6 = FUNC_0(VAR_1->transport) ? "udp6" : "tcp6";
            break;

        case 128:
            VAR_8 = sizeof(((struct sockaddr_un *)VAR_4)->sun_path);
            if (VAR_0 <= VAR_8) {
                VAR_8 = VAR_0 - 1;
            }
            FUNC_6(VAR_5,
                    ((struct sockaddr_un *)VAR_4)->sun_path,
                    VAR_8);
            VAR_5[VAR_8] = '\0';
            VAR_6 = "unix";
            break;
    }

    if (FUNC_5(VAR_5) < 2) {




        FUNC_3(VAR_5, "<AF %d>", VAR_2);
    }

    if (VAR_7) {
        FUNC_3(VAR_3, "%s:%s:%u", VAR_6, VAR_5, VAR_7);
    } else {
        FUNC_3(VAR_3, "%s:%s", VAR_6, VAR_5);
    }
}
