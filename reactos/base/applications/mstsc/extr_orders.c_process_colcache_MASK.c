
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_6__ {scalar_t__ red; scalar_t__ green; scalar_t__ blue; } ;
struct TYPE_5__ {int ncolours; TYPE_2__* colours; } ;
typedef int STREAM ;
typedef int RD_HCOLOURMAP ;
typedef TYPE_1__ COLOURMAP ;
typedef TYPE_2__ COLOURENTRY ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(STREAM VAR_0)
{
 COLOURENTRY *VAR_1;
 COLOURMAP VAR_2;
 RD_HCOLOURMAP VAR_3;
 uint8 VAR_4;
 int VAR_5;

 FUNC_2(VAR_0, VAR_4);
 FUNC_1(VAR_0, VAR_2.ncolours);

 VAR_2.colours = (COLOURENTRY *) FUNC_7(sizeof(COLOURENTRY) * VAR_2.ncolours);

 for (VAR_5 = 0; VAR_5 < VAR_2.ncolours; VAR_5++)
 {
  VAR_1 = &VAR_2.colours[VAR_5];
  FUNC_2(VAR_0, VAR_1->blue);
  FUNC_2(VAR_0, VAR_1->green);
  FUNC_2(VAR_0, VAR_1->red);
  FUNC_3(VAR_0, 1);
 }

 FUNC_0(("COLCACHE(id=%d,n=%d)\n", VAR_4, VAR_2.ncolours));

 VAR_3 = FUNC_4(&VAR_2);

 if (VAR_4)
  FUNC_5(VAR_3);

 FUNC_6(VAR_2.colours);
}
