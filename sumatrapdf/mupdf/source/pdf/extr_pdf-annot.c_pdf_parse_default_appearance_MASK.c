
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char**,char*) ;
 float FUNC_2 (char*,char**) ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(fz_context *VAR_0, const char *VAR_1, const char **VAR_2, float *VAR_3, float VAR_4[3])
{
 char VAR_5[100], *VAR_6 = VAR_5, *VAR_7, *VAR_8;
 float VAR_9[3] = { 0, 0, 0 };
 int VAR_10 = 0;

 *VAR_2 = "Helv";
 *VAR_3 = 12;
 VAR_4[0] = VAR_4[1] = VAR_4[2] = 0;

 FUNC_0(VAR_5, VAR_1, sizeof VAR_5);
 while ((VAR_7 = FUNC_1(&VAR_6, " \n\r\t")) != ((void*)0))
 {
  if (VAR_7[0] == 0)
   ;
  else if (VAR_7[0] == '/')
  {
   if (!FUNC_3(VAR_7+1, "Cour")) *VAR_2 = "Cour";
   if (!FUNC_3(VAR_7+1, "Helv")) *VAR_2 = "Helv";
   if (!FUNC_3(VAR_7+1, "TiRo")) *VAR_2 = "TiRo";
   if (!FUNC_3(VAR_7+1, "Symb")) *VAR_2 = "Symb";
   if (!FUNC_3(VAR_7+1, "ZaDb")) *VAR_2 = "ZaDb";
  }
  else if (!FUNC_3(VAR_7, "Tf"))
  {
   *VAR_3 = VAR_9[0];
   VAR_10 = 0;
  }
  else if (!FUNC_3(VAR_7, "g"))
  {
   VAR_4[0] = VAR_4[1] = VAR_4[2] = VAR_9[0];
   VAR_10 = 0;
  }
  else if (!FUNC_3(VAR_7, "rg"))
  {
   VAR_4[0] = VAR_9[0];
   VAR_4[1] = VAR_9[1];
   VAR_4[2] = VAR_9[2];
   VAR_10=0;
  }
  else
  {
   if (VAR_10 < 3)
    VAR_9[VAR_10] = FUNC_2(VAR_7, &VAR_8);
   if (*VAR_8 == 0)
    ++VAR_10;
   else
    VAR_10 = 0;
  }
 }
}
