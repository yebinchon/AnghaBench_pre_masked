
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct pollfd {int revents; int events; } ;
typedef int adns_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct pollfd*,int,int ,int ,int ,int ,struct timeval,int*) ;
 int FUNC_2 (int ,struct pollfd*) ;
 int FUNC_3 (int ,struct timeval*) ;
 int VAR_2 ;
 int FUNC_4 (struct timeval*,int ) ;

int FUNC_5(adns_state VAR_3) {
  int VAR_4, VAR_5;
  struct timeval VAR_6;
  struct pollfd VAR_7[VAR_0];
  int VAR_8;

  FUNC_0(VAR_3,0,VAR_2);

  VAR_4= FUNC_4(&VAR_6,0);
  if (!VAR_4) FUNC_3(VAR_3,&VAR_6);





  VAR_8= FUNC_2(VAR_3,VAR_7);
  for (VAR_5=0; VAR_5<VAR_8; VAR_5++) VAR_7[VAR_5].revents= VAR_7[VAR_5].events & ~VAR_1;
  FUNC_1(VAR_3,
   VAR_7,VAR_8,
   0,0,0,0,
   VAR_6,&VAR_4);

  FUNC_0(VAR_3,0,VAR_2);
  return 0;
}
