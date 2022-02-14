
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct timespec64*) ;

u64 FUNC_2(unsigned long VAR_3)
{
 struct timespec64 VAR_4;
 u64 VAR_5, VAR_6;

 FUNC_1(&VAR_4);
 VAR_6 = FUNC_0(VAR_2 - VAR_3);
 VAR_5 = (u64)(u32)VAR_4.tv_sec * VAR_0 +
   VAR_4.tv_nsec / VAR_1;

 return VAR_5 - VAR_6;
}
