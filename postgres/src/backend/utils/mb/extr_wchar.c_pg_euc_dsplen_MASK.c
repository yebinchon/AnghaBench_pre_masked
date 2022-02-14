
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static inline int
FUNC_2(const unsigned char *VAR_2)
{
 int VAR_3;

 if (*VAR_2 == VAR_0)
  VAR_3 = 2;
 else if (*VAR_2 == VAR_1)
  VAR_3 = 2;
 else if (FUNC_0(*VAR_2))
  VAR_3 = 2;
 else
  VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
