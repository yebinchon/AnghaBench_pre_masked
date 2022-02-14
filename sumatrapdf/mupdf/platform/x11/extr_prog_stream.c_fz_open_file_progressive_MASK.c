
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char*) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int *,int *,int,void (*) (void*,int),void*) ;
 int FUNC_3 (int *,int ,char*,char const*) ;

fz_stream *
FUNC_4(fz_context *VAR_1, const char *VAR_2, int VAR_3, void (*VAR_4)(void*,int), void *VAR_5)
{
 FILE *VAR_6;



 VAR_6 = FUNC_0(VAR_2, "rb");

 if (VAR_6 == ((void*)0))
  FUNC_3(VAR_1, VAR_0, "cannot open %s", VAR_2);
 return FUNC_2(VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
}
