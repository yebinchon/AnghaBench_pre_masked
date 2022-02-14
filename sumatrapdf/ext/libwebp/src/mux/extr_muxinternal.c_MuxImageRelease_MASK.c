
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next_; int unknown_; int img_; int alpha_; int header_; } ;
typedef TYPE_1__ WebPMuxImage ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__* const) ;

WebPMuxImage* FUNC_2(WebPMuxImage* const VAR_0) {
  WebPMuxImage* VAR_1;
  if (VAR_0 == ((void*)0)) return ((void*)0);


  FUNC_0(&VAR_0->header_);
  FUNC_0(&VAR_0->alpha_);
  FUNC_0(&VAR_0->img_);
  FUNC_0(&VAR_0->unknown_);

  VAR_1 = VAR_0->next_;
  FUNC_1(VAR_0);
  return VAR_1;
}
