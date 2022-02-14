
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timeu64_t ;
struct timespec64 {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timespec64*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

struct timespec64 FUNC_2(const struct timespec64 VAR_1,
    const struct timespec64 VAR_2)
{
 struct timespec64 VAR_3;

 FUNC_0(&VAR_3, (timeu64_t) VAR_1.tv_sec + VAR_2.tv_sec,
   VAR_1.tv_nsec + VAR_2.tv_nsec);

 if (FUNC_1(VAR_3.tv_sec < VAR_1.tv_sec || VAR_3.tv_sec < VAR_2.tv_sec)) {
  VAR_3.tv_sec = VAR_0;
  VAR_3.tv_nsec = 0;
 }

 return VAR_3;
}
