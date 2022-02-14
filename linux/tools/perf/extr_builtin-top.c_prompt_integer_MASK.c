
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,size_t*,int ) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,int *,int) ;

__attribute__((used)) static void FUNC_7(int *VAR_2, const char *VAR_3)
{
 char *VAR_4 = FUNC_4(0), *VAR_5;
 size_t VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_1, "\n%s: ", VAR_3);
 if (FUNC_2(&VAR_4, &VAR_6, VAR_0) < 0)
  return;

 VAR_5 = FUNC_5(VAR_4, '\n');
 if (VAR_5)
  *VAR_5 = 0;

 VAR_5 = VAR_4;
 while(*VAR_5) {
  if (!FUNC_3(*VAR_5))
   goto out_free;
  VAR_5++;
 }
 VAR_7 = FUNC_6(VAR_4, ((void*)0), 10);
 *VAR_2 = VAR_7;
out_free:
 FUNC_1(VAR_4);
}
