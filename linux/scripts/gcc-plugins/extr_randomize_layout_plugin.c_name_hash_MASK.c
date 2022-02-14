
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int ,unsigned long) ;
 unsigned int FUNC_1 (char const*) ;

__attribute__((used)) static inline unsigned int
FUNC_2(const unsigned char *VAR_0)
{
 unsigned long VAR_1 = 0;
 unsigned int VAR_2 = FUNC_1((const char *)VAR_0);
 while (VAR_2--)
  VAR_1 = FUNC_0(*VAR_0++, VAR_1);
 return (unsigned int)VAR_1;
}
