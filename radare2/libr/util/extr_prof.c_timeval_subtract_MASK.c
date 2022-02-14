
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ tv ;



__attribute__((used)) static int FUNC_0(tv *VAR_0, tv *VAR_1, tv *VAR_2) {

 if (VAR_1->tv_usec < VAR_2->tv_usec) {
  int VAR_3 = (VAR_2->tv_usec - VAR_1->tv_usec) / 1000000 + 1;
  VAR_2->tv_usec -= 1000000 * VAR_3;
  VAR_2->tv_sec += VAR_3;
 }
 if (VAR_1->tv_usec - VAR_2->tv_usec > 1000000) {
  int VAR_4 = (VAR_1->tv_usec - VAR_2->tv_usec) / 1000000;
  VAR_2->tv_usec += 1000000 * VAR_4;
  VAR_2->tv_sec -= VAR_4;
 }


 VAR_0->tv_sec = VAR_1->tv_sec - VAR_2->tv_sec;
 VAR_0->tv_usec = VAR_1->tv_usec - VAR_2->tv_usec;


 return VAR_1->tv_sec < VAR_2->tv_sec;
}
