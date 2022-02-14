
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int * children; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonbContainer ;
typedef int JEntry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*,int,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char const*,int,char const*,int) ;
 int * FUNC_7 (int) ;

JsonbValue *
FUNC_8(JsonbContainer *VAR_0,
        const char *VAR_1, int VAR_2, JsonbValue *VAR_3)
{
 JEntry *VAR_4 = VAR_0->children;
 int VAR_5 = FUNC_2(VAR_0);
 char *VAR_6;
 uint32 VAR_7,
    VAR_8;

 FUNC_0(FUNC_1(VAR_0));


 if (VAR_5 <= 0)
  return ((void*)0);





 VAR_6 = (char *) (VAR_4 + VAR_5 * 2);
 VAR_7 = 0;
 VAR_8 = VAR_5;
 while (VAR_7 < VAR_8)
 {
  uint32 VAR_9;
  int VAR_10;
  const char *VAR_11;
  int VAR_12;

  VAR_9 = VAR_7 + (VAR_8 - VAR_7) / 2;

  VAR_11 = VAR_6 + FUNC_5(VAR_0, VAR_9);
  VAR_12 = FUNC_4(VAR_0, VAR_9);

  VAR_10 = FUNC_6(VAR_11, VAR_12,
             VAR_1, VAR_2);

  if (VAR_10 == 0)
  {

   int VAR_13 = VAR_9 + VAR_5;

   if (!VAR_3)
    VAR_3 = FUNC_7(sizeof(JsonbValue));

   FUNC_3(VAR_0, VAR_13, VAR_6,
         FUNC_5(VAR_0, VAR_13),
         VAR_3);

   return VAR_3;
  }
  else
  {
   if (VAR_10 < 0)
    VAR_7 = VAR_9 + 1;
   else
    VAR_8 = VAR_9;
  }
 }


 return ((void*)0);
}
