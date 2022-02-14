
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static const unsigned char *
FUNC_1(fz_context *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3, int *VAR_4)
{
 if (VAR_3 - VAR_2 < 1)
  FUNC_0(VAR_1, VAR_0, "cannot parse number in pnm image");
 if (*VAR_2 < '0' || *VAR_2 > '9')
  FUNC_0(VAR_1, VAR_0, "expected numeric field in pnm image");

 while (VAR_2 < VAR_3 && *VAR_2 >= '0' && *VAR_2 <= '9')
 {
  if (VAR_4)
   *VAR_4 = *VAR_4 * 10 + *VAR_2 - '0';
  VAR_2++;
 }

 return VAR_2;
}
