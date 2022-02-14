
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_timeval {int tv_usec; int tv_sec; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline ktime_t FUNC_1(struct bcm_timeval VAR_1)
{
 return FUNC_0(VAR_1.tv_sec, VAR_1.tv_usec * VAR_0);
}
