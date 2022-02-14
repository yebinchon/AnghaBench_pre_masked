
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sds ;
typedef int conninfo ;
struct TYPE_13__ {int count; } ;
struct TYPE_16__ {int flags; TYPE_5__* user; TYPE_4__* lastcmd; int reply; scalar_t__ bufpos; int querybuf; TYPE_3__ mstate; int pubsub_patterns; int pubsub_channels; TYPE_2__* db; scalar_t__ lastinteraction; scalar_t__ ctime; TYPE_1__* name; scalar_t__ conn; scalar_t__ id; } ;
typedef TYPE_6__ client ;
struct TYPE_17__ {scalar_t__ unixtime; } ;
struct TYPE_15__ {char* name; } ;
struct TYPE_14__ {char* name; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_11__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,unsigned long long,int ,int ,char*,long long,long long,char*,int ,int,int,int,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,char*,char*,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_7__ VAR_15 ;

sds FUNC_10(sds VAR_16, client *VAR_17) {
    char VAR_18[16], VAR_19[3], VAR_20[VAR_14], *VAR_21;

    VAR_21 = VAR_18;
    if (VAR_17->flags & VAR_9) {
        if (VAR_17->flags & VAR_5)
            *VAR_21++ = 'O';
        else
            *VAR_21++ = 'S';
    }
    if (VAR_17->flags & VAR_4) *VAR_21++ = 'M';
    if (VAR_17->flags & VAR_7) *VAR_21++ = 'P';
    if (VAR_17->flags & VAR_6) *VAR_21++ = 'x';
    if (VAR_17->flags & VAR_0) *VAR_21++ = 'b';
    if (VAR_17->flags & VAR_10) *VAR_21++ = 't';
    if (VAR_17->flags & VAR_11) *VAR_21++ = 'R';
    if (VAR_17->flags & VAR_3) *VAR_21++ = 'd';
    if (VAR_17->flags & VAR_1) *VAR_21++ = 'c';
    if (VAR_17->flags & VAR_12) *VAR_21++ = 'u';
    if (VAR_17->flags & VAR_2) *VAR_21++ = 'A';
    if (VAR_17->flags & VAR_13) *VAR_21++ = 'U';
    if (VAR_17->flags & VAR_8) *VAR_21++ = 'r';
    if (VAR_21 == VAR_18) *VAR_21++ = 'N';
    *VAR_21++ = '\0';

    VAR_21 = VAR_19;
    if (VAR_17->conn) {
        if (FUNC_1(VAR_17->conn)) *VAR_21++ = 'r';
        if (FUNC_2(VAR_17->conn)) *VAR_21++ = 'w';
    }
    *VAR_21 = '\0';
    return FUNC_8(VAR_16,
        "id=%U addr=%s %s name=%s age=%I idle=%I flags=%s db=%i sub=%i psub=%i multi=%i qbuf=%U qbuf-free=%U obl=%U oll=%U omem=%U events=%s cmd=%s user=%s",
        (unsigned long long) VAR_17->id,
        FUNC_5(VAR_17),
        FUNC_0(VAR_17->conn, VAR_20, sizeof(VAR_20)),
        VAR_17->name ? (char*)VAR_17->name->ptr : "",
        (long long)(VAR_15.unixtime - VAR_17->ctime),
        (long long)(VAR_15.unixtime - VAR_17->lastinteraction),
        VAR_18,
        VAR_17->db->id,
        (int) FUNC_3(VAR_17->pubsub_channels),
        (int) FUNC_6(VAR_17->pubsub_patterns),
        (VAR_17->flags & VAR_6) ? VAR_17->mstate.count : -1,
        (unsigned long long) FUNC_9(VAR_17->querybuf),
        (unsigned long long) FUNC_7(VAR_17->querybuf),
        (unsigned long long) VAR_17->bufpos,
        (unsigned long long) FUNC_6(VAR_17->reply),
        (unsigned long long) FUNC_4(VAR_17),
        VAR_19,
        VAR_17->lastcmd ? VAR_17->lastcmd->name : "NULL",
        VAR_17->user ? VAR_17->user->name : "(superuser)");
}
