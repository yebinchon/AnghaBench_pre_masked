
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int winw; int winh; int pany; int panx; } ;
typedef TYPE_1__ pdfapp_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(pdfapp_t *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->winw != VAR_1 || VAR_0->winh != VAR_2)
 {
  VAR_0->winw = VAR_1;
  VAR_0->winh = VAR_2;
  FUNC_0(VAR_0, VAR_0->panx, VAR_0->pany);
  FUNC_1(VAR_0);
 }
}
