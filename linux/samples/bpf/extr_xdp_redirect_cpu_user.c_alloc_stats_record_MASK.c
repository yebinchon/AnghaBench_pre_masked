
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* cpu; } ;
struct TYPE_7__ {void* cpu; } ;
struct TYPE_6__ {void* cpu; } ;
struct TYPE_10__ {void* cpu; } ;
struct stats_record {TYPE_4__* enq; TYPE_3__ exception; TYPE_2__ kthread; TYPE_1__ redir_err; TYPE_5__ rx_cnt; } ;
struct TYPE_9__ {void* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct stats_record* FUNC_3 (int) ;
 int FUNC_4 (struct stats_record*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static struct stats_record *FUNC_5(void)
{
 struct stats_record *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(sizeof(*VAR_3));
 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 if (!VAR_3) {
  FUNC_2(VAR_2, "Mem alloc error\n");
  FUNC_1(VAR_0);
 }
 VAR_3->rx_cnt.cpu = FUNC_0();
 VAR_3->redir_err.cpu = FUNC_0();
 VAR_3->kthread.cpu = FUNC_0();
 VAR_3->exception.cpu = FUNC_0();
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->enq[VAR_4].cpu = FUNC_0();

 return VAR_3;
}
