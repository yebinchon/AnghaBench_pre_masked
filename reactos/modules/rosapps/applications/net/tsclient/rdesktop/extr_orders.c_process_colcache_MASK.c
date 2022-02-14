
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
typedef int RDPCLIENT ;
typedef int HCOLOURMAP ;
typedef TYPE_1__ COLOURMAP ;
typedef TYPE_2__ COLOURENTRY ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 COLOURENTRY *VAR_2;
 COLOURMAP VAR_3;
 HCOLOURMAP VAR_4;
 uint8 VAR_5;
 int VAR_6;

 FUNC_3(VAR_1, VAR_5);
 FUNC_2(VAR_1, VAR_3.ncolours);

 VAR_3.colours = (COLOURENTRY *) FUNC_5(sizeof(COLOURENTRY) * VAR_3.ncolours);

 if(VAR_3.colours == ((void*)0))
 {
  FUNC_4(VAR_1, VAR_3.ncolours * 4);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3.ncolours; VAR_6++)
 {
  VAR_2 = &VAR_3.colours[VAR_6];
  FUNC_3(VAR_1, VAR_2->blue);
  FUNC_3(VAR_1, VAR_2->green);
  FUNC_3(VAR_1, VAR_2->red);
  FUNC_4(VAR_1, 1);
 }

 FUNC_0(("COLCACHE(id=%d,n=%d)\n", VAR_5, VAR_3.ncolours));

 VAR_4 = FUNC_6(VAR_0, &VAR_3);

 if (VAR_5)
  FUNC_7(VAR_0, VAR_4);

 FUNC_1(VAR_3.colours);
}
