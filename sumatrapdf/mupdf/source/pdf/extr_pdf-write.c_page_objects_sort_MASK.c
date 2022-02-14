
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int* object; } ;
typedef TYPE_1__ page_objects ;
typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, page_objects *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = VAR_1->len;



 for (VAR_2 = 1; VAR_2 < VAR_4; VAR_2++)
 {

  VAR_3 = VAR_2;
  while (VAR_3 != 0)
  {
   int VAR_5;
   int VAR_6 = (VAR_3-1)>>1;
   if (VAR_1->object[VAR_6] >= VAR_1->object[VAR_3])
    break;
   VAR_5 = VAR_1->object[VAR_6];
   VAR_1->object[VAR_6] = VAR_1->object[VAR_3];
   VAR_1->object[VAR_3] = VAR_5;
   VAR_3 = VAR_6;
  }
 }




 for (VAR_2 = VAR_4-1; VAR_2 > 0; VAR_2--)
 {


  int VAR_7 = VAR_1->object[0];
  VAR_1->object[0] = VAR_1->object[VAR_2];
  VAR_1->object[VAR_2] = VAR_7;


  VAR_3 = 0;
  while (1)
  {

   int VAR_8 = (VAR_3+1)*2-1;

   if (VAR_8 > VAR_2-1)
    break;

   if (VAR_8 < VAR_2-1 && VAR_1->object[VAR_8] < VAR_1->object[VAR_8+1])
    VAR_8++;


   if (VAR_1->object[VAR_3] > VAR_1->object[VAR_8])
    break;
   VAR_7 = VAR_1->object[VAR_8];
   VAR_1->object[VAR_8] = VAR_1->object[VAR_3];
   VAR_1->object[VAR_3] = VAR_7;
   VAR_3 = VAR_8;
  }
 }
}
