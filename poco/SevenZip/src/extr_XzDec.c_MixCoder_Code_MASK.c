
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* Alloc ) (TYPE_3__*,int) ;} ;
struct TYPE_6__ {scalar_t__ buf; int numCoders; int* pos; scalar_t__* size; int* finished; TYPE_1__* coders; TYPE_3__* alloc; } ;
struct TYPE_5__ {scalar_t__ (* Code ) (int ,int *,scalar_t__*,int const*,scalar_t__*,int,int ,int*) ;int p; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ IStateCoder ;
typedef int ECoderStatus ;
typedef int ECoderFinishMode ;
typedef TYPE_2__ CMixCoder ;
typedef int Byte ;
typedef scalar_t__ Bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__*,int const*,scalar_t__*,int,int ,int*) ;

SRes FUNC_2(CMixCoder *VAR_9, Byte *VAR_10, SizeT *VAR_11,
    const Byte *VAR_12, SizeT *VAR_13, int VAR_14,
    ECoderFinishMode VAR_15, ECoderStatus *VAR_16)
{
  SizeT VAR_17 = *VAR_11;
  SizeT VAR_18 = *VAR_13;
  Bool VAR_19 = VAR_8;
  *VAR_11 = 0;
  *VAR_13 = 0;
  *VAR_16 = VAR_3;

  if (VAR_9->buf == 0)
  {
    VAR_9->buf = VAR_9->alloc->Alloc(VAR_9->alloc, VAR_0 * (VAR_5 - 1));
    if (VAR_9->buf == 0)
      return VAR_6;
  }

  if (VAR_9->numCoders != 1)
    VAR_15 = VAR_1;

  for (;;)
  {
    Bool VAR_20 = VAR_4;
    int VAR_21;





    for (VAR_21 = 0; VAR_21 < VAR_9->numCoders; VAR_21++)
    {
      SRes VAR_22;
      IStateCoder *VAR_23 = &VAR_9->coders[VAR_21];
      Byte *VAR_24;
      SizeT VAR_25, VAR_26;
      const Byte *VAR_27;
      int VAR_28;
      int VAR_29;

      if (VAR_21 == 0)
      {
        VAR_27 = VAR_12;
        VAR_26 = VAR_18 - *VAR_13;
        VAR_28 = VAR_14;
      }
      else
      {
        VAR_27 = VAR_9->buf + (VAR_0 * (VAR_21 - 1)) + VAR_9->pos[VAR_21 - 1];
        VAR_26 = VAR_9->size[VAR_21 - 1] - VAR_9->pos[VAR_21 - 1];
        VAR_28 = VAR_9->finished[VAR_21 - 1];
      }

      if (VAR_21 == VAR_9->numCoders - 1)
      {
        VAR_24 = VAR_10;
        VAR_25 = VAR_17 - *VAR_11;
      }
      else
      {
        if (VAR_9->pos[VAR_21] != VAR_9->size[VAR_21])
          continue;
        VAR_24 = VAR_9->buf + (VAR_0 * VAR_21);
        VAR_25 = VAR_0;
      }

      VAR_22 = VAR_23->Code(VAR_23->p, VAR_24, &VAR_25, VAR_27, &VAR_26, VAR_28, VAR_15, &VAR_29);

      if (!VAR_29)
        VAR_19 = VAR_4;

      if (VAR_21 == 0)
      {
        *VAR_13 += VAR_26;
        VAR_12 += VAR_26;
      }
      else
      {
        VAR_9->pos[VAR_21 - 1] += VAR_26;
      }

      if (VAR_21 == VAR_9->numCoders - 1)
      {
        *VAR_11 += VAR_25;
        VAR_10 += VAR_25;
      }
      else
      {
        VAR_9->size[VAR_21] = VAR_25;
        VAR_9->pos[VAR_21] = 0;
        VAR_9->finished[VAR_21] = VAR_29;
      }

      if (VAR_22 != VAR_7)
        return VAR_22;

      if (VAR_25 != 0 || VAR_26 != 0)
        VAR_20 = VAR_8;
    }
    if (!VAR_20)
      break;
  }
  if (VAR_19)
    *VAR_16 = VAR_2;
  return VAR_7;
}
