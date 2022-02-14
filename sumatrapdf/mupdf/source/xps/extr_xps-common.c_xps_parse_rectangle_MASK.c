
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xps_document ;
struct TYPE_3__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;


 float FUNC_0 (char*) ;

fz_rect
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2)
{
 fz_rect VAR_3;
 float VAR_4[4];
 char *VAR_5 = VAR_2;
 int VAR_6;

 VAR_4[0] = 0; VAR_4[1] = 0;
 VAR_4[2] = 1; VAR_4[3] = 1;

 for (VAR_6 = 0; VAR_6 < 4 && *VAR_5; VAR_6++)
 {
  VAR_4[VAR_6] = FUNC_0(VAR_5);
  while (*VAR_5 && *VAR_5 != ',')
   VAR_5++;
  if (*VAR_5 == ',')
   VAR_5++;
 }

 VAR_3.x0 = VAR_4[0];
 VAR_3.y0 = VAR_4[1];
 VAR_3.x1 = VAR_4[0] + VAR_4[2];
 VAR_3.y1 = VAR_4[1] + VAR_4[3];
 return VAR_3;
}
