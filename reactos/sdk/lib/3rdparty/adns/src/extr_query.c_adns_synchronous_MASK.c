
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adns_state ;
typedef int adns_rrtype ;
typedef int adns_queryflags ;
typedef int adns_query ;
typedef int adns_answer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int **,int ) ;

int FUNC_3(adns_state VAR_0,
       const char *VAR_1,
       adns_rrtype VAR_2,
       adns_queryflags VAR_3,
       adns_answer **VAR_4) {
  adns_query VAR_5;
  int VAR_6;

  VAR_6= FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3,0,&VAR_5);
  if (VAR_6) return VAR_6;

  VAR_6= FUNC_2(VAR_0,&VAR_5,VAR_4,0);
  if (VAR_6) FUNC_0(VAR_5);

  return VAR_6;
}
