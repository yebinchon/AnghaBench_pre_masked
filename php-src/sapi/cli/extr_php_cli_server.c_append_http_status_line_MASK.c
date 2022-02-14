
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smart_str ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char,int) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(smart_str *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 if (!VAR_2) {
  VAR_2 = 200;
 }
 FUNC_3(VAR_0, "HTTP", 4, VAR_3);
 FUNC_2(VAR_0, '/', VAR_3);
 FUNC_1(VAR_0, VAR_1 / 100, VAR_3);
 FUNC_2(VAR_0, '.', VAR_3);
 FUNC_1(VAR_0, VAR_1 % 100, VAR_3);
 FUNC_2(VAR_0, ' ', VAR_3);
 FUNC_1(VAR_0, VAR_2, VAR_3);
 FUNC_2(VAR_0, ' ', VAR_3);
 FUNC_4(VAR_0, FUNC_0(VAR_2), VAR_3);
 FUNC_3(VAR_0, "\r\n", 2, VAR_3);
}
