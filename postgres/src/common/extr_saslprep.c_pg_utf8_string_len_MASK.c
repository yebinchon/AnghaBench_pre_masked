
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int) ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
 const unsigned char *VAR_1 = (const unsigned char *) VAR_0;
 int VAR_2;
 int VAR_3 = 0;

 while (*VAR_1)
 {
  VAR_2 = FUNC_1(VAR_1);

  if (!FUNC_0(VAR_1, VAR_2))
   return -1;

  VAR_1 += VAR_2;
  VAR_3++;
 }

 return VAR_3;
}
