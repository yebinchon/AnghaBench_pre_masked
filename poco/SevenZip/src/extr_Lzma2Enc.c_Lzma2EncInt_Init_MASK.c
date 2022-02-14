
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* needInitProp; void* needInitState; int props; scalar_t__ srcPos; int enc; } ;
struct TYPE_5__ {int lzmaProps; } ;
typedef int SizeT ;
typedef int SRes ;
typedef TYPE_1__ CLzma2EncProps ;
typedef TYPE_2__ CLzma2EncInt ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static SRes FUNC_3(CLzma2EncInt *VAR_3, const CLzma2EncProps *VAR_4)
{
  Byte VAR_5[VAR_0];
  SizeT VAR_6 = VAR_0;
  FUNC_2(FUNC_0(VAR_3->enc, &VAR_4->lzmaProps));
  FUNC_2(FUNC_1(VAR_3->enc, VAR_5, &VAR_6));
  VAR_3->srcPos = 0;
  VAR_3->props = VAR_5[0];
  VAR_3->needInitState = VAR_2;
  VAR_3->needInitProp = VAR_2;
  return VAR_1;
}
