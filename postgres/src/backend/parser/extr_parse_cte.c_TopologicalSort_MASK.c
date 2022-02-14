
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; int depends_on; TYPE_1__* cte; } ;
struct TYPE_4__ {int location; } ;
typedef int ParseState ;
typedef TYPE_2__ CteItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(ParseState *VAR_2, CteItem *VAR_3, int VAR_4)
{
 int VAR_5,
    VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {

  for (VAR_6 = VAR_5; VAR_6 < VAR_4; VAR_6++)
  {
   if (FUNC_1(VAR_3[VAR_6].depends_on))
    break;
  }


  if (VAR_6 >= VAR_4)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("mutual recursion between WITH items is not implemented"),
      FUNC_5(VAR_2, VAR_3[VAR_5].cte->location)));





  if (VAR_5 != VAR_6)
  {
   CteItem VAR_7;

   VAR_7 = VAR_3[VAR_5];
   VAR_3[VAR_5] = VAR_3[VAR_6];
   VAR_3[VAR_6] = VAR_7;
  }





  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4; VAR_6++)
  {
   VAR_3[VAR_6].depends_on = FUNC_0(VAR_3[VAR_6].depends_on,
             VAR_3[VAR_5].id);
  }
 }
}
