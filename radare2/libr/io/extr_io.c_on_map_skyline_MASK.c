
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef scalar_t__ st64 ;
typedef scalar_t__ (* cbOnIterMap ) (TYPE_2__*,int ,scalar_t__,int *,scalar_t__,TYPE_3__*,int *) ;
struct TYPE_15__ {scalar_t__ addr; } ;
struct TYPE_14__ {TYPE_3__* map; TYPE_7__ itv; } ;
struct TYPE_11__ {scalar_t__ addr; } ;
struct TYPE_13__ {int perm; scalar_t__ delta; TYPE_1__ itv; int fd; } ;
struct TYPE_12__ {scalar_t__ p_cache; int map_skyline; } ;
typedef int RPVector ;
typedef TYPE_4__ RIOMapSkyline ;
typedef TYPE_2__ RIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_7__) ;
 TYPE_4__* FUNC_2 (int const*,size_t) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int const*,scalar_t__,size_t,int ) ;

__attribute__((used)) static st64 FUNC_5(RIO *VAR_1, ut64 VAR_2, ut8 *VAR_3, int VAR_4, int VAR_5, cbOnIterMap VAR_6, bool VAR_7) {
 const RPVector *VAR_8 = &VAR_1->map_skyline;
 ut64 VAR_9 = VAR_2;
 size_t VAR_10;
 bool VAR_11 = 1, VAR_12 = !VAR_7 && VAR_2 + VAR_4 < VAR_2;



 if (!VAR_4) {
  VAR_10 = FUNC_3 (VAR_8);
 } else {
  FUNC_4 (VAR_8, VAR_9, VAR_10, VAR_0);
  if (VAR_10 == FUNC_3 (VAR_8) && VAR_12) {
   VAR_12 = 0;
   VAR_10 = 0;
   VAR_9 = 0;
  }
 }

 while (VAR_10 < FUNC_3 (VAR_8)) {
  const RIOMapSkyline *VAR_13 = FUNC_2 (VAR_8, VAR_10);

  if (FUNC_1 (VAR_13->itv) - 1 < VAR_9) {
   VAR_10++;
   if (VAR_12 && VAR_10 == FUNC_3 (VAR_8)) {
    VAR_12 = 0;
    VAR_10 = 0;
    VAR_9 = 0;
   }
   continue;
  }
  if (VAR_9 < VAR_13->itv.addr) {

   if (VAR_7 || VAR_4 <= VAR_13->itv.addr - VAR_2) {
    break;
   }
   VAR_9 = VAR_13->itv.addr;
  }

  ut64 VAR_14 = FUNC_0 (VAR_2 + VAR_4 - VAR_9, FUNC_1 (VAR_13->itv) - VAR_9);
  if (VAR_14 < 1) {
   break;
  }

  if (((VAR_13->map->perm & VAR_5) == VAR_5 || VAR_1->p_cache)) {
   st64 VAR_15 = VAR_6 (VAR_1, VAR_13->map->fd, VAR_13->map->delta + VAR_9 - VAR_13->map->itv.addr,
     VAR_3 + (VAR_9 - VAR_2), VAR_14, VAR_13->map, ((void*)0));
   if (VAR_7) {
    if (VAR_15 < 0) {
     return VAR_15;
    }
    VAR_9 += VAR_15;
    if (VAR_15 != VAR_14) {
     break;
    }
   } else {
    if (VAR_15 != VAR_14) {
     VAR_11 = 0;
    }
    VAR_9 += VAR_14;
   }
  } else if (VAR_7) {
   break;
  } else {
   VAR_9 += VAR_14;
   VAR_11 = 0;
  }

  if (VAR_9 == VAR_2 + VAR_4) {
   break;
  }

  if (!VAR_9) {
   VAR_10 = 0;
  }
 }
 return VAR_7 ? VAR_9 - VAR_2 : VAR_11;
}
