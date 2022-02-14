
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
struct TYPE_7__ {int len; int val; } ;
struct TYPE_8__ {TYPE_1__ string; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef TYPE_4__ Jsonb ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int) ;

uint32
FUNC_9(Jsonb *VAR_12)
{
 JsonbIterator *VAR_13;
 JsonbValue VAR_14;
 JsonbIteratorToken VAR_15;
 uint32 VAR_16 = 0;

 VAR_13 = FUNC_0(&VAR_12->root);

 VAR_15 = FUNC_1(&VAR_13, &VAR_14, 0);






 if (VAR_15 != VAR_2)
  FUNC_3(VAR_1, (FUNC_4(VAR_0),
      FUNC_6("wrong flag type, only arrays and scalars are allowed")));

 while ((VAR_15 = FUNC_1(&VAR_13, &VAR_14, 0)) == VAR_4)
 {
  if (VAR_14.type != VAR_6)
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_6("flag array element is not a string"),
      FUNC_5("Possible values are: \"string\", \"numeric\", \"boolean\", \"key\", and \"all\".")));

  if (VAR_14.val.string.len == 3 &&
   FUNC_7(VAR_14.val.string.val, "all", 3) == 0)
   VAR_16 |= VAR_7;
  else if (VAR_14.val.string.len == 3 &&
     FUNC_7(VAR_14.val.string.val, "key", 3) == 0)
   VAR_16 |= VAR_9;
  else if (VAR_14.val.string.len == 6 &&
     FUNC_7(VAR_14.val.string.val, "string", 5) == 0)
   VAR_16 |= VAR_11;
  else if (VAR_14.val.string.len == 7 &&
     FUNC_7(VAR_14.val.string.val, "numeric", 7) == 0)
   VAR_16 |= VAR_10;
  else if (VAR_14.val.string.len == 7 &&
     FUNC_7(VAR_14.val.string.val, "boolean", 7) == 0)
   VAR_16 |= VAR_8;
  else
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_6("wrong flag in flag array: \"%s\"",
       FUNC_8(VAR_14.val.string.val, VAR_14.val.string.len)),
      FUNC_5("Possible values are: \"string\", \"numeric\", \"boolean\", \"key\", and \"all\".")));
 }


 if (VAR_15 != VAR_5)
  FUNC_2(VAR_1, "unexpected end of flag array");


 VAR_15 = FUNC_1(&VAR_13, &VAR_14, 0);
 if (VAR_15 != VAR_3)
  FUNC_2(VAR_1, "unexpected end of flag array");

 return VAR_16;
}
