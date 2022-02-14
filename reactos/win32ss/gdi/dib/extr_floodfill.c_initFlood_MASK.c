
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int * floodStart; int * floodData; } ;
struct TYPE_5__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECTL ;
typedef int FLOODITEM ;
typedef TYPE_2__ FLOODINFO ;
typedef int BOOL ;


 int FUNC_0 (char*,int *,int *) ;
 int * FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline BOOL FUNC_2(FLOODINFO *VAR_4, RECTL *VAR_5)
{
  ULONG VAR_6 = VAR_5->right - VAR_5->left;
  ULONG VAR_7 = VAR_5->bottom - VAR_5->top;
  VAR_4->floodData = FUNC_1(VAR_1, VAR_6 * VAR_7 * sizeof(FLOODITEM), VAR_2);
  if (VAR_4->floodData == ((void*)0))
  {
    return VAR_0;
  }
  VAR_4->floodStart = VAR_4->floodData + (VAR_6 * VAR_7);
  FUNC_0("Allocated flood stack from %p to %p\n", VAR_4->floodData, VAR_4->floodStart);
  return VAR_3;
}
