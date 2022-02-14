
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int blue; int green; int red; } ;
struct TYPE_5__ {int ncolours; TYPE_2__* colours; } ;
typedef int STREAM ;
typedef int RD_HCOLOURMAP ;
typedef TYPE_1__ COLOURMAP ;
typedef TYPE_2__ COLOURENTRY ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(STREAM VAR_0)
{
 COLOURENTRY *VAR_1;
 COLOURMAP VAR_2;
 RD_HCOLOURMAP VAR_3;
 int VAR_4;

 FUNC_3(VAR_0, 2);
 FUNC_1(VAR_0, VAR_2.ncolours);
 FUNC_3(VAR_0, 2);

 VAR_2.colours = (COLOURENTRY *) FUNC_7(sizeof(COLOURENTRY) * VAR_2.ncolours);

 FUNC_0(("PALETTE(c=%d)\n", VAR_2.ncolours));

 for (VAR_4 = 0; VAR_4 < VAR_2.ncolours; VAR_4++)
 {
  VAR_1 = &VAR_2.colours[VAR_4];
  FUNC_2(VAR_0, VAR_1->red);
  FUNC_2(VAR_0, VAR_1->green);
  FUNC_2(VAR_0, VAR_1->blue);
 }

 VAR_3 = FUNC_4(&VAR_2);
 FUNC_5(VAR_3);

 FUNC_6(VAR_2.colours);
}
