
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct thread {struct map_groups* mg; } ;
struct map_groups {struct machine* machine; } ;
struct map {int (* map_ip ) (struct map*,int ) ;} ;
struct machine {struct map_groups kmaps; } ;
struct addr_location {int filtered; char level; struct map* map; int addr; scalar_t__ cpumode; struct thread* thread; struct machine* machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct map*) ;
 struct map* FUNC_1 (struct map_groups*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct map*,int ) ;

struct map *FUNC_3(struct thread *VAR_8, u8 VAR_9, u64 VAR_10,
        struct addr_location *VAR_11)
{
 struct map_groups *VAR_12 = VAR_8->mg;
 struct machine *VAR_13 = VAR_12->machine;
 bool VAR_14 = 0;

 VAR_11->machine = VAR_13;
 VAR_11->thread = VAR_8;
 VAR_11->addr = VAR_10;
 VAR_11->cpumode = VAR_9;
 VAR_11->filtered = 0;

 if (VAR_13 == ((void*)0)) {
  VAR_11->map = ((void*)0);
  return ((void*)0);
 }

 if (VAR_9 == VAR_4 && VAR_7) {
  VAR_11->level = 'k';
  VAR_12 = &VAR_13->kmaps;
  VAR_14 = 1;
 } else if (VAR_9 == VAR_5 && VAR_7) {
  VAR_11->level = '.';
 } else if (VAR_9 == VAR_2 && VAR_6) {
  VAR_11->level = 'g';
  VAR_12 = &VAR_13->kmaps;
  VAR_14 = 1;
 } else if (VAR_9 == VAR_3 && VAR_6) {
  VAR_11->level = 'u';
 } else {
  VAR_11->level = 'H';
  VAR_11->map = ((void*)0);

  if ((VAR_9 == VAR_3 ||
   VAR_9 == VAR_2) &&
   !VAR_6)
   VAR_11->filtered |= (1 << VAR_0);
  if ((VAR_9 == VAR_5 ||
   VAR_9 == VAR_4) &&
   !VAR_7)
   VAR_11->filtered |= (1 << VAR_1);

  return ((void*)0);
 }

 VAR_11->map = FUNC_1(VAR_12, VAR_11->addr);
 if (VAR_11->map != ((void*)0)) {




  if (VAR_14)
   FUNC_0(VAR_11->map);
  VAR_11->addr = VAR_11->map->map_ip(VAR_11->map, VAR_11->addr);
 }

 return VAR_11->map;
}
