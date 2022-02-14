
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_14__ {scalar_t__ prof_accumbytes; int * arena; } ;
typedef TYPE_2__ tcache_t ;
struct TYPE_13__ {scalar_t__ nrequests; } ;
struct TYPE_15__ {TYPE_1__ tstats; } ;
typedef TYPE_3__ cache_bin_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_3__*,unsigned int,int ,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*,unsigned int,int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,unsigned int) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,unsigned int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(tsd_t *VAR_4, tcache_t *VAR_5) {
 FUNC_1(VAR_5->arena != ((void*)0));

 for (unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  cache_bin_t *VAR_7 = FUNC_6(VAR_5, VAR_6);
  FUNC_4(VAR_4, VAR_5, VAR_7, VAR_6, 0);

  if (VAR_2) {
   FUNC_1(VAR_7->tstats.nrequests == 0);
  }
 }
 for (unsigned VAR_8 = VAR_0; VAR_8 < VAR_3; VAR_8++) {
  cache_bin_t *VAR_9 = FUNC_5(VAR_5, VAR_8);
  FUNC_3(VAR_4, VAR_9, VAR_8, 0, VAR_5);

  if (VAR_2) {
   FUNC_1(VAR_9->tstats.nrequests == 0);
  }
 }

 if (VAR_1 && VAR_5->prof_accumbytes > 0 &&
     FUNC_0(FUNC_7(VAR_4), VAR_5->arena,
     VAR_5->prof_accumbytes)) {
  FUNC_2(FUNC_7(VAR_4));
 }
}
