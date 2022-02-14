
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct mp_pin {scalar_t__ dir; TYPE_1__ data; scalar_t__ data_requested; scalar_t__ within_conn; int manual_connection; TYPE_3__* conn; TYPE_2__* user_conn; int name; } ;
struct mp_filter {int dummy; } ;
struct TYPE_6__ {int owner; } ;
struct TYPE_5__ {int owner; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mp_filter*,char*,struct mp_pin*,int ,char*,char*,TYPE_2__*,char*,TYPE_3__*,char*,int ,char*,char*,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mp_filter *VAR_1, struct mp_pin *VAR_2)
{
    FUNC_0(VAR_1, "  [%p] %s %s c=%s[%p] f=%s[%p] m=%s[%p] %s %s %s\n",
        VAR_2, VAR_2->name, VAR_2->dir == VAR_0 ? "->" : "<-",
        VAR_2->user_conn ? FUNC_1(VAR_2->user_conn->owner) : "-", VAR_2->user_conn,
        VAR_2->conn ? FUNC_1(VAR_2->conn->owner) : "-", VAR_2->conn,
        FUNC_1(VAR_2->manual_connection), VAR_2->manual_connection,
        VAR_2->within_conn ? "(within)" : "",
        VAR_2->data_requested ? "(request)" : "",
        FUNC_2(VAR_2->data.type));
}
