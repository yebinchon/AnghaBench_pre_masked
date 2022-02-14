
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int MemoryContext ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

char *
FUNC_3(MemoryContext VAR_0, const char *VAR_1)
{
 char *VAR_2;
 Size VAR_3 = FUNC_2(VAR_1) + 1;

 VAR_2 = (char *) FUNC_0(VAR_0, VAR_3);

 FUNC_1(VAR_2, VAR_1, VAR_3);

 return VAR_2;
}
