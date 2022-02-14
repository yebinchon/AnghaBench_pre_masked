
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARTYPE ;
typedef int ULONG ;
struct TYPE_7__ {int cDims; int cbElements; int fFeatures; TYPE_1__* rgsabound; struct TYPE_7__* pvData; } ;
struct TYPE_6__ {int cElements; int lLbound; } ;
typedef TYPE_2__ SAFEARRAY ;
typedef int LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,TYPE_2__**) ;
 int FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;


 int VAR_5 ;



__attribute__((used)) static SAFEARRAY* FUNC_3(VARTYPE VAR_6, LONG VAR_7, ULONG VAR_8, ULONG VAR_9)
{
  SAFEARRAY *VAR_10 = ((void*)0);

  if (VAR_9 || (VAR_6 == VAR_5))
  {

    if (FUNC_2(FUNC_0(sizeof(SAFEARRAY) + VAR_9 * VAR_8, &VAR_10)))
    {
      FUNC_1(VAR_6, VAR_10);

      VAR_10->cDims = 1;
      VAR_10->fFeatures |= VAR_1;
      VAR_10->pvData = &VAR_10[1];
      VAR_10->cbElements = VAR_9;
      VAR_10->rgsabound[0].cElements = VAR_8;
      VAR_10->rgsabound[0].lLbound = VAR_7;

      switch (VAR_6)
      {
        case 131: VAR_10->fFeatures |= VAR_0; break;
        case 129: VAR_10->fFeatures |= VAR_3; break;
        case 130: VAR_10->fFeatures |= VAR_2; break;
        case 128: VAR_10->fFeatures |= VAR_4; break;
      }
    }
  }
  return VAR_10;
}
