
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef int arena_stats_decay_t ;
struct TYPE_4__ {int purging; int * stats; int mtx; scalar_t__ ceil_npages; } ;
typedef TYPE_1__ arena_decay_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_3(arena_decay_t *VAR_4, ssize_t VAR_5,
    arena_stats_decay_t *VAR_6) {
 if (VAR_1) {
  for (size_t VAR_7 = 0; VAR_7 < sizeof(arena_decay_t); VAR_7++) {
   FUNC_1(((char *)VAR_4)[VAR_7] == 0);
  }
  VAR_4->ceil_npages = 0;
 }
 if (FUNC_2(&VAR_4->mtx, "decay", VAR_0,
     VAR_3)) {
  return 1;
 }
 VAR_4->purging = 0;
 FUNC_0(VAR_4, VAR_5);

 if (VAR_2) {
  VAR_4->stats = VAR_6;
 }
 return 0;
}
