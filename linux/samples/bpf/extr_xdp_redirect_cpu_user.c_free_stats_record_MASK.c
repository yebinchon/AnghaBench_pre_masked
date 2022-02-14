
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct stats_record* cpu; } ;
struct TYPE_9__ {struct stats_record* cpu; } ;
struct TYPE_8__ {struct stats_record* cpu; } ;
struct TYPE_7__ {struct stats_record* cpu; } ;
struct stats_record {TYPE_5__ rx_cnt; TYPE_4__ redir_err; TYPE_3__ kthread; TYPE_2__ exception; TYPE_1__* enq; } ;
struct TYPE_6__ {struct stats_record* cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct stats_record*) ;

__attribute__((used)) static void FUNC_1(struct stats_record *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->enq[VAR_2].cpu);
 FUNC_0(VAR_1->exception.cpu);
 FUNC_0(VAR_1->kthread.cpu);
 FUNC_0(VAR_1->redir_err.cpu);
 FUNC_0(VAR_1->rx_cnt.cpu);
 FUNC_0(VAR_1);
}
