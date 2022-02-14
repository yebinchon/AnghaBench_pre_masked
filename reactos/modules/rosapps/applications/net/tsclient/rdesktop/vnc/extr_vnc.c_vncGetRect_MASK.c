
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ vncBuffer ;
typedef TYPE_3__* rfbScreenInfoPtr ;
struct TYPE_8__ {int bitsPerPixel; int depth; } ;
struct TYPE_10__ {int paddedWidthInBytes; char* frameBuffer; TYPE_1__ serverFormat; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int,int,int ) ;

vncBuffer *
FUNC_5(rfbScreenInfoPtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 vncBuffer *VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_1->serverFormat.depth);

 FUNC_3();

 if (VAR_1->serverFormat.bitsPerPixel == 8)
 {

  int VAR_9, VAR_10;
  char *VAR_11, *VAR_12;
  VAR_9 = VAR_1->paddedWidthInBytes * VAR_1->serverFormat.bitsPerPixel / 8;
  VAR_10 = VAR_4 * VAR_1->serverFormat.bitsPerPixel / 8;
  VAR_12 = VAR_8->data;
  VAR_11 = VAR_1->frameBuffer + (VAR_3 * VAR_9 + VAR_2 * VAR_1->serverFormat.bitsPerPixel / 8);
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  {
   FUNC_2(VAR_12, VAR_11, VAR_10);
   VAR_12 += VAR_10;
   VAR_11 += VAR_9;
  }
 }
 else
 {
  for (VAR_7 = VAR_3; VAR_7 < VAR_3 + VAR_5; VAR_7++)
  {
   for (VAR_6 = VAR_2; VAR_6 < VAR_2 + VAR_4; VAR_6++)
   {
    FUNC_1(VAR_8, VAR_6 - VAR_2, VAR_7 - VAR_3, FUNC_0(VAR_0, VAR_6, VAR_7));
   }
  }
 }

 return VAR_8;
}
