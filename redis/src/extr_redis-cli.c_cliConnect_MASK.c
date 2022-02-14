
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* hostsocket; char* hostip; int hostport; scalar_t__ tls; } ;
struct TYPE_7__ {char* errstr; int fd; scalar_t__ err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const**) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_5__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_1__* FUNC_6 (char*,int) ;
 TYPE_1__* FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(int VAR_8) {
    if (VAR_6 == ((void*)0) || VAR_8 & VAR_0) {
        if (VAR_6 != ((void*)0)) {
            FUNC_8(VAR_6);
        }

        if (VAR_5.hostsocket == ((void*)0)) {
            VAR_6 = FUNC_6(VAR_5.hostip,VAR_5.hostport);
        } else {
            VAR_6 = FUNC_7(VAR_5.hostsocket);
        }

        if (!VAR_6->err && VAR_5.tls) {
            const char *VAR_9 = ((void*)0);
            if (FUNC_2(VAR_6, &VAR_9) == VAR_3 && VAR_9) {
                FUNC_5(VAR_7, "Could not negotiate a TLS connection: %s\n", VAR_9);
                VAR_6 = ((void*)0);
                FUNC_8(VAR_6);
                return VAR_3;
            }
        }

        if (VAR_6->err) {
            if (!(VAR_8 & VAR_1)) {
                FUNC_5(VAR_7,"Could not connect to Redis at ");
                if (VAR_5.hostsocket == ((void*)0))
                    FUNC_5(VAR_7,"%s:%d: %s\n",
                        VAR_5.hostip,VAR_5.hostport,VAR_6->errstr);
                else
                    FUNC_5(VAR_7,"%s: %s\n",
                        VAR_5.hostsocket,VAR_6->errstr);
            }
            FUNC_8(VAR_6);
            VAR_6 = ((void*)0);
            return VAR_3;
        }






        FUNC_0(((void*)0), VAR_6->fd, VAR_2);


        if (FUNC_1() != VAR_4)
            return VAR_3;
        if (FUNC_3() != VAR_4)
            return VAR_3;
        if (FUNC_4() != VAR_4)
            return VAR_3;
    }
    return VAR_4;
}
