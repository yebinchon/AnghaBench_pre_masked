
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int dummy; } ;
typedef int DIR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct dirent* FUNC_1 (int *) ;

__attribute__((used)) static struct dirent *FUNC_2(DIR *VAR_1)
{
 struct dirent *VAR_2;

 VAR_0 = 0;
 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2 || VAR_0 == 0);
 return VAR_2;
}
