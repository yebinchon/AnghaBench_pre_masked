
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int va_list ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_9__ {int tif_flags; } ;
struct TYPE_8__ {int (* vsetparent ) (TYPE_2__*,int,int ) ;int predictor; } ;
typedef TYPE_1__ TIFFPredictorState ;
typedef TYPE_2__ TIFF ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_3, uint32 VAR_4, va_list VAR_5)
{
 TIFFPredictorState *VAR_6 = FUNC_0(VAR_3);

 FUNC_2(VAR_6 != ((void*)0));
 FUNC_2(VAR_6->vsetparent != ((void*)0));

 switch (VAR_4) {
 case 128:
  VAR_6->predictor = (uint16) FUNC_4(VAR_5, VAR_2);
  FUNC_1(VAR_3, VAR_0);
  break;
 default:
  return (*VAR_6->vsetparent)(VAR_3, VAR_4, VAR_5);
 }
 VAR_3->tif_flags |= VAR_1;
 return 1;
}
