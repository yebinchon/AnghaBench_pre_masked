
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int adns_state ;
typedef int adns_query ;
typedef int adns_answer ;


 int FUNC_0 (int ,struct timeval) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *,int **,void**) ;
 int VAR_0 ;
 int FUNC_3 (struct timeval*,int ) ;

int FUNC_4(adns_state VAR_1,
        adns_query *VAR_2,
        adns_answer **VAR_3,
        void **VAR_4) {
  struct timeval VAR_5;
  int VAR_6;

  FUNC_1(VAR_1,*VAR_2,VAR_0);
  VAR_6= FUNC_3(&VAR_5,0);
  if (!VAR_6) FUNC_0(VAR_1,VAR_5);

  VAR_6= FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4);
  FUNC_1(VAR_1,0,VAR_0);
  return VAR_6;
}
