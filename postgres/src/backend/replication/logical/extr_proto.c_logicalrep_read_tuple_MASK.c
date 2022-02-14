
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* changed; char** values; } ;
typedef int StringInfo ;
typedef TYPE_1__ LogicalRepTupleData ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int*,int ,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_1, LogicalRepTupleData *VAR_2)
{
 int VAR_3;
 int VAR_4;


 VAR_4 = FUNC_5(VAR_1, 2);

 FUNC_1(VAR_2->changed, 0, sizeof(VAR_2->changed));


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
  char VAR_5;

  VAR_5 = FUNC_4(VAR_1);

  switch (VAR_5)
  {
   case 'n':
    VAR_2->values[VAR_3] = ((void*)0);
    VAR_2->changed[VAR_3] = 1;
    break;
   case 'u':

    VAR_2->values[VAR_3] = ((void*)0);
    break;
   case 't':
    {
     int VAR_6;

     VAR_2->changed[VAR_3] = 1;

     VAR_6 = FUNC_5(VAR_1, 4);


     VAR_2->values[VAR_3] = FUNC_2(VAR_6 + 1);
     FUNC_3(VAR_1, VAR_2->values[VAR_3], VAR_6);
     VAR_2->values[VAR_3][VAR_6] = '\0';
    }
    break;
   default:
    FUNC_0(VAR_0, "unrecognized data representation type '%c'", VAR_5);
  }
 }
}
