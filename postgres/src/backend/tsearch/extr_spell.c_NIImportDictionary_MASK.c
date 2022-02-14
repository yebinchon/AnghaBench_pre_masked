
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsearch_readline_state ;
typedef int IspellDict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *) ;

void
FUNC_13(IspellDict *VAR_2, const char *VAR_3)
{
 tsearch_readline_state VAR_4;
 char *VAR_5;

 if (!FUNC_11(&VAR_4, VAR_3))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("could not open dictionary file \"%s\": %m",
      VAR_3)));

 while ((VAR_5 = FUNC_10(&VAR_4)) != ((void*)0))
 {
  char *VAR_6,
       *VAR_7;


  const char *VAR_8;


  VAR_8 = ((void*)0);
  if ((VAR_6 = FUNC_4(VAR_5, '/')))
  {
   *VAR_6++ = '\0';
   VAR_8 = VAR_6;
   while (*VAR_6)
   {

    if (FUNC_7(VAR_6) == 1 && FUNC_8(VAR_6) && !FUNC_9(VAR_6))
     VAR_6++;
    else
    {
     *VAR_6 = '\0';
     break;
    }
   }
  }
  else
   VAR_8 = "";


  VAR_6 = VAR_5;
  while (*VAR_6)
  {
   if (FUNC_9(VAR_6))
   {
    *VAR_6 = '\0';
    break;
   }
   VAR_6 += FUNC_7(VAR_6);
  }
  VAR_7 = FUNC_5(VAR_2, VAR_5);

  FUNC_0(VAR_2, VAR_7, VAR_8);
  FUNC_6(VAR_7);

  FUNC_6(VAR_5);
 }
 FUNC_12(&VAR_4);
}
