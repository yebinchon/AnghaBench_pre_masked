
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int nice_len; int read_ahead; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_11__ {int longest_match_length; int matches_count; scalar_t__ const** reps; TYPE_6__* matches; } ;
typedef TYPE_2__ lzma_coder ;
struct TYPE_12__ {int dist; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const,int const) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*,int*,TYPE_6__*) ;
 scalar_t__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__ const*,scalar_t__ const* const) ;

extern void
FUNC_9(lzma_coder *restrict VAR_3, lzma_mf *restrict VAR_4,
  uint32_t *restrict VAR_5, uint32_t *restrict VAR_6)
{
 const uint32_t VAR_7 = VAR_4->nice_len;

 uint32_t VAR_8;
 uint32_t VAR_9;
 if (VAR_4->read_ahead == 0) {
  VAR_8 = FUNC_4(VAR_4, &VAR_9, VAR_3->matches);
 } else {
  FUNC_1(VAR_4->read_ahead == 1);
  VAR_8 = VAR_3->longest_match_length;
  VAR_9 = VAR_3->matches_count;
 }

 const uint8_t *VAR_10 = FUNC_5(VAR_4) - 1;
 const uint32_t VAR_11 = FUNC_7(FUNC_3(VAR_4) + 1, VAR_0);

 if (VAR_11 < 2) {

  *VAR_5 = VAR_2;
  *VAR_6 = 1;
  return;
 }


 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;

 for (uint32_t VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14) {

  const uint8_t *const VAR_15 = VAR_10 - VAR_3->reps[VAR_14] - 1;



  if (FUNC_8(VAR_10, VAR_15))
   continue;



  uint32_t VAR_16;
  for (VAR_16 = 2; VAR_16 < VAR_11
    && VAR_10[VAR_16] == VAR_15[VAR_16]; ++VAR_16) ;



  if (VAR_16 >= VAR_7) {
   *VAR_5 = VAR_14;
   *VAR_6 = VAR_16;
   FUNC_6(VAR_4, VAR_16 - 1);
   return;
  }

  if (VAR_16 > VAR_12) {
   VAR_13 = VAR_14;
   VAR_12 = VAR_16;
  }
 }



 if (VAR_8 >= VAR_7) {
  *VAR_5 = VAR_3->matches[VAR_9 - 1].dist
    + VAR_1;
  *VAR_6 = VAR_8;
  FUNC_6(VAR_4, VAR_8 - 1);
  return;
 }

 uint32_t VAR_17 = 0;
 if (VAR_8 >= 2) {
  VAR_17 = VAR_3->matches[VAR_9 - 1].dist;

  while (VAR_9 > 1 && VAR_8 ==
    VAR_3->matches[VAR_9 - 2].len + 1) {
   if (!FUNC_2(VAR_3->matches[
      VAR_9 - 2].dist,
     VAR_17))
    break;

   --VAR_9;
   VAR_8 = VAR_3->matches[VAR_9 - 1].len;
   VAR_17 = VAR_3->matches[VAR_9 - 1].dist;
  }

  if (VAR_8 == 2 && VAR_17 >= 0x80)
   VAR_8 = 1;
 }

 if (VAR_12 >= 2) {
  if (VAR_12 + 1 >= VAR_8
    || (VAR_12 + 2 >= VAR_8
     && VAR_17 > (FUNC_0(1) << 9))
    || (VAR_12 + 3 >= VAR_8
     && VAR_17 > (FUNC_0(1) << 15))) {
   *VAR_5 = VAR_13;
   *VAR_6 = VAR_12;
   FUNC_6(VAR_4, VAR_12 - 1);
   return;
  }
 }

 if (VAR_8 < 2 || VAR_11 <= 2) {
  *VAR_5 = VAR_2;
  *VAR_6 = 1;
  return;
 }



 VAR_3->longest_match_length = FUNC_4(VAR_4,
   &VAR_3->matches_count, VAR_3->matches);

 if (VAR_3->longest_match_length >= 2) {
  const uint32_t VAR_18 = VAR_3->matches[
    VAR_3->matches_count - 1].dist;

  if ((VAR_3->longest_match_length >= VAR_8
     && VAR_18 < VAR_17)
    || (VAR_3->longest_match_length == VAR_8 + 1
     && !FUNC_2(VAR_17, VAR_18))
    || (VAR_3->longest_match_length > VAR_8 + 1)
    || (VAR_3->longest_match_length + 1 >= VAR_8
     && VAR_8 >= 3
     && FUNC_2(VAR_18, VAR_17))) {
   *VAR_5 = VAR_2;
   *VAR_6 = 1;
   return;
  }
 }




 ++VAR_10;

 const uint32_t VAR_19 = VAR_8 - 1;

 for (uint32_t VAR_20 = 0; VAR_20 < VAR_1; ++VAR_20) {
  const uint8_t *const VAR_21 = VAR_10 - VAR_3->reps[VAR_20] - 1;

  if (FUNC_8(VAR_10, VAR_21))
   continue;

  uint32_t VAR_22;
  for (VAR_22 = 2; VAR_22 < VAR_19
    && VAR_10[VAR_22] == VAR_21[VAR_22]; ++VAR_22) ;

  if (VAR_22 >= VAR_19) {
   *VAR_5 = VAR_2;
   *VAR_6 = 1;
   return;
  }
 }

 *VAR_5 = VAR_17 + VAR_1;
 *VAR_6 = VAR_8;
 FUNC_6(VAR_4, VAR_8 - 2);
 return;
}
