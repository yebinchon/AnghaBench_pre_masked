
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float imgh; float winh; scalar_t__ winw; scalar_t__ imgw; } ;
typedef TYPE_1__ pdfapp_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(pdfapp_t *VAR_0)
{
 float VAR_1 = (float) VAR_0->imgw / VAR_0->imgh;
 float VAR_2 = (float) VAR_0->winw / VAR_0->winh;
 if (VAR_1 > VAR_2)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
