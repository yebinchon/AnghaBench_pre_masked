
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef int BlockChainStream ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_1__) ;
 TYPE_1__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__) ;
 int VAR_0 ;

BOOL FUNC_3(
  BlockChainStream* VAR_1,
  ULARGE_INTEGER VAR_2)
{
  ULARGE_INTEGER VAR_3 = FUNC_1(VAR_1);

  if (VAR_2.QuadPart == VAR_3.QuadPart)
    return VAR_0;

  if (VAR_2.QuadPart < VAR_3.QuadPart)
  {
    FUNC_2(VAR_1, VAR_2);
  }
  else
  {
    FUNC_0(VAR_1, VAR_2);
  }

  return VAR_0;
}
