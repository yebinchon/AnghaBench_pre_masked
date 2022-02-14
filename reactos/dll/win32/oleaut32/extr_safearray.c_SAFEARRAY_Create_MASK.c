
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARTYPE ;
typedef scalar_t__ ULONG ;
typedef unsigned int UINT ;
struct TYPE_6__ {scalar_t__ cbElements; scalar_t__ rgsabound; int fFeatures; } ;
typedef int SAFEARRAYBOUND ;
typedef TYPE_1__ SAFEARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,unsigned int,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;




 int FUNC_5 (scalar_t__,int const*,int) ;

__attribute__((used)) static SAFEARRAY* FUNC_6(VARTYPE VAR_4, UINT VAR_5, const SAFEARRAYBOUND *VAR_6, ULONG VAR_7)
{
  SAFEARRAY *VAR_8 = ((void*)0);
  unsigned int VAR_9;

  if (!VAR_6)
    return ((void*)0);

  if (FUNC_1(FUNC_3(VAR_4, VAR_5, &VAR_8)))
  {
    switch (VAR_4)
    {
      case 131: VAR_8->fFeatures |= VAR_0; break;
      case 129: VAR_8->fFeatures |= VAR_2; break;
      case 130: VAR_8->fFeatures |= VAR_1; break;
      case 128: VAR_8->fFeatures |= VAR_3; break;
    }

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
      FUNC_5(VAR_8->rgsabound + VAR_9, VAR_6 + VAR_5 - 1 - VAR_9, sizeof(SAFEARRAYBOUND));

    if (VAR_7)
      VAR_8->cbElements = VAR_7;

    if (!VAR_8->cbElements || FUNC_0(FUNC_2(VAR_8)))
    {
      FUNC_4(VAR_8);
      VAR_8 = ((void*)0);
    }
  }
  return VAR_8;
}
