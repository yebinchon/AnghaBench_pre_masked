
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, size_t VAR_1)
{
 const char *VAR_2 = "/proc/self/exe";
 ssize_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1 - 1);
 FUNC_0(VAR_3 > 0);
 VAR_0[VAR_3] = 0;
}
