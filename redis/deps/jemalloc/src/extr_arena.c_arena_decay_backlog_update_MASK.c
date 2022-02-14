
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int * backlog; } ;
typedef TYPE_1__ arena_decay_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,size_t) ;

__attribute__((used)) static void
FUNC_4(arena_decay_t *VAR_1, uint64_t VAR_2,
    size_t VAR_3) {
 if (VAR_2 >= VAR_0) {
  FUNC_3(VAR_1->backlog, 0, (VAR_0-1) *
      sizeof(size_t));
 } else {
  size_t VAR_4 = (size_t)VAR_2;

  FUNC_1((uint64_t)VAR_4 == VAR_2);

  FUNC_2(VAR_1->backlog, &VAR_1->backlog[VAR_4],
      (VAR_0 - VAR_4) * sizeof(size_t));
  if (VAR_4 > 1) {
   FUNC_3(&VAR_1->backlog[VAR_0 -
       VAR_4], 0, (VAR_4-1) * sizeof(size_t));
  }
 }

 FUNC_0(VAR_1, VAR_3);
}
