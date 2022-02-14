
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct sockaddr_un*,int ,int) ;
 scalar_t__ FUNC_5 (int,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static inline int FUNC_8(const char *VAR_5, struct timeval *VAR_6) {
    int VAR_7 = FUNC_6(VAR_0, VAR_2, 0);
    if(VAR_7 == -1) {
        FUNC_3("Failed to create UNIX socket() for '%s'", VAR_5);
        return -1;
    }

    if(VAR_6) {
        if(FUNC_5(VAR_7, VAR_3, VAR_4, (char *) VAR_6, sizeof(struct timeval)) < 0)
            FUNC_3("Failed to set timeout on UNIX socket '%s'", VAR_5);
    }

    struct sockaddr_un VAR_8;
    FUNC_4(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.sun_family = VAR_0;
    FUNC_7(VAR_8.sun_path, VAR_5, sizeof(VAR_8.sun_path)-1);

    if (FUNC_1(VAR_7, (struct sockaddr*)&VAR_8, sizeof(VAR_8)) == -1) {
        FUNC_3("Cannot connect to UNIX socket on path '%s'.", VAR_5);
        FUNC_0(VAR_7);
        return -1;
    }

    FUNC_2(VAR_1, "Connected to UNIX socket on path '%s'.", VAR_5);

    return VAR_7;
}
