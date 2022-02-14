
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t state; size_t* reps; int fast_mode; int rep_len_encoder; int rc; int * is_rep2; int * is_rep1; int * is_rep0; int ** is_rep0_long; } ;
typedef TYPE_1__ lzma_coder ;


 int FUNC_0 (int *,int *,size_t const,size_t const,int ) ;
 int FUNC_1 (int *,int *,size_t const) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static inline void
FUNC_4(lzma_coder *VAR_0, const uint32_t VAR_1,
  const uint32_t VAR_2, const uint32_t VAR_3)
{
 if (VAR_2 == 0) {
  FUNC_1(&VAR_0->rc, &VAR_0->is_rep0[VAR_0->state], 0);
  FUNC_1(&VAR_0->rc,
    &VAR_0->is_rep0_long[VAR_0->state][VAR_1],
    VAR_3 != 1);
 } else {
  const uint32_t VAR_4 = VAR_0->reps[VAR_2];
  FUNC_1(&VAR_0->rc, &VAR_0->is_rep0[VAR_0->state], 1);

  if (VAR_2 == 1) {
   FUNC_1(&VAR_0->rc, &VAR_0->is_rep1[VAR_0->state], 0);
  } else {
   FUNC_1(&VAR_0->rc, &VAR_0->is_rep1[VAR_0->state], 1);
   FUNC_1(&VAR_0->rc, &VAR_0->is_rep2[VAR_0->state],
     VAR_2 - 2);

   if (VAR_2 == 3)
    VAR_0->reps[3] = VAR_0->reps[2];

   VAR_0->reps[2] = VAR_0->reps[1];
  }

  VAR_0->reps[1] = VAR_0->reps[0];
  VAR_0->reps[0] = VAR_4;
 }

 if (VAR_3 == 1) {
  FUNC_3(VAR_0->state);
 } else {
  FUNC_0(&VAR_0->rc, &VAR_0->rep_len_encoder, VAR_1, VAR_3,
    VAR_0->fast_mode);
  FUNC_2(VAR_0->state);
 }
}
