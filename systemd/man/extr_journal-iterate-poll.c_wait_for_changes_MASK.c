
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct pollfd {int events; int fd; } ;
typedef int sd_journal ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *) ;

int FUNC_6(sd_journal *VAR_1) {
  uint64_t VAR_2;
  int VAR_3;
  struct pollfd VAR_4;

  FUNC_4(VAR_1, &VAR_2);
  if (VAR_2 == (uint64_t) -1)
    VAR_3 = -1;
  else {
    struct timespec VAR_5;
    uint64_t VAR_6;
    FUNC_0(VAR_0, &VAR_5);
    VAR_6 = (uint64_t) VAR_5.tv_sec * 1000000 + VAR_5.tv_nsec / 1000;
    VAR_3 = VAR_2 > VAR_6 ? (int) ((VAR_2 - VAR_6 + 999) / 1000) : 0;
  }

  VAR_4.fd = FUNC_3(VAR_1);
  VAR_4.events = FUNC_2(VAR_1);
  FUNC_1(&VAR_4, 1, VAR_3);
  return FUNC_5(VAR_1);
}
