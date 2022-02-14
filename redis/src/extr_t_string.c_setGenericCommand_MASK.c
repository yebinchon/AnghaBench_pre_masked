
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int robj ;
struct TYPE_14__ {size_t resp; TYPE_4__* db; TYPE_1__* cmd; } ;
typedef TYPE_2__ client ;
struct TYPE_17__ {int dirty; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {int * ok; int ** null; } ;
struct TYPE_13__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,long long*,int *) ;
 int * FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,int *,int ) ;
 TYPE_8__ VAR_6 ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*,int *,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int *,int *) ;
 TYPE_3__ VAR_7 ;

void FUNC_8(client *VAR_8, int VAR_9, robj *VAR_10, robj *VAR_11, robj *VAR_12, int VAR_13, robj *VAR_14, robj *VAR_15) {
    long long VAR_16 = 0;

    if (VAR_12) {
        if (FUNC_2(VAR_8, VAR_12, &VAR_16, ((void*)0)) != VAR_0)
            return;
        if (VAR_16 <= 0) {
            FUNC_1(VAR_8,"invalid expire time in %s",VAR_8->cmd->name);
            return;
        }
        if (VAR_13 == VAR_5) VAR_16 *= 1000;
    }

    if ((VAR_9 & VAR_3 && FUNC_3(VAR_8->db,VAR_10) != ((void*)0)) ||
        (VAR_9 & VAR_4 && FUNC_3(VAR_8->db,VAR_10) == ((void*)0)))
    {
        FUNC_0(VAR_8, VAR_15 ? VAR_15 : VAR_7.null[VAR_8->resp]);
        return;
    }
    FUNC_7(VAR_8->db,VAR_10,VAR_11);
    VAR_6.dirty++;
    if (VAR_12) FUNC_6(VAR_8,VAR_8->db,VAR_10,FUNC_4()+VAR_16);
    FUNC_5(VAR_2,"set",VAR_10,VAR_8->db->id);
    if (VAR_12) FUNC_5(VAR_1,
        "expire",VAR_10,VAR_8->db->id);
    FUNC_0(VAR_8, VAR_14 ? VAR_14 : VAR_7.ok);
}
