
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int w; int h; int linew; char* data; TYPE_1__* format; void* owner; } ;
typedef TYPE_2__ vncBuffer ;
struct TYPE_8__ {void* trueColour; } ;
struct TYPE_10__ {char* frameBuffer; int port; int listenSock; TYPE_1__ serverFormat; int deferUpdateTime; int inetdSock; void* neverShared; void* alwaysShared; void* httpPort; int kbdAddEvent; int ptrAddEvent; int desktopName; } ;
typedef int BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int* VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_3 (int ,int *,int,int,int,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,int,int) ;
 int VAR_13 ;
 int VAR_14 ;

BOOL
FUNC_7()
{
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < 0x100; VAR_15++)
  VAR_8[VAR_15] =
   (((VAR_15 >> 7) & 1)) | (((VAR_15 >> 6) & 1) << 1) | (((VAR_15 >> 5) & 1) << 2) |
   (((VAR_15 >> 4) & 1) << 3) | (((VAR_15 >> 3) & 1) << 4) | (((VAR_15 >> 2) & 1) << 5) |
   (((VAR_15 >> 1) & 1) << 6) | (((VAR_15 >> 0) & 1) << 7);

 VAR_11 = FUNC_3(0, ((void*)0), VAR_7, VAR_5, 8, 1, 1);
 VAR_11->desktopName = VAR_6;
 VAR_11->frameBuffer = (char *) FUNC_2(VAR_7 * VAR_5);
 VAR_11->ptrAddEvent = VAR_14;
 VAR_11->kbdAddEvent = VAR_13;







 VAR_11->port = -1;
 VAR_11->alwaysShared = VAR_0;
 VAR_11->neverShared = VAR_0;

 VAR_11->inetdSock = VAR_9;
 VAR_11->serverFormat.trueColour = VAR_0;
 VAR_11->deferUpdateTime = VAR_3;

 VAR_4 = (vncBuffer *) FUNC_2(sizeof(vncBuffer));
 VAR_4->w = VAR_7;
 VAR_4->h = VAR_5;
 VAR_4->linew = VAR_7;
 VAR_4->data = VAR_11->frameBuffer;
 VAR_4->owner = VAR_0;
 VAR_4->format = &VAR_11->serverFormat;

 FUNC_6(0, 0, VAR_7, VAR_5);

 FUNC_4(VAR_11);

 VAR_11->port = VAR_10;





 FUNC_1();

 return (VAR_11 != ((void*)0));
}
