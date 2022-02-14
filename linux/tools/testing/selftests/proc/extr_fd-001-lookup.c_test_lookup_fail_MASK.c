
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2)
{
 struct stat VAR_3;
 ssize_t VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3);
 FUNC_0(VAR_4 == -1 && VAR_1 == VAR_0);
}
