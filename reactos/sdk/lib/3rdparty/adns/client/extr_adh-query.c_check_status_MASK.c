
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int statuspoints ;
typedef scalar_t__ const adns_status ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(adns_status VAR_1) {
  static const adns_status VAR_2[]= {
    128,
    133, 130, 129,
    132, 131
  };

  const adns_status *VAR_3;
  int VAR_4;

  for (VAR_4=0, VAR_3=VAR_2;
       VAR_3 < VAR_2 + (sizeof(VAR_2)/sizeof(VAR_2[0]));
       VAR_3++)
    if (VAR_1 > *VAR_3) VAR_4++;
  if (VAR_0 < VAR_4) VAR_0= VAR_4;
}
