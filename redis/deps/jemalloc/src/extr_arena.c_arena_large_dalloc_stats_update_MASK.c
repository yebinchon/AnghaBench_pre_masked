
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef scalar_t__ szind_t ;
struct TYPE_7__ {TYPE_1__* lstats; } ;
struct TYPE_6__ {TYPE_3__ stats; } ;
typedef TYPE_2__ arena_t ;
struct TYPE_5__ {int ndalloc; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*,int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3(tsdn_t *VAR_3, arena_t *VAR_4, size_t VAR_5) {
 szind_t VAR_6, VAR_7;

 FUNC_1(VAR_2);

 if (VAR_5 < VAR_0) {
  VAR_5 = VAR_0;
 }
 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = (VAR_6 >= VAR_1) ? VAR_6 - VAR_1 : 0;

 FUNC_0(VAR_3, &VAR_4->stats,
     &VAR_4->stats.lstats[VAR_7].ndalloc, 1);
}
