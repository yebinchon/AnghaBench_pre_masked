
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* keyword; char const* val; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef int PQExpBuffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (char const*,int ,int) ;
 int FUNC_6 (int ,int ,...) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 void* FUNC_9 (char const*) ;

__attribute__((used)) static PQconninfoOption *
FUNC_10(const char *const *VAR_0, const char *const *VAR_1,
      PQExpBuffer VAR_2, bool VAR_3,
      int VAR_4)
{
 PQconninfoOption *VAR_5;
 PQconninfoOption *VAR_6 = ((void*)0);
 PQconninfoOption *VAR_7;
 int VAR_8 = 0;





 while (VAR_4 && VAR_0[VAR_8])
 {
  const char *VAR_9 = VAR_0[VAR_8];
  const char *VAR_10 = VAR_1[VAR_8];


  if (FUNC_8(VAR_9, "dbname") == 0 && VAR_10)
  {





   if (FUNC_7(VAR_10))
   {
    VAR_6 = FUNC_5(VAR_10, VAR_2, 0);
    if (VAR_6 == ((void*)0))
     return ((void*)0);
   }
   break;
  }
  ++VAR_8;
 }


 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0))
 {
  FUNC_0(VAR_6);
  return ((void*)0);
 }


 VAR_8 = 0;
 while (VAR_0[VAR_8])
 {
  const char *VAR_11 = VAR_0[VAR_8];
  const char *VAR_12 = VAR_1[VAR_8];

  if (VAR_12 != ((void*)0) && VAR_12[0] != '\0')
  {

   for (VAR_7 = VAR_5; VAR_7->keyword != ((void*)0); VAR_7++)
   {
    if (FUNC_8(VAR_7->keyword, VAR_11) == 0)
     break;
   }


   if (VAR_7->keyword == ((void*)0))
   {
    FUNC_6(VAR_2,
          FUNC_4("invalid connection option \"%s\"\n"),
          VAR_11);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    return ((void*)0);
   }






   if (FUNC_8(VAR_11, "dbname") == 0 && VAR_6)
   {
    PQconninfoOption *VAR_13;

    for (VAR_13 = VAR_6; VAR_13->keyword != ((void*)0); VAR_13++)
    {
     if (VAR_13->val != ((void*)0))
     {
      int VAR_14;

      for (VAR_14 = 0; VAR_5[VAR_14].keyword; VAR_14++)
      {
       if (FUNC_8(VAR_5[VAR_14].keyword, VAR_13->keyword) == 0)
       {
        if (VAR_5[VAR_14].val)
         FUNC_3(VAR_5[VAR_14].val);
        VAR_5[VAR_14].val = FUNC_9(VAR_13->val);
        if (!VAR_5[VAR_14].val)
        {
         FUNC_6(VAR_2,
               FUNC_4("out of memory\n"));
         FUNC_0(VAR_5);
         FUNC_0(VAR_6);
         return ((void*)0);
        }
        break;
       }
      }
     }
    }





    FUNC_0(VAR_6);
    VAR_6 = ((void*)0);
   }
   else
   {



    if (VAR_7->val)
     FUNC_3(VAR_7->val);
    VAR_7->val = FUNC_9(VAR_12);
    if (!VAR_7->val)
    {
     FUNC_6(VAR_2,
           FUNC_4("out of memory\n"));
     FUNC_0(VAR_5);
     FUNC_0(VAR_6);
     return ((void*)0);
    }
   }
  }
  ++VAR_8;
 }
 FUNC_0(VAR_6);




 if (VAR_3)
 {
  if (!FUNC_1(VAR_5, VAR_2))
  {
   FUNC_0(VAR_5);
   return ((void*)0);
  }
 }

 return VAR_5;
}
