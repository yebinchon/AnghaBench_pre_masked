
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int dummy; } ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static unsigned char *FUNC_1(unsigned char *VAR_0, size_t VAR_1,
          unsigned char *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 if (VAR_1 > VAR_3)
  VAR_4 = VAR_1 - VAR_3;
 else
  VAR_4 = 0;

 for (; VAR_4 < VAR_1; VAR_4 += sizeof(struct branch)) {
  VAR_5 = VAR_1 - VAR_4;
  if (!FUNC_0(VAR_0 + VAR_4, VAR_2, VAR_5))
   return VAR_2 + VAR_5;
 }

 return VAR_2;
}
