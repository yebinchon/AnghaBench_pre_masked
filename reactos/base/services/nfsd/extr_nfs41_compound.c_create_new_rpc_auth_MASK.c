
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {TYPE_2__* client; } ;
typedef TYPE_3__ nfs41_session ;
struct TYPE_11__ {scalar_t__ sec_flavor; scalar_t__ type; } ;
typedef TYPE_4__ nfs41_secinfo_info ;
typedef int machname ;
typedef int gid_t ;
struct TYPE_12__ {int * cl_auth; } ;
struct TYPE_9__ {TYPE_1__* rpc; } ;
struct TYPE_8__ {int lock; TYPE_7__* rpc; scalar_t__ sec_flavor; int gid; int uid; int server_name; } ;
typedef int AUTH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_7__*,int ,scalar_t__) ;
 int * FUNC_3 (char*,int ,int ,int ,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(nfs41_session *VAR_5, uint32_t VAR_6,
                               nfs41_secinfo_info *VAR_7)
{
    AUTH *VAR_8 = ((void*)0);
    int VAR_9 = VAR_1, VAR_10;
    uint32_t VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
        if (!VAR_7[VAR_10].sec_flavor && !VAR_7[VAR_10].type)
            goto out;
        if (VAR_7[VAR_10].sec_flavor == VAR_4) {
            VAR_8 = FUNC_2(VAR_5->client->rpc->rpc,
                        VAR_5->client->rpc->server_name, VAR_7[VAR_10].type);
            if (VAR_8 == ((void*)0)) {
                FUNC_4("handle_wrongsecinfo_noname: authsspi_create_default for "
                        "gsstype %s failed\n", FUNC_6(VAR_7[VAR_10].type));
                continue;
            }
            VAR_11 = VAR_7[VAR_10].type;
        } else {
            char VAR_12[VAR_2 + 1];
            gid_t VAR_13[1];
            if (FUNC_5(VAR_12, sizeof(VAR_12)) == -1) {
                FUNC_4("nfs41_rpc_clnt_create: gethostname failed\n");
                continue;
            }
            VAR_12[sizeof(VAR_12) - 1] = '\0';
            VAR_8 = FUNC_3(VAR_12, VAR_5->client->rpc->uid,
                        VAR_5->client->rpc->gid, 0, VAR_13);
            if (VAR_8 == ((void*)0)) {
                FUNC_4("handle_wrongsecinfo_noname: authsys_create failed\n");
                continue;
            }
            VAR_11 = VAR_0;
        }
        FUNC_0(&VAR_5->client->rpc->lock);
        VAR_5->client->rpc->sec_flavor = VAR_11;
        VAR_5->client->rpc->rpc->cl_auth = VAR_8;
        FUNC_1(&VAR_5->client->rpc->lock);
        VAR_9 = 0;
        break;
    }
out:
    return VAR_9;
}
