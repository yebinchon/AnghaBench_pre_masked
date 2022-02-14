
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct timespec64*) ;

__be32 FUNC_3(void)
{
 u32 VAR_3;
 u32 VAR_4;
 struct timespec64 VAR_5;

 FUNC_2(&VAR_5);


 (void)FUNC_0(VAR_5.tv_sec, VAR_2, &VAR_3);

 VAR_4 = VAR_3 * VAR_0;

 VAR_4 += (u32)VAR_5.tv_nsec / VAR_1;


 return FUNC_1(VAR_4);
}
