
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_3__ {int next; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (TYPE_1__**) ;
 TYPE_1__** VAR_0 ;
 int* VAR_1 ;
 int FUNC_3 (size_t,int,size_t) ;

void
FUNC_4(void)
{
 uint32 VAR_2 = 0, VAR_3 = 0;
 int VAR_4;

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++)
  if (FUNC_1(VAR_2))
  {
   FUNC_0(("Saving cache state for bitmap cache %d...", VAR_2));
   VAR_4 = VAR_1[VAR_2];
   while (VAR_4 >= 0)
   {
    FUNC_3(VAR_2, VAR_4, ++VAR_3);
    VAR_4 = VAR_0[VAR_2][VAR_4].next;
   }
   FUNC_0((" %d stamps written.\n", VAR_3));
  }
}
