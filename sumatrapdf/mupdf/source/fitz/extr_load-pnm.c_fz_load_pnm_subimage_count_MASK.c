
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int subimages; int member_0; } ;
typedef int fz_context ;


 int FUNC_0 (int *,struct info*,unsigned char const*,size_t,int,int) ;

int
FUNC_1(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 struct info VAR_3 = { 0 };
 (void) FUNC_0(VAR_0, &VAR_3, VAR_1, VAR_2, 1, -1);
 return VAR_3.subimages;
}
