
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * unknown_; int * img_; int * alpha_; int * header_; } ;
typedef TYPE_1__ WebPMuxImage ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__ const* const) ;
 int FUNC_4 (TYPE_1__ const* const) ;

uint8_t* FUNC_5(const WebPMuxImage* const VAR_0, uint8_t* VAR_1) {




  FUNC_4(VAR_0);
  if (VAR_0->header_ != ((void*)0)) {
    VAR_1 = FUNC_1(VAR_0->header_, FUNC_3(VAR_0), VAR_1);
  }
  if (VAR_0->alpha_ != ((void*)0)) VAR_1 = FUNC_0(VAR_0->alpha_, VAR_1);
  if (VAR_0->img_ != ((void*)0)) VAR_1 = FUNC_0(VAR_0->img_, VAR_1);
  if (VAR_0->unknown_ != ((void*)0)) VAR_1 = FUNC_2(VAR_0->unknown_, VAR_1);
  return VAR_1;
}
