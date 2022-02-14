
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 size_t FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,size_t,char*,int) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(char *VAR_0, size_t VAR_1)
{
 char *VAR_2;
 ssize_t VAR_3;

 FUNC_4(VAR_0, VAR_1, "/proc/%d/exe", (int) FUNC_2());
 VAR_0[VAR_1 - 1] = 0;

 VAR_2 = FUNC_5(VAR_0);
 FUNC_0(VAR_2);

 VAR_3 = FUNC_3(VAR_2, VAR_0, VAR_1);
 VAR_0[VAR_3] = 0;

 FUNC_1(VAR_2);
}
