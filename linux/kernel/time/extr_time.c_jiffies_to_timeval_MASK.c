
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int*) ;

void FUNC_1(const unsigned long VAR_3, struct timeval *VAR_4)
{




 u32 VAR_5;

 VAR_4->tv_sec = FUNC_0((u64)VAR_3 * VAR_2,
        VAR_0, &VAR_5);
 VAR_4->tv_usec = VAR_5 / VAR_1;
}
