
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int a; int b; int c; int d; int e; int f; int g; int h; } ;
typedef TYPE_1__ macaddr8 ;
struct TYPE_6__ {int a; int b; int c; int d; int e; int f; } ;
typedef TYPE_2__ macaddr ;
typedef int inet ;
typedef int Oid ;
typedef int Datum ;



 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;



 double VAR_0 ;
 double* FUNC_3 (int *) ;
 double FUNC_4 (int *) ;

double
FUNC_5(Datum VAR_1, Oid VAR_2, bool *VAR_3)
{
 switch (VAR_2)
 {
  case 130:
  case 131:
   {
    inet *VAR_4 = FUNC_0(VAR_1);
    int VAR_5;
    double VAR_6;
    int VAR_7;




    if (FUNC_4(VAR_4) == VAR_0)
     VAR_5 = 4;
    else
     VAR_5 = 5;

    VAR_6 = FUNC_4(VAR_4);
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
     VAR_6 *= 256;
     VAR_6 += FUNC_3(VAR_4)[VAR_7];
    }
    return VAR_6;
   }
  case 128:
   {
    macaddr *VAR_8 = FUNC_2(VAR_1);
    double VAR_9;

    VAR_9 = (VAR_8->a << 16) | (VAR_8->b << 8) | (VAR_8->c);
    VAR_9 *= 256 * 256 * 256;
    VAR_9 += (VAR_8->d << 16) | (VAR_8->e << 8) | (VAR_8->f);
    return VAR_9;
   }
  case 129:
   {
    macaddr8 *VAR_10 = FUNC_1(VAR_1);
    double VAR_11;

    VAR_11 = (VAR_10->a << 24) | (VAR_10->b << 16) | (VAR_10->c << 8) | (VAR_10->d);
    VAR_11 *= ((double) 256) * 256 * 256 * 256;
    VAR_11 += (VAR_10->e << 24) | (VAR_10->f << 16) | (VAR_10->g << 8) | (VAR_10->h);
    return VAR_11;
   }
 }

 *VAR_3 = 1;
 return 0;
}
