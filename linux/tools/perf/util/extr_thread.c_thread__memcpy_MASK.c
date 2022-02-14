
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct addr_location {TYPE_2__* map; } ;
struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_7__ {int is_64_bit; TYPE_1__ data; } ;
struct TYPE_6__ {long (* map_ip ) (TYPE_2__*,int ) ;TYPE_4__* dso; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct machine*,long,void*,int) ;
 scalar_t__ FUNC_1 (struct machine*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 long FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct thread*,int ,int ,struct addr_location*) ;

int FUNC_5(struct thread *VAR_3, struct machine *VAR_4,
     void *VAR_5, u64 VAR_6, int VAR_7, bool *VAR_8)
{
       u8 VAR_9 = VAR_2;
       struct addr_location VAR_10;
       long VAR_11;

       if (FUNC_1(VAR_4, VAR_6))
               VAR_9 = VAR_1;

       if (!FUNC_4(VAR_3, VAR_9, VAR_6, &VAR_10) || !VAR_10.map->dso ||
    VAR_10.map->dso->data.status == VAR_0 ||
    FUNC_2(VAR_10.map) < 0)
               return -1;

       VAR_11 = VAR_10.map->map_ip(VAR_10.map, VAR_6);
       if (VAR_8)
               *VAR_8 = VAR_10.map->dso->is_64_bit;

       return FUNC_0(VAR_10.map->dso, VAR_4, VAR_11, VAR_5, VAR_7);
}
