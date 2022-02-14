
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static int64_t
FUNC_2() {

 struct timespec VAR_1;
 FUNC_0(VAR_0, &VAR_1);
 return (int64_t)1000000000 * VAR_1.tv_sec + VAR_1.tv_nsec;





}
