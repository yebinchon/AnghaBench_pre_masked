
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*,int ) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(char* VAR_3, int64_t VAR_4)
{
 size_t VAR_5, VAR_6;

 if (VAR_3 == ((void*)0))
  return;

 VAR_6 = FUNC_3(VAR_3);
 for (VAR_5=0; VAR_5<VAR_6; VAR_5++)
  if (VAR_3[VAR_5] == '/') VAR_3[VAR_5] = '\\';
 FUNC_2(&VAR_3[VAR_6], 24, " (%s)", FUNC_1(VAR_4, VAR_2, VAR_0));
 FUNC_4("Extracting: %s\n", VAR_3);
 FUNC_2(&VAR_3[VAR_6], 24, " (%s)", FUNC_1(VAR_4, VAR_0, VAR_0));
 FUNC_0(0, VAR_1, VAR_3);

 for (VAR_5=0; VAR_5<VAR_6; VAR_5++)
  if (VAR_3[VAR_5] == '\\') VAR_3[VAR_5] = '/';

 VAR_3[VAR_6] = 0;
}
