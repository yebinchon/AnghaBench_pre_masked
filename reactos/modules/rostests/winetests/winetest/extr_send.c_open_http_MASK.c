
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int WSADATA ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 char const* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,struct sockaddr*,int) ;
 struct hostent* FUNC_6 (char const*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int ,char*,char const*) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static SOCKET
FUNC_11 (const char *VAR_7)
{
    WSADATA VAR_8;
    struct sockaddr_in VAR_9;
    SOCKET VAR_10;

    FUNC_9 (VAR_5, "Opening HTTP connection to %s", VAR_7);
    if (FUNC_3 (FUNC_0 (2,2), &VAR_8)) return VAR_2;

    VAR_9.sin_family = VAR_0;
    VAR_9.sin_port = FUNC_7 (80);
    VAR_9.sin_addr.s_addr = FUNC_8 (VAR_7);
    if (VAR_9.sin_addr.s_addr == VAR_1) {
        struct hostent *VAR_11 = FUNC_6 (VAR_7);
        if (!VAR_11) {
            FUNC_9 (VAR_4, "Hostname lookup failed for %s", VAR_7);
            goto failure;
        }
        VAR_9.sin_addr.s_addr = ((struct in_addr *)VAR_11->h_addr)->s_addr;
    }
    VAR_10 = FUNC_10 (VAR_0, VAR_6, VAR_3);
    if (VAR_10 == VAR_2) {
        FUNC_9 (VAR_4, "Can't open network socket: %d",
                FUNC_2 ());
        goto failure;
    }
    if (!FUNC_5 (VAR_10, (struct sockaddr*)&VAR_9, sizeof (struct sockaddr_in)))
        return VAR_10;

    FUNC_9 (VAR_4, "Can't connect: %d", FUNC_2 ());
    FUNC_4 (VAR_10);
 failure:
    FUNC_1 ();
    return VAR_2;
}
