
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mtProgress; } ;
struct TYPE_10__ {TYPE_1__ mtCoder; int allocBig; int alloc; int props; TYPE_3__* coders; } ;
struct TYPE_9__ {size_t srcPos; int enc; } ;
struct TYPE_8__ {TYPE_4__* lzma2Enc; } ;
typedef scalar_t__ SRes ;
typedef TYPE_2__ CMtCallbackImp ;
typedef TYPE_3__ CLzma2EncInt ;
typedef TYPE_4__ CLzma2Enc ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__*,size_t*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__ const*,size_t,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,unsigned int,size_t,size_t) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static SRes FUNC_6(void *VAR_5, unsigned VAR_6, Byte *VAR_7, size_t *VAR_8,
      const Byte *VAR_9, size_t VAR_10, int VAR_11)
{
  CMtCallbackImp *VAR_12 = (CMtCallbackImp *)VAR_5;
  CLzma2Enc *VAR_13 = VAR_12->lzma2Enc;
  CLzma2EncInt *VAR_14 = &VAR_13->coders[VAR_6];

  SRes VAR_15 = VAR_4;
  {
    size_t VAR_16 = *VAR_8;
    *VAR_8 = 0;

    if (VAR_10 != 0)
    {
      FUNC_5(FUNC_1(VAR_14, &VAR_13->props));

      FUNC_5(FUNC_3(VAR_14->enc, VAR_9, VAR_10, VAR_0,
          VAR_13->alloc, VAR_13->allocBig));

      while (VAR_14->srcPos < VAR_10)
      {
        size_t VAR_17 = VAR_16 - *VAR_8;
        VAR_15 = FUNC_0(VAR_14, VAR_7 + *VAR_8, &VAR_17, ((void*)0));
        if (VAR_15 != VAR_4)
          break;
        *VAR_8 += VAR_17;

        if (VAR_17 == 0)
        {
          VAR_15 = VAR_1;
          break;
        }

        if (FUNC_4(&VAR_13->mtCoder.mtProgress, VAR_6, VAR_14->srcPos, *VAR_8) != VAR_4)
        {
          VAR_15 = VAR_3;
          break;
        }
      }
      FUNC_2(VAR_14->enc);
      if (VAR_15 != VAR_4)
        return VAR_15;
    }
    if (VAR_11)
    {
      if (*VAR_8 == VAR_16)
        return VAR_2;
      VAR_7[(*VAR_8)++] = 0;
    }
  }
  return VAR_15;
}
