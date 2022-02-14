
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int c; } ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_7__ {TYPE_1__ args; TYPE_3__ cmd; int kw_len; int kw; int argc; } ;
typedef TYPE_2__ clusterMultiCmd ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

void FUNC_2(clusterMultiCmd *VAR_0) {
    VAR_0->cmd.len = 0;
    FUNC_0(&(VAR_0->cmd), VAR_0->argc, VAR_0->kw, VAR_0->kw_len);
    FUNC_1(&(VAR_0->cmd), VAR_0->args.c, VAR_0->args.len);
}
