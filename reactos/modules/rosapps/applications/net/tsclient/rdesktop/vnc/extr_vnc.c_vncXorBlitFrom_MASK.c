
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vncPixel ;
struct TYPE_6__ {int h; int linew; } ;
typedef TYPE_1__ vncBuffer ;
typedef int rfbScreenInfoPtr ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 () ;

void
FUNC_4(rfbScreenInfoPtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, vncBuffer * VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_3();


 for (VAR_10 = VAR_3; VAR_10 < VAR_3 + VAR_5; VAR_10++)
 {
  int VAR_11 = VAR_8 + VAR_10 - VAR_3;
  while (VAR_11 >= VAR_6->h)
   VAR_11 -= VAR_6->h;
  for (VAR_9 = VAR_2; VAR_9 < VAR_2 + VAR_4; VAR_9++)
  {
   vncPixel VAR_12, VAR_13;
   int VAR_14 = VAR_7 + VAR_9 - VAR_2;
   while (VAR_14 >= VAR_6->linew)
    VAR_14 -= VAR_6->linew;
   VAR_12 = FUNC_0(VAR_6, VAR_14, VAR_11);
   VAR_13 = FUNC_0(VAR_0, VAR_9, VAR_10);

   FUNC_1(VAR_0, VAR_9, VAR_10, VAR_12 ^ VAR_13);
  }
 }

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_2 + VAR_4, VAR_3 + VAR_5);
}
