
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; int d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 struct dirent* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 DIR *VAR_2;
 struct dirent *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(*VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_0(FUNC_2(VAR_3->d_name, "."));
 FUNC_0(VAR_3->d_type == VAR_0);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_0(FUNC_2(VAR_3->d_name, ".."));
 FUNC_0(VAR_3->d_type == VAR_0);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_0(!VAR_3);
}
