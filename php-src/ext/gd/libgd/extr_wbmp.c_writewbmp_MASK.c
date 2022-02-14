
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int* bitmap; } ;
typedef TYPE_1__ Wbmp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void (*) (int,void*),void*) ;

int
FUNC_1 (Wbmp * VAR_2, void (*VAR_3) (int VAR_4, void *VAR_5), void *VAR_6)
{
  int VAR_7, VAR_8;
  int VAR_9, VAR_10;


  VAR_3 (0, VAR_6);
  VAR_3 (0, VAR_6);




  FUNC_0 (VAR_2->width, VAR_3, VAR_6);
  FUNC_0 (VAR_2->height, VAR_3, VAR_6);



  for (VAR_7 = 0; VAR_7 < VAR_2->height; VAR_7++)
    {
      VAR_9 = 8;
      VAR_10 = 0;
      for (VAR_8 = 0; VAR_8 < VAR_2->width; VAR_8++)
 {
   VAR_10 |= ((VAR_2->bitmap[VAR_7 * VAR_2->width + VAR_8] == 1) ? VAR_1 : VAR_0) << --VAR_9;
   if (VAR_9 == 0)
     {
       VAR_9 = 8;
       VAR_3 (VAR_10, VAR_6);
       VAR_10 = 0;
     }
 }
      if (VAR_9 != 8)
 VAR_3 (VAR_10, VAR_6);

    }
  return (0);

}
