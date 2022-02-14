
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vncPixel ;
struct TYPE_4__ {int h; int linew; } ;
typedef TYPE_1__ vncBuffer ;
typedef int rfbScreenInfoPtr ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 () ;

void
FUNC_4(rfbScreenInfoPtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
   vncBuffer * VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_3();


 for (VAR_11 = VAR_3; VAR_11 < VAR_3 + VAR_5; VAR_11++)
 {
  int VAR_12 = VAR_8 + VAR_11 - VAR_3;
  while (VAR_12 >= VAR_6->h)
   VAR_12 -= VAR_6->h;
  for (VAR_10 = VAR_2; VAR_10 < VAR_2 + VAR_4; VAR_10++)
  {
   vncPixel VAR_13;
   int VAR_14 = VAR_7 + VAR_10 - VAR_2;
   while (VAR_14 >= VAR_6->linew)
    VAR_14 -= VAR_6->linew;
   VAR_13 = FUNC_0(VAR_6, VAR_14, VAR_12);

   if (VAR_13 != VAR_9)
    FUNC_1(VAR_0, VAR_10, VAR_11, VAR_13);
  }
 }

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_2 + VAR_4, VAR_3 + VAR_5);
}
