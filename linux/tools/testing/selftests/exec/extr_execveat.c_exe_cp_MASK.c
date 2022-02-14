
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,int,int *,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_4, const char *VAR_5)
{
 int VAR_6 = FUNC_3(VAR_4, VAR_1);
 int VAR_7 = FUNC_2(VAR_5, VAR_2|VAR_0|VAR_3, 0755);
 struct stat VAR_8;

 FUNC_1(VAR_6, &VAR_8);
 FUNC_4(VAR_7, VAR_6, ((void*)0), VAR_8.st_size);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
}
