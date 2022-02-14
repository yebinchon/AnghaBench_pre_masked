
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_22__ {int * children; } ;
struct TYPE_19__ {int len; int val; } ;
struct TYPE_20__ {TYPE_1__ string; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonbContainer ;
typedef int JEntry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int,char*,int,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*) ;

JsonbValue *
FUNC_10(JsonbContainer *VAR_3, uint32 VAR_4,
       JsonbValue *VAR_5)
{
 JEntry *VAR_6 = VAR_3->children;
 int VAR_7 = FUNC_4(VAR_3);

 FUNC_0((VAR_4 & ~(VAR_0 | VAR_1)) == 0);


 if (VAR_7 <= 0)
  return ((void*)0);

 if ((VAR_4 & VAR_0) && FUNC_2(VAR_3))
 {
  JsonbValue *VAR_8 = FUNC_8(sizeof(JsonbValue));
  char *VAR_9 = (char *) (VAR_6 + VAR_7);
  uint32 VAR_10 = 0;
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  {
   FUNC_6(VAR_3, VAR_11, VAR_9, VAR_10, VAR_8);

   if (VAR_5->type == VAR_8->type)
   {
    if (FUNC_5(VAR_5, VAR_8))
     return VAR_8;
   }

   FUNC_1(VAR_10, VAR_6[VAR_11]);
  }

  FUNC_9(VAR_8);
 }
 else if ((VAR_4 & VAR_1) && FUNC_3(VAR_3))
 {

  FUNC_0(VAR_5->type == VAR_2);

  return FUNC_7(VAR_3, VAR_5->val.string.val,
           VAR_5->val.string.len, ((void*)0));
 }


 return ((void*)0);
}
