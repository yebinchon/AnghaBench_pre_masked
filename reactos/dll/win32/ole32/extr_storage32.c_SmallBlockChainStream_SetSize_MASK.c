
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ LowPart; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
typedef int SmallBlockChainStream ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_2__) ;
 TYPE_2__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__) ;
 int VAR_0 ;

BOOL FUNC_3(
                SmallBlockChainStream* VAR_1,
                ULARGE_INTEGER VAR_2)
{
  ULARGE_INTEGER VAR_3 = FUNC_1(VAR_1);

  if (VAR_2.u.LowPart == VAR_3.u.LowPart)
    return VAR_0;

  if (VAR_2.u.LowPart < VAR_3.u.LowPart)
  {
    FUNC_2(VAR_1, VAR_2);
  }
  else
  {
    FUNC_0(VAR_1, VAR_2);
  }

  return VAR_0;
}
