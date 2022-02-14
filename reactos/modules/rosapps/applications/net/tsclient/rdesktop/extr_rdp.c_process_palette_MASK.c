
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int blue; int green; int red; } ;
struct TYPE_5__ {int ncolours; TYPE_2__* colours; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef int HCOLOURMAP ;
typedef TYPE_1__ COLOURMAP ;
typedef TYPE_2__ COLOURENTRY ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;

void
FUNC_8(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 COLOURENTRY *VAR_2;
 COLOURMAP VAR_3;
 HCOLOURMAP VAR_4;
 int VAR_5;

 FUNC_4(VAR_1, 2);
 FUNC_2(VAR_1, VAR_3.ncolours);
 FUNC_4(VAR_1, 2);

 VAR_3.colours = (COLOURENTRY *) FUNC_5(sizeof(COLOURENTRY) * VAR_3.ncolours);

 if(VAR_3.colours == ((void*)0))
 {
  FUNC_4(VAR_1, sizeof(*VAR_2) * VAR_3.ncolours);
  return;
 }

 FUNC_0(("PALETTE(c=%d)\n", VAR_3.ncolours));

 for (VAR_5 = 0; VAR_5 < VAR_3.ncolours; VAR_5++)
 {
  VAR_2 = &VAR_3.colours[VAR_5];
  FUNC_3(VAR_1, VAR_2->red);
  FUNC_3(VAR_1, VAR_2->green);
  FUNC_3(VAR_1, VAR_2->blue);
 }

 VAR_4 = FUNC_6(VAR_0, &VAR_3);
 FUNC_7(VAR_0, VAR_4);

 FUNC_1(VAR_3.colours);
}
