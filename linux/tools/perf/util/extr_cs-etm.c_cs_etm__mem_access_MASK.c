
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct cs_etm_traceid_queue {struct thread* thread; } ;
struct cs_etm_queue {TYPE_1__* etm; } ;
struct addr_location {TYPE_3__* map; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_10__ {TYPE_2__ data; } ;
struct TYPE_9__ {TYPE_5__* dso; int (* map_ip ) (TYPE_3__*,int ) ;} ;
struct TYPE_7__ {struct thread* unknown_thread; struct machine* machine; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*,int ) ;
 struct cs_etm_traceid_queue* FUNC_1 (struct cs_etm_queue*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,struct machine*,int ,scalar_t__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (struct thread*,scalar_t__,int ,struct addr_location*) ;

__attribute__((used)) static u32 FUNC_7(struct cs_etm_queue *VAR_3, u8 VAR_4,
         u64 VAR_5, size_t VAR_6, u8 *VAR_7)
{
 u8 VAR_8;
 u64 VAR_9;
 int VAR_10;
 struct thread *VAR_11;
 struct machine *VAR_12;
 struct addr_location VAR_13;
 struct cs_etm_traceid_queue *VAR_14;

 if (!VAR_3)
  return 0;

 VAR_12 = VAR_3->etm->machine;
 VAR_8 = FUNC_0(VAR_3, VAR_5);
 VAR_14 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_14)
  return 0;

 VAR_11 = VAR_14->thread;
 if (!VAR_11) {
  if (VAR_8 != VAR_2)
   return 0;
  VAR_11 = VAR_3->etm->unknown_thread;
 }

 if (!FUNC_6(VAR_11, VAR_8, VAR_5, &VAR_13) || !VAR_13.map->dso)
  return 0;

 if (VAR_13.map->dso->data.status == VAR_0 &&
     FUNC_3(VAR_13.map->dso, VAR_1))
  return 0;

 VAR_9 = VAR_13.map->map_ip(VAR_13.map, VAR_5);

 FUNC_4(VAR_13.map);

 VAR_10 = FUNC_2(VAR_13.map->dso, VAR_12, VAR_9, VAR_7, VAR_6);

 if (VAR_10 <= 0)
  return 0;

 return VAR_10;
}
