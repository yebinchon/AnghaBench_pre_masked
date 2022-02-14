
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int ) ;
 size_t FUNC_4 (int,char const*,size_t) ;

__attribute__((used)) static void FUNC_5(DIR *VAR_1, const char *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;

 VAR_5 = FUNC_3(FUNC_2(VAR_1), VAR_2, VAR_0);
 if (VAR_5 == -1)
  return;
 VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_4);
 FUNC_0((0 <= VAR_6 && VAR_6 <= VAR_4) || VAR_6 == -1);
 FUNC_1(VAR_5);
}
