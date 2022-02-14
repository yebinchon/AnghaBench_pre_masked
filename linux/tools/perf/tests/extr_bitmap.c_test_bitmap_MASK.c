
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int ,char*,int) ;
 int FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1)
{
 unsigned long *VAR_2 = FUNC_2(VAR_1, VAR_0);
 char VAR_3[100];
 int VAR_4;

 FUNC_0(VAR_2, VAR_0, VAR_3, sizeof(VAR_3));
 FUNC_3("bitmap: %s\n", VAR_3);

 VAR_4 = !FUNC_4(VAR_3, VAR_1);
 FUNC_1(VAR_2);
 return VAR_4;
}
