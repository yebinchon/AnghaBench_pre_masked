
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct ifreq {struct sockaddr ifr_addr; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,char const*) ;
 char* FUNC_6 (int ) ;

unsigned
FUNC_7(const char *VAR_6)
{
    int VAR_7;
    struct ifreq VAR_8;
    struct sockaddr_in *VAR_9;
    struct sockaddr *VAR_10;
    int VAR_11;

    VAR_7 = FUNC_4(VAR_0, VAR_3, 0);

    VAR_8.ifr_addr.sa_family = VAR_0;
    FUNC_5(VAR_8.ifr_name, VAR_1, VAR_6);

    VAR_11 = FUNC_2(VAR_7, VAR_2, &VAR_8);
    if (VAR_11 < 0) {
        FUNC_1(VAR_5, "ERROR:'%s': %s\n", VAR_6, FUNC_6(VAR_4));

        FUNC_0(VAR_7);
        return 0;
    }

    FUNC_0(VAR_7);

    VAR_10 = &VAR_8.ifr_addr;
    VAR_9 = (struct sockaddr_in *)VAR_10;
    return FUNC_3(VAR_9->sin_addr.s_addr);
}
