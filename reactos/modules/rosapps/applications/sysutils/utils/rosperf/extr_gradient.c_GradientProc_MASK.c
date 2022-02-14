
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Vertex1; int Vertex2; int Vertex3; } ;
struct TYPE_8__ {int WndWidth; int WndHeight; int ForegroundDc; } ;
struct TYPE_7__ {int x; int y; int Red; int Green; int Blue; scalar_t__ Alpha; } ;
typedef TYPE_1__ TRIVERTEX ;
typedef TYPE_2__* PPERF_INFO ;
typedef int HDC ;
typedef TYPE_3__ GRADIENT_TRIANGLE ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,TYPE_3__**,int,int ) ;

void
FUNC_1(void *VAR_1, PPERF_INFO VAR_2, unsigned VAR_3)
{
  unsigned VAR_4;
  HDC VAR_5;
  TRIVERTEX VAR_6[6];
  static GRADIENT_TRIANGLE VAR_7[4];

  VAR_5 = VAR_2->ForegroundDc;
  VAR_6[0].x = 0;
  VAR_6[0].y = 0;
  VAR_6[0].Red = 0xff00;
  VAR_6[0].Green = 0;
  VAR_6[0].Blue = 0;
  VAR_6[0].Alpha = 0;
  VAR_6[1].x = VAR_2->WndWidth;
  VAR_6[1].y = 0;
  VAR_6[1].Red = 0;
  VAR_6[1].Green = 0xff00;
  VAR_6[1].Blue = 0;
  VAR_6[1].Alpha = 0;
  VAR_6[2].x = VAR_2->WndWidth;
  VAR_6[2].y = VAR_2->WndHeight;
  VAR_6[2].Red = 0;
  VAR_6[2].Green = 0;
  VAR_6[2].Blue = 0xff00;
  VAR_6[2].Alpha = 0;
  VAR_6[3].x = 0;
  VAR_6[3].y = VAR_2->WndHeight;
  VAR_6[3].Red = 0;
  VAR_6[3].Green = 0xff00;
  VAR_6[3].Blue = 0;
  VAR_6[3].Alpha = 0;
  VAR_6[4].Red = 0;
  VAR_6[4].Green = 0;
  VAR_6[4].Blue = 0;
  VAR_6[4].Alpha = 0;
  VAR_6[5].Red = 0;
  VAR_6[5].Green = 0;
  VAR_6[5].Blue = 0;
  VAR_6[5].Alpha = 0;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      switch (2 * VAR_4 / VAR_3)
      {
        case 0:
             VAR_6[4].x = VAR_2->WndWidth * 2 * VAR_4 / VAR_3;
             VAR_6[4].y = 0;
             VAR_6[5].x = VAR_2->WndWidth - VAR_6[4].x;
             VAR_6[5].y = VAR_2->WndHeight;
             VAR_7[0].Vertex1 = 5; VAR_7[0].Vertex2 = 0; VAR_7[0].Vertex3 = 4;
             VAR_7[1].Vertex1 = 5; VAR_7[1].Vertex2 = 4; VAR_7[1].Vertex3 = 1;
             VAR_7[2].Vertex1 = 5; VAR_7[2].Vertex2 = 1; VAR_7[2].Vertex3 = 2;
             VAR_7[3].Vertex1 = 5; VAR_7[3].Vertex2 = 3; VAR_7[3].Vertex3 = 0;
             break;
        case 1:
             VAR_6[4].x = VAR_2->WndWidth;
             VAR_6[4].y = VAR_2->WndHeight * 2 * VAR_4 / VAR_3 - VAR_2->WndHeight;
             VAR_6[5].x = 0;
             VAR_6[5].y = VAR_2->WndHeight - VAR_6[4].y;
             VAR_7[0].Vertex1 = 5; VAR_7[0].Vertex2 = 1; VAR_7[0].Vertex3 = 4;
             VAR_7[1].Vertex1 = 5; VAR_7[1].Vertex2 = 4; VAR_7[1].Vertex3 = 2;
             VAR_7[2].Vertex1 = 5; VAR_7[2].Vertex2 = 2; VAR_7[2].Vertex3 = 3;
             VAR_7[3].Vertex1 = 5; VAR_7[3].Vertex2 = 0; VAR_7[3].Vertex3 = 1;
             break;
      }

      FUNC_0(VAR_5, VAR_6, 6, &VAR_7, 4, VAR_0);
   }
}
