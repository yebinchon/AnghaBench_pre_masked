
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t (* Write ) (TYPE_2__*,size_t,size_t) ;} ;
struct TYPE_4__ {scalar_t__ res; size_t buf; size_t bufBase; size_t processed; TYPE_2__* outStream; } ;
typedef TYPE_1__ CRangeEnc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (TYPE_2__*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_2)
{
  size_t VAR_3;
  if (VAR_2->res != VAR_1)
    return;
  VAR_3 = VAR_2->buf - VAR_2->bufBase;
  if (VAR_3 != VAR_2->outStream->Write(VAR_2->outStream, VAR_2->bufBase, VAR_3))
    VAR_2->res = VAR_0;
  VAR_2->processed += VAR_3;
  VAR_2->buf = VAR_2->bufBase;
}
