
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u8 ;
typedef scalar_t__ u64 ;
struct thread {int dummy; } ;
struct intel_pt_queue {TYPE_3__* pt; struct thread* thread; } ;
struct addr_location {TYPE_2__* map; } ;
struct TYPE_6__ {scalar_t__ kernel_start; } ;
struct TYPE_5__ {scalar_t__ (* map_ip ) (TYPE_2__*,scalar_t__) ;TYPE_1__* dso; } ;
struct TYPE_4__ {int * long_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (struct thread*,int ,scalar_t__,struct addr_location*) ;

__attribute__((used)) static int FUNC_3(uint64_t VAR_2, void *VAR_3)
{
 struct intel_pt_queue *VAR_4 = VAR_3;
 struct thread *VAR_5;
 struct addr_location VAR_6;
 u8 VAR_7;
 u64 VAR_8;

 if (VAR_2 >= VAR_4->pt->kernel_start)
  return FUNC_0(VAR_4->pt, VAR_2, VAR_2, ((void*)0));

 VAR_7 = VAR_1;

 VAR_5 = VAR_4->thread;
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_2(VAR_5, VAR_7, VAR_2, &VAR_6) || !VAR_6.map->dso)
  return -VAR_0;

 VAR_8 = VAR_6.map->map_ip(VAR_6.map, VAR_2);

 return FUNC_0(VAR_4->pt, VAR_2, VAR_8,
         VAR_6.map->dso->long_name);
}
