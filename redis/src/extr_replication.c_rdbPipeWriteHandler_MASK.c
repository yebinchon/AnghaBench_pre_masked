
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {scalar_t__ repldboff; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {scalar_t__ rdb_pipe_bufflen; scalar_t__ rdb_pipe_buff; int stat_net_output_bytes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 scalar_t__ FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct connection*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

void FUNC_8(struct connection *VAR_3) {
    FUNC_6(VAR_2.rdb_pipe_bufflen>0);
    client *VAR_4 = FUNC_1(VAR_3);
    int VAR_5;
    if ((VAR_5 = FUNC_3(VAR_3, VAR_2.rdb_pipe_buff + VAR_4->repldboff,
                              VAR_2.rdb_pipe_bufflen - VAR_4->repldboff)) == -1)
    {
        if (FUNC_2(VAR_3) == VAR_0)
            return;
        FUNC_7(VAR_1,"Write error sending DB to replica: %s",
            FUNC_0(VAR_3));
        FUNC_4(VAR_4);
        return;
    } else {
        VAR_4->repldboff += VAR_5;
        VAR_2.stat_net_output_bytes += VAR_5;
        if (VAR_4->repldboff < VAR_2.rdb_pipe_bufflen)
            return;
    }
    FUNC_5(VAR_3);
}
