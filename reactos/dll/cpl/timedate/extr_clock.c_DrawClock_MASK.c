
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * hGreyPen; int cyClient; int cxClient; int * hGreyBrush; } ;
struct TYPE_5__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__* PCLOCKDATA ;
typedef int INT ;
typedef int * HPEN ;
typedef int HDC ;
typedef int * HBRUSH ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int,int) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static INT
FUNC_6(HDC VAR_2, PCLOCKDATA VAR_3)
{
     INT VAR_4,VAR_5;
     POINT VAR_6[3];
     HBRUSH VAR_7;
     HPEN VAR_8 = ((void*)0);


     VAR_7 = FUNC_4(VAR_2, VAR_3->hGreyBrush);

     VAR_8 = FUNC_1(VAR_2, VAR_1);


     VAR_5 = FUNC_5(VAR_3->cxClient,VAR_3->cyClient) * 2;

     for (VAR_4 = 0; VAR_4 < 360; VAR_4 += 6)
     {

          VAR_6[0].x = 0;
          VAR_6[0].y = VAR_5;


          FUNC_3(VAR_6, 1, VAR_4);



          if (VAR_4 % 5)
          {
                VAR_6[2].x = VAR_6[2].y = 7;
                FUNC_4(VAR_2, VAR_3->hGreyPen);
          }
          else
          {
              VAR_6[2].x = VAR_6[2].y = 16;
              FUNC_4(VAR_2, FUNC_2(VAR_0));
          }

          VAR_6[0].x -= VAR_6[2].x / 2;
          VAR_6[0].y -= VAR_6[2].y / 2;

          VAR_6[1].x = VAR_6[0].x + VAR_6[2].x;
          VAR_6[1].y = VAR_6[0].y + VAR_6[2].y;

          FUNC_0(VAR_2, VAR_6[0].x, VAR_6[0].y, VAR_6[1].x, VAR_6[1].y);
     }

     FUNC_4(VAR_2, VAR_7);
     FUNC_4(VAR_2, VAR_8);
     return VAR_5;
}
