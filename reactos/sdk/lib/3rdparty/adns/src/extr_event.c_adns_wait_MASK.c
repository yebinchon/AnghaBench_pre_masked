
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int fd_set ;
typedef TYPE_1__* adns_state ;
typedef int adns_query ;
typedef int adns_answer ;
struct TYPE_9__ {int iflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int **,void**) ;
 int FUNC_4 (TYPE_1__*,int,int *,int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int*,int *,int *,int *,struct timeval**,struct timeval*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (int) ;

int FUNC_10(adns_state VAR_7,
       adns_query *VAR_8,
       adns_answer **VAR_9,
       void **VAR_10) {
  int VAR_11, VAR_12, VAR_13;
  fd_set VAR_14, VAR_15, VAR_16;
  struct timeval VAR_17, *VAR_18;

  FUNC_1(VAR_7,*VAR_8,VAR_5);
  for (;;) {
    VAR_11= FUNC_3(VAR_7,VAR_8,VAR_9,VAR_10);
    if (VAR_11 != VAR_2) break;
    VAR_12= 0; VAR_18= 0;
    FUNC_0(&VAR_14); FUNC_0(&VAR_15); FUNC_0(&VAR_16);
    FUNC_5(VAR_7,&VAR_12,&VAR_14,&VAR_15,&VAR_16,&VAR_18,&VAR_17,0);
    FUNC_7(VAR_18);
 VAR_1;
    VAR_13= FUNC_8(VAR_12,&VAR_14,&VAR_15,&VAR_16,VAR_18);
 VAR_0;
    if (VAR_13==-1) {
      if (VAR_6 == VAR_3) {
 if (VAR_7->iflags & VAR_4) { VAR_11= VAR_3; break; }
      } else {
 FUNC_2(VAR_7,-1,0,"select failed in wait: %s",FUNC_9(VAR_6));
 FUNC_6(VAR_7);
      }
    } else {
      FUNC_7(VAR_13 >= 0);
      FUNC_4(VAR_7,VAR_12,&VAR_14,&VAR_15,&VAR_16,0);
    }
  }
  FUNC_1(VAR_7,0,VAR_5);
  return VAR_11;
}
