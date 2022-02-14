
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct timeval {scalar_t__ tv_usec; } ;
struct stat {int st_mode; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (int,int*,size_t const) ;

__attribute__((used)) static void
FUNC_6(uint32_t VAR_3[4])
{
  struct timeval VAR_4;
  uint32_t VAR_5;
  int VAR_6;


  int VAR_7 = FUNC_4("/dev/urandom",






                           VAR_2, 0);
  if (VAR_7 > 0) {
    struct stat VAR_8;
    ssize_t VAR_9 = 0;
    const size_t VAR_10 = sizeof(uint64_t)*2;

    if (FUNC_2(VAR_7, &VAR_8) == 0 && FUNC_0(VAR_8.st_mode)) {
      VAR_9 = FUNC_5(VAR_7, VAR_3, VAR_10);
    }
    FUNC_1(VAR_7);
    if ((size_t)VAR_9 == VAR_10) return;
  }


  VAR_5 = 2463534242;
  FUNC_3(&VAR_4, ((void*)0));
  VAR_5 ^= (uint32_t)VAR_4.tv_usec;
  for (VAR_6=0; VAR_6<4; VAR_6++) {
    VAR_5 = VAR_5 ^ (VAR_5 << 13); VAR_5 = VAR_5 ^ (VAR_5 >> 17);
    VAR_5 = VAR_5 ^ (VAR_5 << 5);
    VAR_3[VAR_6] = VAR_5;
  }
  return;
}
