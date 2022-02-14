
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float resolution; float imgh; scalar_t__ winh; } ;
typedef TYPE_1__ pdfapp_t ;


 float VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,int,int ,int ) ;

void FUNC_1(pdfapp_t *VAR_2)
{
 VAR_2->resolution *= (float) VAR_2->winh / VAR_2->imgh;
 if (VAR_2->resolution > VAR_0)
  VAR_2->resolution = VAR_0;
 else if (VAR_2->resolution < VAR_1)
  VAR_2->resolution = VAR_1;
 FUNC_0(VAR_2, 0, 1, 1, 0, 0);
}
