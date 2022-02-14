
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;
typedef int fz_context ;
typedef int absname ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,char*,int,char const*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_1, fz_document *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];

 if (!VAR_2)
  return;
 if (!FUNC_0(VAR_1, VAR_2))
  return;
 if (!FUNC_2(VAR_1, VAR_4, sizeof(VAR_4), VAR_3))
  return;

 FUNC_1(VAR_1, VAR_2, VAR_4);
}
