
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_info {scalar_t__ dst_host; scalar_t__ dst_nopolicy; scalar_t__ dst_nocount; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;

__attribute__((used)) static unsigned short FUNC_0(struct fib6_info *VAR_3)
{
 unsigned short VAR_4 = 0;

 if (VAR_3->dst_nocount)
  VAR_4 |= VAR_1;
 if (VAR_3->dst_nopolicy)
  VAR_4 |= VAR_2;
 if (VAR_3->dst_host)
  VAR_4 |= VAR_0;

 return VAR_4;
}
