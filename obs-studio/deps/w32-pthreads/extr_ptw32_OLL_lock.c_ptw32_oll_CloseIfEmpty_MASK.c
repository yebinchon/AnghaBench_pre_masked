
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ word; } ;
struct TYPE_10__ {TYPE_2__ counter; } ;
typedef TYPE_3__ ptw32_oll_snziRoot_t ;
struct TYPE_11__ {TYPE_3__ proxyRoot; } ;
typedef TYPE_4__ ptw32_oll_csnzi_t ;
struct TYPE_8__ {scalar_t__ word; } ;
struct TYPE_12__ {TYPE_1__ counter; } ;
typedef int PTW32_INTERLOCKED_SIZEPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_SIZE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_5__ VAR_3 ;

BOOL
FUNC_1(ptw32_oll_csnzi_t* VAR_4)
{
  ptw32_oll_snziRoot_t VAR_5, VAR_6;
  do
  {
    VAR_6 = VAR_4->proxyRoot;
    if (VAR_6.counter.word != VAR_3.counter.word)
    {
      return VAR_0;
    }
    VAR_5 = VAR_2;
  } while (FUNC_0(
                 (PTW32_INTERLOCKED_SIZEPTR)&VAR_4->proxyRoot.counter,
                 (PTW32_INTERLOCKED_SIZE)VAR_5.counter.word,
                 (PTW32_INTERLOCKED_SIZE)VAR_6.counter.word)
           != (PTW32_INTERLOCKED_SIZE)VAR_6.counter.word);
  return VAR_1;
}
