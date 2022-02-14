
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* imageBuffer; } ;
typedef TYPE_1__* MMBitmapRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(MMBitmapRef VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));

 if (VAR_0->imageBuffer != ((void*)0)) {
  FUNC_1(VAR_0->imageBuffer);
  VAR_0->imageBuffer = ((void*)0);
 }

 FUNC_1(VAR_0);
}
