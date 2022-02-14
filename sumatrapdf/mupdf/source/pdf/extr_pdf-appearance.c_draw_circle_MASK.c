
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_buffer ;


 float VAR_0 ;
 int FUNC_0 (int *,int *,char*,float,float,...) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, fz_buffer *VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
 float VAR_7 = VAR_3 * VAR_0;
 float VAR_8 = VAR_4 * VAR_0;
 FUNC_0(VAR_1, VAR_2, "%g %g m\n", VAR_5, VAR_6+VAR_4);
 FUNC_0(VAR_1, VAR_2, "%g %g %g %g %g %g c\n", VAR_5+VAR_7, VAR_6+VAR_4, VAR_5+VAR_3, VAR_6+VAR_8, VAR_5+VAR_3, VAR_6);
 FUNC_0(VAR_1, VAR_2, "%g %g %g %g %g %g c\n", VAR_5+VAR_3, VAR_6-VAR_8, VAR_5+VAR_7, VAR_6-VAR_4, VAR_5, VAR_6-VAR_4);
 FUNC_0(VAR_1, VAR_2, "%g %g %g %g %g %g c\n", VAR_5-VAR_7, VAR_6-VAR_4, VAR_5-VAR_3, VAR_6-VAR_8, VAR_5-VAR_3, VAR_6);
 FUNC_0(VAR_1, VAR_2, "%g %g %g %g %g %g c\n", VAR_5-VAR_3, VAR_6+VAR_8, VAR_5-VAR_7, VAR_6+VAR_4, VAR_5, VAR_6+VAR_4);
}
