
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int argc; long long resp; int id; int authenticated; TYPE_4__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_18__ {char* ptr; } ;
struct TYPE_17__ {scalar_t__ masterhost; scalar_t__ sentinel_mode; scalar_t__ cluster_enabled; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,long long*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_9 (char const*,char*) ;

void FUNC_10(client *VAR_4) {
    long long VAR_5;

    if (FUNC_8(VAR_4->argv[1],&VAR_5) != VAR_1 ||
        VAR_5 < 2 || VAR_5 > 3)
    {
        FUNC_2(VAR_4,"-NOPROTO unsupported protocol version");
        return;
    }

    for (int VAR_6 = 2; VAR_6 < VAR_4->argc; VAR_6++) {
        int VAR_7 = (VAR_4->argc-1) - VAR_6;
        const char *VAR_8 = VAR_4->argv[VAR_6]->ptr;
        if (!FUNC_9(VAR_8,"AUTH") && VAR_7 >= 2) {
            if (FUNC_0(VAR_4, VAR_4->argv[VAR_6+1], VAR_4->argv[VAR_6+2]) == VAR_0) {
                FUNC_2(VAR_4,"-WRONGPASS invalid username-password pair");
                return;
            }
            VAR_6 += 2;
        } else if (!FUNC_9(VAR_8,"SETNAME") && VAR_7) {
            if (FUNC_7(VAR_4, VAR_4->argv[VAR_6+1]) == VAR_0) return;
            VAR_6++;
        } else {
            FUNC_3(VAR_4,"Syntax error in HELLO option '%s'",VAR_8);
            return;
        }
    }


    if (!VAR_4->authenticated) {
        FUNC_2(VAR_4,"-NOAUTH HELLO must be called with the client already "
                        "authenticated, otherwise the HELLO AUTH <user> <pass> "
                        "option can be used to authenticate the client and "
                        "select the RESP protocol version at the same time");
        return;
    }


    VAR_4->resp = VAR_5;
    FUNC_6(VAR_4,7);

    FUNC_1(VAR_4,"server");
    FUNC_1(VAR_4,"redis");

    FUNC_1(VAR_4,"version");
    FUNC_1(VAR_4,VAR_2);

    FUNC_1(VAR_4,"proto");
    FUNC_5(VAR_4,3);

    FUNC_1(VAR_4,"id");
    FUNC_5(VAR_4,VAR_4->id);

    FUNC_1(VAR_4,"mode");
    if (VAR_3.sentinel_mode) FUNC_1(VAR_4,"sentinel");
    if (VAR_3.cluster_enabled) FUNC_1(VAR_4,"cluster");
    else FUNC_1(VAR_4,"standalone");

    if (!VAR_3.sentinel_mode) {
        FUNC_1(VAR_4,"role");
        FUNC_1(VAR_4,VAR_3.masterhost ? "replica" : "master");
    }

    FUNC_1(VAR_4,"modules");
    FUNC_4(VAR_4);
}
