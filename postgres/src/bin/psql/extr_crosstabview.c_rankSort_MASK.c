
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sort_value; int rank; } ;
typedef TYPE_1__ pivot_field ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int*,int,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, pivot_field *VAR_2)
{
 int *VAR_3;

 int VAR_4;

 VAR_3 = (int *) FUNC_2(sizeof(int) * VAR_1 * 2);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  char *VAR_5 = VAR_2[VAR_4].sort_value;


  if (VAR_5 &&
   ((*VAR_5 == '-' &&
     FUNC_5(VAR_5 + 1, "0123456789") == FUNC_4(VAR_5 + 1)) ||
    FUNC_5(VAR_5, "0123456789") == FUNC_4(VAR_5)))
  {
   VAR_3[VAR_4 * 2] = FUNC_0(VAR_5);
   VAR_3[VAR_4 * 2 + 1] = VAR_4;
  }
  else
  {

   VAR_3[VAR_4 * 2] = 0;
   VAR_3[VAR_4 * 2 + 1] = VAR_4;
  }
 }

 FUNC_3(VAR_3, VAR_1, sizeof(int) * 2, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  VAR_2[VAR_3[VAR_4 * 2 + 1]].rank = VAR_4;
 }

 FUNC_1(VAR_3);
}
