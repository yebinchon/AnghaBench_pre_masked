
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ read_ahead; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_10__ {scalar_t__ pos_mask; size_t state; int * is_rep; int rc; int ** is_match; } ;
typedef TYPE_2__ lzma_coder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__ const,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__ const,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(lzma_coder *VAR_2, lzma_mf *VAR_3,
  uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 const uint32_t VAR_7 = VAR_6 & VAR_2->pos_mask;

 if (VAR_4 == VAR_1) {

  FUNC_0(VAR_5 == 1);
  FUNC_3(&VAR_2->rc,
    &VAR_2->is_match[VAR_2->state][VAR_7], 0);
  FUNC_1(VAR_2, VAR_3, VAR_6);
 } else {

  FUNC_3(&VAR_2->rc,
   &VAR_2->is_match[VAR_2->state][VAR_7], 1);

  if (VAR_4 < VAR_0) {


   FUNC_3(&VAR_2->rc, &VAR_2->is_rep[VAR_2->state], 1);
   FUNC_4(VAR_2, VAR_7, VAR_4, VAR_5);
  } else {

   FUNC_3(&VAR_2->rc, &VAR_2->is_rep[VAR_2->state], 0);
   FUNC_2(VAR_2, VAR_7, VAR_4 - VAR_0, VAR_5);
  }
 }

 FUNC_0(VAR_3->read_ahead >= VAR_5);
 VAR_3->read_ahead -= VAR_5;
}
