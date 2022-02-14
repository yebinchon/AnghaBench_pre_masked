
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned char const) ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_2)
{
 const unsigned char *VAR_3;
 unsigned int VAR_4;

 VAR_4 = VAR_1;
 VAR_3 = (const unsigned char *) VAR_2;
 while (*VAR_3) {
  VAR_4 = FUNC_0 (VAR_4, *VAR_3);
  VAR_3++;
 }
 VAR_4 &= (VAR_0 - 1);
 return VAR_4;
}
