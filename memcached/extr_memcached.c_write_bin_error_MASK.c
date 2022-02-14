
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int protocol_binary_response_status ;
struct TYPE_7__ {int sfd; int sbytes; int write_and_go; } ;
typedef TYPE_1__ conn ;
struct TYPE_8__ {int verbose; } ;
 int FUNC_0 (TYPE_1__*,int,int ,int ,size_t) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int,...) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(conn *VAR_5, protocol_binary_response_status VAR_6,
                            const char *VAR_7, int VAR_8) {
    size_t VAR_9;

    if (!VAR_7) {
        switch (VAR_6) {
        case 132:
            VAR_7 = "Out of memory";
            break;
        case 128:
            VAR_7 = "Unknown command";
            break;
        case 130:
            VAR_7 = "Not found";
            break;
        case 133:
            VAR_7 = "Invalid arguments";
            break;
        case 131:
            VAR_7 = "Data exists for key.";
            break;
        case 134:
            VAR_7 = "Too large.";
            break;
        case 135:
            VAR_7 = "Non-numeric server-side value for incr or decr";
            break;
        case 129:
            VAR_7 = "Not stored.";
            break;
        case 136:
            VAR_7 = "Auth failure.";
            break;
        default:
            FUNC_2(0);
            VAR_7 = "UNHANDLED ERROR";
            FUNC_4(VAR_4, ">%d UNHANDLED ERROR: %d\n", VAR_5->sfd, VAR_6);
        }
    }

    if (VAR_3.verbose > 1) {
        FUNC_4(VAR_4, ">%d Writing an error: %s\n", VAR_5->sfd, VAR_7);
    }

    VAR_9 = FUNC_5(VAR_7);
    FUNC_0(VAR_5, VAR_6, 0, 0, VAR_9);
    if (VAR_9 > 0) {
        FUNC_1(VAR_5, VAR_7, VAR_9);
    }
    FUNC_3(VAR_5, VAR_0);
    if(VAR_8 > 0) {
        VAR_5->sbytes = VAR_8;
        VAR_5->write_and_go = VAR_2;
    } else {
        VAR_5->write_and_go = VAR_1;
    }
}
