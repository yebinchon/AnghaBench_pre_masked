
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double bit_cost_; } ;
typedef TYPE_1__ VP8LHistogram ;


 int FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const,double,double*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static double FUNC_2(const VP8LHistogram* const VAR_0,
                                 const VP8LHistogram* const VAR_1,
                                 double VAR_2) {
  double VAR_3;
  FUNC_1(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));
  VAR_3 = -VAR_0->bit_cost_;
  FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
  return VAR_3;
}
