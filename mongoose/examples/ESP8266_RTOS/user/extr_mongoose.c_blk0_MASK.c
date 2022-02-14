
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union char64long16 {int* l; } ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t FUNC_1(union char64long16 *VAR_0, int VAR_1) {


  VAR_0->l[VAR_1] =
      (FUNC_0(VAR_0->l[VAR_1], 24) & 0xFF00FF00) | (FUNC_0(VAR_0->l[VAR_1], 8) & 0x00FF00FF);

  return VAR_0->l[VAR_1];
}
