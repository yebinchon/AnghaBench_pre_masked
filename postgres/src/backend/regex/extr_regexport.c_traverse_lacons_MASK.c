
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cnfa {scalar_t__ ncolors; int post; struct carc** states; } ;
struct carc {scalar_t__ co; int to; } ;
struct TYPE_3__ {scalar_t__ co; int to; } ;
typedef TYPE_1__ regex_arc_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct cnfa *VAR_1, int VAR_2,
    int *VAR_3,
    regex_arc_t *VAR_4, int VAR_5)
{
 struct carc *VAR_6;






 FUNC_1();

 for (VAR_6 = VAR_1->states[VAR_2]; VAR_6->co != VAR_0; VAR_6++)
 {
  if (VAR_6->co < VAR_1->ncolors)
  {

   int VAR_7 = (*VAR_3)++;

   if (VAR_7 < VAR_5)
   {
    VAR_4[VAR_7].co = VAR_6->co;
    VAR_4[VAR_7].to = VAR_6->to;
   }
  }
  else
  {


   FUNC_0(VAR_6->to != VAR_1->post);

   FUNC_2(VAR_1, VAR_6->to, VAR_3, VAR_4, VAR_5);
  }
 }
}
