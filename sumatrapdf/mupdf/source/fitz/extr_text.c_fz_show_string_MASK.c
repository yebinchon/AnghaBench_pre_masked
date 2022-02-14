
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_text_language ;
typedef int fz_text ;
typedef int fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;
typedef int fz_bidi_direction ;


 float FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int*,char const*) ;
 int FUNC_2 (int *,int *,int,int ,int ,int **) ;
 int FUNC_3 (int ,float,float) ;
 int FUNC_4 (int *,int *,int *,int ,int,int,int,int,int ,int ) ;

fz_matrix
FUNC_5(fz_context *VAR_0, fz_text *VAR_1, fz_font *VAR_2, fz_matrix VAR_3, const char *VAR_4, int VAR_5, int VAR_6, fz_bidi_direction VAR_7, fz_text_language VAR_8)
{
 fz_font *VAR_9;
 int VAR_10, VAR_11;
 float VAR_12;

 while (*VAR_4)
 {
  VAR_4 += FUNC_1(&VAR_11, VAR_4);
  VAR_10 = FUNC_2(VAR_0, VAR_2, VAR_11, 0, VAR_8, &VAR_9);
  FUNC_4(VAR_0, VAR_1, VAR_9, VAR_3, VAR_10, VAR_11, VAR_5, VAR_6, VAR_7, VAR_8);
  VAR_12 = FUNC_0(VAR_0, VAR_9, VAR_10, VAR_5);
  if (VAR_5 == 0)
   VAR_3 = FUNC_3(VAR_3, VAR_12, 0);
  else
   VAR_3 = FUNC_3(VAR_3, 0, -VAR_12);
 }

 return VAR_3;
}
