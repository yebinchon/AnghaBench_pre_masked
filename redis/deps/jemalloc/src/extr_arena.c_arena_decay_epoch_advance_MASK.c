
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int nstime_t ;
typedef int extents_t ;
typedef int arena_t ;
struct TYPE_6__ {size_t nunpurged; } ;
typedef TYPE_1__ arena_decay_t ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const*,size_t) ;
 int FUNC_2 (int *,int *,TYPE_1__*,int *,size_t,size_t,int) ;
 int FUNC_3 () ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_0, arena_t *VAR_1, arena_decay_t *VAR_2,
    extents_t *VAR_3, const nstime_t *VAR_4, bool VAR_5) {
 size_t VAR_6 = FUNC_4(VAR_3);
 FUNC_1(VAR_2, VAR_4, VAR_6);

 size_t VAR_7 = FUNC_0(VAR_2);

 VAR_2->nunpurged = (VAR_7 > VAR_6) ? VAR_7 :
     VAR_6;

 if (!FUNC_3() || VAR_5) {
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_6, VAR_7, VAR_5);
 }
}
