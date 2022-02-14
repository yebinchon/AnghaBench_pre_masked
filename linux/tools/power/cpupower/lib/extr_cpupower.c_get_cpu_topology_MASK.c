
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpupower_topology {scalar_t__ pkgs; TYPE_1__* core_info; scalar_t__ cores; } ;
struct cpuid_core_info {int dummy; } ;
struct TYPE_3__ {int cpu; int pkg; int core; int is_online; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,char*,int*) ;

int FUNC_5(struct cpupower_topology *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_3(VAR_1);

 VAR_3->core_info = FUNC_1(sizeof(struct cpuid_core_info) * VAR_6);
 if (VAR_3->core_info == ((void*)0))
  return -VAR_0;
 VAR_3->pkgs = VAR_3->cores = 0;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_3->core_info[VAR_4].cpu = VAR_4;
  VAR_3->core_info[VAR_4].is_online = FUNC_0(VAR_4);
  if(FUNC_4(
   VAR_4,
   "physical_package_id",
   &(VAR_3->core_info[VAR_4].pkg)) < 0) {
   VAR_3->core_info[VAR_4].pkg = -1;
   VAR_3->core_info[VAR_4].core = -1;
   continue;
  }
  if(FUNC_4(
   VAR_4,
   "core_id",
   &(VAR_3->core_info[VAR_4].core)) < 0) {
   VAR_3->core_info[VAR_4].pkg = -1;
   VAR_3->core_info[VAR_4].core = -1;
   continue;
  }
 }

 FUNC_2(VAR_3->core_info, VAR_6, sizeof(struct cpuid_core_info),
       VAR_2);




 VAR_5 = VAR_3->core_info[0].pkg;
 for(VAR_4 = 1; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_3->core_info[VAR_4].pkg != VAR_5 &&
    VAR_3->core_info[VAR_4].pkg != -1) {

   VAR_5 = VAR_3->core_info[VAR_4].pkg;
   VAR_3->pkgs++;
  }
 }
 if (!(VAR_3->core_info[0].pkg == -1))
  VAR_3->pkgs++;
 return VAR_6;
}
