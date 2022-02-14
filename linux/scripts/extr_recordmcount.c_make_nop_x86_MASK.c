
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t const,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, size_t const VAR_3)
{
 uint32_t *VAR_4;
 unsigned char *VAR_5;


 VAR_4 = VAR_2 + VAR_3;
 if (*VAR_4 != 0)
  return -1;

 VAR_5 = VAR_2 + VAR_3 - 1;
 if (*VAR_5 != 0xe8)
  return -1;


 if (FUNC_0(VAR_3 - 1, VAR_0) < 0)
  return -1;
 if (FUNC_1(VAR_1, 5) < 0)
  return -1;
 return 0;
}
