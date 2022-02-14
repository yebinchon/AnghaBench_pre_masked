
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct u64rec {int dummy; } ;
struct TYPE_9__ {void* cpu; } ;
struct TYPE_8__ {void* cpu; } ;
struct stats_record {TYPE_5__* xdp_cpumap_enqueue; TYPE_4__ xdp_devmap_xmit; TYPE_3__ xdp_cpumap_kthread; TYPE_2__* xdp_exception; TYPE_1__* xdp_redirect; } ;
struct datarec {int dummy; } ;
struct TYPE_10__ {void* cpu; } ;
struct TYPE_7__ {void* cpu; } ;
struct TYPE_6__ {void* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct stats_record* FUNC_3 (int) ;
 int FUNC_4 (struct stats_record*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static struct stats_record *FUNC_5(void)
{
 struct stats_record *VAR_5;
 int VAR_6;
 int VAR_7;


 VAR_5 = FUNC_3(sizeof(*VAR_5));
 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 if (!VAR_5) {
  FUNC_2(VAR_4, "Mem alloc error\n");
  FUNC_1(VAR_0);
 }


 VAR_6 = sizeof(struct u64rec);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_5->xdp_redirect[VAR_7].cpu = FUNC_0(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_5->xdp_exception[VAR_7].cpu = FUNC_0(VAR_6);

 VAR_6 = sizeof(struct datarec);
 VAR_5->xdp_cpumap_kthread.cpu = FUNC_0(VAR_6);
 VAR_5->xdp_devmap_xmit.cpu = FUNC_0(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_5->xdp_cpumap_enqueue[VAR_7].cpu = FUNC_0(VAR_6);

 return VAR_5;
}
