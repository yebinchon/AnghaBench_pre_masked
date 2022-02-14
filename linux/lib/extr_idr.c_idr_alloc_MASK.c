
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idr {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct idr*,void*,int*,int,int ) ;

int FUNC_2(struct idr *VAR_2, void *VAR_3, int VAR_4, int VAR_5, gfp_t VAR_6)
{
 u32 VAR_7 = VAR_4;
 int VAR_8;

 if (FUNC_0(VAR_4 < 0))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_7, VAR_5 > 0 ? VAR_5 - 1 : VAR_1, VAR_6);
 if (VAR_8)
  return VAR_8;

 return VAR_7;
}
