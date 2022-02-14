
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stats_record {int xdp_devmap_xmit; int xdp_cpumap_kthread; int * xdp_cpumap_enqueue; int * xdp_exception; int * xdp_redirect; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int,int,int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static bool FUNC_2(struct stats_record *VAR_4)
{
 int VAR_5;
 int VAR_6;





 VAR_5 = VAR_3[0].fd;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_1(VAR_5, VAR_6, &VAR_4->xdp_redirect[VAR_6]);

 VAR_5 = VAR_3[1].fd;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_1(VAR_5, VAR_6, &VAR_4->xdp_exception[VAR_6]);
 }

 VAR_5 = VAR_3[2].fd;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(VAR_5, VAR_6, &VAR_4->xdp_cpumap_enqueue[VAR_6]);

 VAR_5 = VAR_3[3].fd;
 FUNC_0(VAR_5, 0, &VAR_4->xdp_cpumap_kthread);

 VAR_5 = VAR_3[4].fd;
 FUNC_0(VAR_5, 0, &VAR_4->xdp_devmap_xmit);

 return 1;
}
