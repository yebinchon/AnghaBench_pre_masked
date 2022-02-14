
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ thr_uid; scalar_t__ thr_discrim; scalar_t__ tctx_uid; } ;
typedef TYPE_1__ prof_tctx_t ;



__attribute__((used)) static int
FUNC_0(const prof_tctx_t *VAR_0, const prof_tctx_t *VAR_1) {
 uint64_t VAR_2 = VAR_0->thr_uid;
 uint64_t VAR_3 = VAR_1->thr_uid;
 int VAR_4 = (VAR_2 > VAR_3) - (VAR_2 < VAR_3);
 if (VAR_4 == 0) {
  uint64_t VAR_5 = VAR_0->thr_discrim;
  uint64_t VAR_6 = VAR_1->thr_discrim;
  VAR_4 = (VAR_5 > VAR_6) - (VAR_5 <
      VAR_6);
  if (VAR_4 == 0) {
   uint64_t VAR_7 = VAR_0->tctx_uid;
   uint64_t VAR_8 = VAR_1->tctx_uid;
   VAR_4 = (VAR_7 > VAR_8) - (VAR_7 <
       VAR_8);
  }
 }
 return VAR_4;
}
