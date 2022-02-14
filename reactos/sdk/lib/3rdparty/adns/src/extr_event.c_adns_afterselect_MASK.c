
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct pollfd {int revents; } ;
typedef int fd_set ;
typedef int adns_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct pollfd*,int,int,int const*,int const*,int const*,struct timeval const,int ) ;
 int FUNC_2 (int ,struct timeval const**,struct timeval*) ;
 int FUNC_3 (int ,struct pollfd*) ;
 int FUNC_4 (int ,struct timeval const*) ;
 int VAR_4 ;

void FUNC_5(adns_state VAR_5, int VAR_6, const fd_set *VAR_7,
        const fd_set *VAR_8, const fd_set *VAR_9,
        const struct timeval *VAR_10) {
  struct timeval VAR_11;
  struct pollfd VAR_12[VAR_0];
  int VAR_13, VAR_14;

  FUNC_0(VAR_5,0,VAR_4);
  FUNC_2(VAR_5,&VAR_10,&VAR_11);
  if (!VAR_10) goto xit;
  FUNC_4(VAR_5,VAR_10);

  VAR_13= FUNC_3(VAR_5,VAR_12);
  for (VAR_14=0; VAR_14<VAR_13; VAR_14++) VAR_12[VAR_14].revents= VAR_1|VAR_2|VAR_3;
  FUNC_1(VAR_5,
   VAR_12,VAR_13,
   VAR_6,VAR_7,VAR_8,VAR_9,
   *VAR_10, 0);
xit:
  FUNC_0(VAR_5,0,VAR_4);
}
