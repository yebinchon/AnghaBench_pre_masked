
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlca_t {int dummy; } ;
struct connection {struct connection* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sqlca_t* FUNC_0 () ;
 struct connection* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct connection*) ;
 struct connection* FUNC_2 (char const*) ;
 int FUNC_3 (struct connection*,char const*,int) ;
 int FUNC_4 (struct sqlca_t*) ;
 int FUNC_5 (int,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

bool
FUNC_9(int VAR_4, const char *VAR_5)
{
 struct sqlca_t *VAR_6 = FUNC_0();
 struct connection *VAR_7;

 if (VAR_6 == ((void*)0))
 {
  FUNC_5(VAR_4, VAR_0,
       VAR_1, ((void*)0));
  return 0;
 }





 if (FUNC_8(VAR_5, "ALL") == 0)
 {
  FUNC_4(VAR_6);
  for (VAR_7 = VAR_2; VAR_7;)
  {
   struct connection *VAR_8 = VAR_7;

   VAR_7 = VAR_7->next;
   FUNC_1(VAR_8);
  }
 }
 else
 {
  VAR_7 = FUNC_2(VAR_5);

  if (!FUNC_3(VAR_7, VAR_5, VAR_4))
  {



   return 0;
  }
  else
   FUNC_1(VAR_7);
 }





 return 1;
}
