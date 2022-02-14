
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int root; } ;
struct TYPE_7__ {char* val; int len; } ;
struct TYPE_8__ {int boolean; int numeric; TYPE_1__ string; } ;
struct TYPE_9__ {int type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef TYPE_4__ Jsonb ;
typedef int (* JsonIterateStringValuesAction ) (void*,char*,int) ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_3__*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void
FUNC_7(Jsonb *VAR_9, uint32 VAR_10, void *VAR_11,
      JsonIterateStringValuesAction VAR_12)
{
 JsonbIterator *VAR_13;
 JsonbValue VAR_14;
 JsonbIteratorToken VAR_15;

 VAR_13 = FUNC_2(&VAR_9->root);





 while ((VAR_15 = FUNC_3(&VAR_13, &VAR_14, 0)) != VAR_0)
 {
  if (VAR_15 == VAR_2)
  {
   if (VAR_10 & VAR_5)
    VAR_12(VAR_11, VAR_14.val.string.val, VAR_14.val.string.len);

   continue;
  }
  else if (!(VAR_15 == VAR_3 || VAR_15 == VAR_1))
  {

   continue;
  }


  switch (VAR_14.type)
  {
   case 128:
    if (VAR_10 & VAR_7)
     VAR_12(VAR_11, VAR_14.val.string.val, VAR_14.val.string.len);
    break;
   case 129:
    if (VAR_10 & VAR_6)
    {
     char *VAR_16;

     VAR_16 = FUNC_0(FUNC_1(VAR_8,
                 FUNC_4(VAR_14.val.numeric)));

     VAR_12(VAR_11, VAR_16, FUNC_6(VAR_16));
     FUNC_5(VAR_16);
    }
    break;
   case 130:
    if (VAR_10 & VAR_4)
    {
     if (VAR_14.val.boolean)
      VAR_12(VAR_11, "true", 4);
     else
      VAR_12(VAR_11, "false", 5);
    }
    break;
   default:

    break;
  }
 }
}
