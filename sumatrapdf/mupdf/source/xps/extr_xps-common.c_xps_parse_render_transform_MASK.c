
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xps_document ;
struct TYPE_3__ {float a; float b; float c; float d; float e; float f; } ;
typedef TYPE_1__ fz_matrix ;
typedef int fz_context ;


 float FUNC_0 (char*) ;

__attribute__((used)) static fz_matrix
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2)
{
 fz_matrix VAR_3;
 float VAR_4[6];
 char *VAR_5 = VAR_2;
 int VAR_6;

 VAR_4[0] = 1; VAR_4[1] = 0;
 VAR_4[2] = 0; VAR_4[3] = 1;
 VAR_4[4] = 0; VAR_4[5] = 0;

 for (VAR_6 = 0; VAR_6 < 6 && *VAR_5; VAR_6++)
 {
  VAR_4[VAR_6] = FUNC_0(VAR_5);
  while (*VAR_5 && *VAR_5 != ',')
   VAR_5++;
  if (*VAR_5 == ',')
   VAR_5++;
 }

 VAR_3.a = VAR_4[0]; VAR_3.b = VAR_4[1];
 VAR_3.c = VAR_4[2]; VAR_3.d = VAR_4[3];
 VAR_3.e = VAR_4[4]; VAR_3.f = VAR_4[5];
 return VAR_3;
}
