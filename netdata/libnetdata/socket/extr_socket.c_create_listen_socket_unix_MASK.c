
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (struct sockaddr_un*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,char const*,int) ;
 int FUNC_11 (char const*) ;

int FUNC_12(const char *VAR_5, int VAR_6) {
    int VAR_7;

    FUNC_3(VAR_1, "LISTENER: UNIX creating new listening socket on path '%s'", VAR_5);

    VAR_7 = FUNC_9(VAR_0, VAR_3, 0);
    if(VAR_7 < 0) {
        FUNC_4("LISTENER: UNIX socket() on path '%s' failed.", VAR_5);
        return -1;
    }

    FUNC_8(VAR_7);
    FUNC_7(VAR_7);

    struct sockaddr_un VAR_8;
    FUNC_6(&VAR_8, 0, sizeof(struct sockaddr_un));
    VAR_8.sun_family = VAR_0;
    FUNC_10(VAR_8.sun_path, VAR_5, sizeof(VAR_8.sun_path)-1);

    VAR_4 = 0;
    if (FUNC_11(VAR_5) == -1 && VAR_4 != VAR_2)
        FUNC_4("LISTENER: failed to remove existing (probably obsolete or left-over) file on UNIX socket path '%s'.", VAR_5);

    if(FUNC_0 (VAR_7, (struct sockaddr *) &VAR_8, sizeof (VAR_8)) < 0) {
        FUNC_2(VAR_7);
        FUNC_4("LISTENER: UNIX bind() on path '%s' failed.", VAR_5);
        return -1;
    }



    if(FUNC_1(VAR_5, 0777) == -1)
        FUNC_4("LISTENER: failed to chmod() socket file '%s'.", VAR_5);

    if(FUNC_5(VAR_7, VAR_6) < 0) {
        FUNC_2(VAR_7);
        FUNC_4("LISTENER: UNIX listen() on path '%s' failed.", VAR_5);
        return -1;
    }

    FUNC_3(VAR_1, "LISTENER: Listening on UNIX path '%s'", VAR_5);
    return VAR_7;
}
