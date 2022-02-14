
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,struct tm*) ;
 scalar_t__ FUNC_1 (char*,size_t,char*,...) ;
 size_t FUNC_2 (char*,size_t,char*,int ) ;
 scalar_t__ VAR_1 ;

size_t FUNC_3(struct timeval *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct tm VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4, "[%d-%b-%Y %H:%M:%S",
   FUNC_0((const time_t *) &VAR_2->tv_sec, &VAR_5));
 if (VAR_1 == VAR_0) {
  VAR_6 += FUNC_1(VAR_3 + VAR_6, VAR_4 - VAR_6, ".%06d", (int) VAR_2->tv_usec);
 }
 VAR_6 += FUNC_1(VAR_3 + VAR_6, VAR_4 - VAR_6, "] ");
 return VAR_6;
}
