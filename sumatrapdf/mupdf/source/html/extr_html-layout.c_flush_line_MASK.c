
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_html_flow ;
struct TYPE_4__ {float b; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 float FUNC_0 (float,float) ;
 int FUNC_1 (int *,float,float,float,int,int *,int *,TYPE_1__*,float,float) ;
 float FUNC_2 (int *,int *,float*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, fz_html_box *VAR_1, float VAR_2, float VAR_3, float VAR_4, int VAR_5, float VAR_6, fz_html_flow *VAR_7, fz_html_flow *VAR_8)
{
 float VAR_9, VAR_10, VAR_11;
 VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_11);
 if (VAR_2 > 0)
 {
  VAR_9 = VAR_2 - FUNC_0(VAR_1->b, VAR_2);
  if (VAR_10 > VAR_9)
   VAR_1->b += VAR_9;
 }
 FUNC_1(VAR_0, VAR_6, VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_1, VAR_11, VAR_10);
 VAR_1->b += VAR_10;
}
