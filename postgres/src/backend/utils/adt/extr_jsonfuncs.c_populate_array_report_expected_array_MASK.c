
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ndims; scalar_t__ colname; int * sizes; } ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ PopulateArrayContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(PopulateArrayContext *VAR_2, int VAR_3)
{
 if (VAR_3 <= 0)
 {
  if (VAR_2->colname)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("expected JSON array"),
      FUNC_4("See the value of key \"%s\".", VAR_2->colname)));
  else
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("expected JSON array")));
 }
 else
 {
  StringInfoData VAR_4;
  int VAR_5;

  FUNC_6(&VAR_4);

  FUNC_0(VAR_2->ndims > 0 && VAR_3 < VAR_2->ndims);

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   FUNC_1(&VAR_4, "[%d]", VAR_2->sizes[VAR_5]);

  if (VAR_2->colname)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("expected JSON array"),
      FUNC_4("See the array element %s of key \"%s\".",
        VAR_4.data, VAR_2->colname)));
  else
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("expected JSON array"),
      FUNC_4("See the array element %s.",
        VAR_4.data)));
 }
}
