
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,...) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_0, PQExpBuffer VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 const char *VAR_4 = VAR_0;

 VAR_2 = FUNC_3(FUNC_5(VAR_0) + 1);
 if (VAR_2 == ((void*)0))
 {
  FUNC_4(VAR_1, FUNC_2("out of memory\n"));
  return ((void*)0);
 }
 VAR_3 = VAR_2;

 for (;;)
 {
  if (*VAR_4 != '%')
  {

   if (!(*(VAR_3++) = *(VAR_4++)))
    break;
  }
  else
  {
   int VAR_5;
   int VAR_6;
   int VAR_7;

   ++VAR_4;





   if (!(FUNC_1(*VAR_4++, &VAR_5) && FUNC_1(*VAR_4++, &VAR_6)))
   {
    FUNC_4(VAR_1,
          FUNC_2("invalid percent-encoded token: \"%s\"\n"),
          VAR_0);
    FUNC_0(VAR_2);
    return ((void*)0);
   }

   VAR_7 = (VAR_5 << 4) | VAR_6;
   if (VAR_7 == 0)
   {
    FUNC_4(VAR_1,
          FUNC_2("forbidden value %%00 in percent-encoded value: \"%s\"\n"),
          VAR_0);
    FUNC_0(VAR_2);
    return ((void*)0);
   }
   *(VAR_3++) = VAR_7;
  }
 }

 return VAR_2;
}
