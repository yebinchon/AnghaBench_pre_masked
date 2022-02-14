
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int id; TYPE_1__* db; int conn; } ;
typedef TYPE_2__ client ;
struct TYPE_8__ {int version; int port; int id; int db; int addr; int flags; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_3__ RedisModuleClientInfoV1 ;


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
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

int FUNC_2(void *VAR_12, client *VAR_13, int VAR_14) {
    if (VAR_14 != 1) return VAR_10;

    RedisModuleClientInfoV1 *VAR_15 = VAR_12;
    FUNC_1(VAR_15,0,sizeof(*VAR_15));
    VAR_15->version = VAR_14;
    if (VAR_13->flags & VAR_1)
        VAR_15->flags |= VAR_6;
    if (VAR_13->flags & VAR_2)
        VAR_15->flags |= VAR_7;
    if (VAR_13->flags & VAR_4)
        VAR_15->flags |= VAR_9;
    if (VAR_13->flags & VAR_3)
        VAR_15->flags |= VAR_8;
    if (VAR_13->flags & VAR_0)
        VAR_15->flags |= VAR_5;

    int VAR_16;
    FUNC_0(VAR_13->conn,VAR_15->addr,sizeof(VAR_15->addr),&VAR_16);
    VAR_15->port = VAR_16;
    VAR_15->db = VAR_13->db->id;
    VAR_15->id = VAR_13->id;
    return VAR_11;
}
