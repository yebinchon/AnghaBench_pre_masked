
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct pollfd {int fd; int events; } ;
typedef int fd_set ;
typedef int adns_state ;
typedef int ADNS_SOCKET ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,struct timeval const**,struct timeval*) ;
 int FUNC_3 (int ,struct pollfd*) ;
 int FUNC_4 (int ,int ,struct timeval**,struct timeval*,struct timeval const) ;
 int VAR_4 ;
 int FUNC_5 (struct timeval**,struct timeval*) ;

void FUNC_6(adns_state VAR_5, int *VAR_6, fd_set *VAR_7,
         fd_set *VAR_8, fd_set *VAR_9,
         struct timeval **VAR_10, struct timeval *VAR_11,
         const struct timeval *VAR_12) {
  struct timeval VAR_13;
  struct pollfd VAR_14[VAR_0];
  int VAR_15, VAR_16, VAR_17;
  ADNS_SOCKET VAR_18;

  FUNC_1(VAR_5,0,VAR_4);

  if (VAR_10 && (!*VAR_10 || (*VAR_10)->tv_sec || (*VAR_10)->tv_usec)) {

    FUNC_2(VAR_5,&VAR_12,&VAR_13);
    if (!VAR_12) { FUNC_5(VAR_10,VAR_11); goto xit; }
    FUNC_4(VAR_5, 0, VAR_10,VAR_11, *VAR_12);
  }

  VAR_17= FUNC_3(VAR_5,VAR_14);
  VAR_16= *VAR_6;
  for (VAR_15=0; VAR_15<VAR_17; VAR_15++) {
    VAR_18= VAR_14[VAR_15].fd;
    if ((int)VAR_18 >= VAR_16) VAR_16= VAR_18+1;
    if (VAR_14[VAR_15].events & VAR_1) FUNC_0(VAR_18,VAR_7);
    if (VAR_14[VAR_15].events & VAR_2) FUNC_0(VAR_18,VAR_8);
    if (VAR_14[VAR_15].events & VAR_3) FUNC_0(VAR_18,VAR_9);
  }
  *VAR_6= VAR_16;

xit:
  FUNC_1(VAR_5,0,VAR_4);
}
