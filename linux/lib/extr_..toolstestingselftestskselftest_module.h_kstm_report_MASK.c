
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
 if (VAR_2 == 0)
  FUNC_0("all %u tests passed\n", VAR_1);
 else
  FUNC_1("failed %u out of %u tests\n", VAR_2, VAR_1);

 return VAR_2 ? -VAR_0 : 0;
}
