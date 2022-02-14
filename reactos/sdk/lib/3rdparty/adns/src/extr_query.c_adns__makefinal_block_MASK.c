
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adns_query ;


 void* FUNC_0 (int ,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;

void FUNC_2(adns_query VAR_0, void **VAR_1, size_t VAR_2) {
  void *VAR_3, *VAR_4;

  VAR_3= *VAR_1;
  if (!VAR_3) return;
  VAR_4= FUNC_0(VAR_0,VAR_2);
  FUNC_1(VAR_4,VAR_3, (size_t) VAR_2);
  *VAR_1= VAR_4;
}
