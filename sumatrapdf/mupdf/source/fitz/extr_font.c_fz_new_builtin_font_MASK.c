
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int *,char const*,int,int,int*) ;
 int * FUNC_1 (int *,int *,unsigned char const*,int,int ,int ) ;
 int FUNC_2 (int *,int ,char*,char const*) ;

fz_font *
FUNC_3(fz_context *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 const unsigned char *VAR_5;
 int VAR_6;
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6);
 if (!VAR_5)
  FUNC_2(VAR_1, VAR_0, "cannot find builtin font with name '%s'", VAR_2);
 return FUNC_1(VAR_1, ((void*)0), VAR_5, VAR_6, 0, 0);
}
