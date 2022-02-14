
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,char*) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,char const*,int ) ;
 int FUNC_4 (int ) ;

fz_stream *
FUNC_5(fz_context *VAR_2, const char *VAR_3)
{
 FILE *VAR_4;



 VAR_4 = FUNC_0(VAR_3, "rb");

 if (VAR_4 == ((void*)0))
  FUNC_3(VAR_2, VAR_0, "cannot open %s: %s", VAR_3, FUNC_4(VAR_1));
 return FUNC_2(VAR_2, VAR_4);
}
