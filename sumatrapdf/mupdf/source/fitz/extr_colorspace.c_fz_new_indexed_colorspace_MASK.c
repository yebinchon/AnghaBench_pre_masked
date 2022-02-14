
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_8__ {int high; unsigned char* lookup; int base; } ;
struct TYPE_9__ {TYPE_1__ indexed; } ;
struct TYPE_10__ {TYPE_2__ u; int name; } ;
typedef TYPE_3__ fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *,int ,int ,int,char*) ;
 int FUNC_2 (char*,int,char*,int,int ) ;
 int FUNC_3 (int *,int ,char*) ;

fz_colorspace *
FUNC_4(fz_context *VAR_2, fz_colorspace *VAR_3, int VAR_4, unsigned char *VAR_5)
{
 fz_colorspace *VAR_6;
 char VAR_7[100];
 if (VAR_4 < 0 || VAR_4 > 255)
  FUNC_3(VAR_2, VAR_1, "invalid maximum value in indexed colorspace");
 FUNC_2(VAR_7, sizeof VAR_7, "Indexed(%d,%s)", VAR_4, VAR_3->name);
 VAR_6 = FUNC_1(VAR_2, VAR_0, 0, 1, VAR_7);
 VAR_6->u.indexed.base = FUNC_0(VAR_2, VAR_3);
 VAR_6->u.indexed.high = VAR_4;
 VAR_6->u.indexed.lookup = VAR_5;
 return VAR_6;
}
