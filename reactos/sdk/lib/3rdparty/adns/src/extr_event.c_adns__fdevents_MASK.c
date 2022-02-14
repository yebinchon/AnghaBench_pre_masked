
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct pollfd {int fd; int revents; } ;
typedef int fd_set ;
typedef int adns_state ;
typedef int ADNS_SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int,int ,int,int const*,int ,struct timeval,int*) ;

void FUNC_1(adns_state VAR_6,
      const struct pollfd *VAR_7, int VAR_8,
      int VAR_9, const fd_set *VAR_10,
      const fd_set *VAR_11, const fd_set *VAR_12,
      struct timeval VAR_13, int *VAR_14) {
  int VAR_15, VAR_16;
  ADNS_SOCKET VAR_17;

  for (VAR_15=0; VAR_15<VAR_8; VAR_15++) {
    VAR_17= VAR_7[VAR_15].fd;
    if ((int)VAR_17 >= VAR_9) VAR_9= VAR_17+1;
    VAR_16= VAR_7[VAR_15].revents;
    FUNC_0(VAR_6,VAR_17, VAR_16,VAR_0, VAR_9,VAR_10, VAR_4,VAR_13,VAR_14);
    FUNC_0(VAR_6,VAR_17, VAR_16,VAR_1, VAR_9,VAR_11, VAR_5,VAR_13,VAR_14);
    FUNC_0(VAR_6,VAR_17, VAR_16,VAR_2, VAR_9,VAR_12, VAR_3,VAR_13,VAR_14);
  }
}
