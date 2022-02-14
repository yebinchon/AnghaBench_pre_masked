
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Code; int Init; int SetProps; int Free; int * p; } ;
struct TYPE_6__ {int * (* Alloc ) (TYPE_1__*,int) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ IStateCoder ;
typedef int CLzma2Dec ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static SRes FUNC_2(IStateCoder *VAR_6, ISzAlloc *VAR_7)
{
  CLzma2Dec *VAR_8 = VAR_7->Alloc(VAR_7, sizeof(CLzma2Dec));
  VAR_6->p = VAR_8;
  if (VAR_8 == 0)
    return VAR_4;
  VAR_6->Free = VAR_1;
  VAR_6->SetProps = VAR_3;
  VAR_6->Init = VAR_2;
  VAR_6->Code = VAR_0;
  FUNC_0(VAR_8);
  return VAR_5;
}
