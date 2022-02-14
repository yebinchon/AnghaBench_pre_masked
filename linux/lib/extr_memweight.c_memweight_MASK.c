
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char const) ;

size_t FUNC_3(const void *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 size_t VAR_5;
 const unsigned char *VAR_6 = VAR_2;

 for (; VAR_3 > 0 && ((unsigned long)VAR_6) % sizeof(long);
   VAR_3--, VAR_6++)
  VAR_4 += FUNC_2(*VAR_6);

 VAR_5 = VAR_3 / sizeof(long);
 if (VAR_5) {
  FUNC_0(VAR_5 >= VAR_1 / VAR_0);
  VAR_4 += FUNC_1((unsigned long *)VAR_6,
    VAR_5 * VAR_0);
  VAR_3 -= VAR_5 * sizeof(long);
  VAR_6 += VAR_5 * sizeof(long);
 }





 for (; VAR_3 > 0; VAR_3--, VAR_6++)
  VAR_4 += FUNC_2(*VAR_6);

 return VAR_4;
}
