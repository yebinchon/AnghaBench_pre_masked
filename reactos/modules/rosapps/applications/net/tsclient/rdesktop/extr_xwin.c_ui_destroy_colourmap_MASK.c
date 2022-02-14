
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int display; int owncolmap; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef scalar_t__ HCOLOURMAP ;
typedef int Colormap ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(RDPCLIENT * VAR_0, HCOLOURMAP VAR_1)
{
 if (!VAR_0->owncolmap)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_0->display, (Colormap) VAR_1);
}
