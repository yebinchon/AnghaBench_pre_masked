
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
typedef void tcache_t ;
struct TYPE_4__ {scalar_t__ ncached_max; } ;
struct TYPE_3__ {scalar_t__ avail; } ;


 int FUNC_0 (int ,void*,int *,int *,int,int) ;
 int FUNC_1 (int ,void*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *,void*) ;
 TYPE_1__* FUNC_3 (void*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(tsd_t *VAR_1, tcache_t *VAR_2, bool VAR_3) {
 FUNC_2(VAR_1, VAR_2);
 FUNC_1(FUNC_4(VAR_1), VAR_2);

 if (VAR_3) {

  void *VAR_4 =
      (void *)((uintptr_t)FUNC_3(VAR_2, 0)->avail -
      (uintptr_t)VAR_0[0].ncached_max * sizeof(void *));
  FUNC_0(FUNC_4(VAR_1), VAR_4, ((void*)0), ((void*)0), 1, 1);
 } else {

  FUNC_0(FUNC_4(VAR_1), VAR_2, ((void*)0), ((void*)0), 1, 1);
 }
}
