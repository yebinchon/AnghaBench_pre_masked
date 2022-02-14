
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glyph {float w; float h; float lsb; float top; scalar_t__ t; scalar_t__ s; } ;
typedef int fz_font ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 float FUNC_1 (int ,int *,int,int ) ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_2 (float,float) ;
 int FUNC_3 (float,float) ;
 struct glyph* FUNC_4 (int *,float,int,float*,float*) ;

__attribute__((used)) static float FUNC_5(fz_font *VAR_3, float VAR_4, int VAR_5, float VAR_6, float VAR_7)
{
 struct glyph *VAR_8;
 float VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_6, &VAR_7);
 if (!VAR_8)
  return 0;

 VAR_9 = (float) VAR_8->s / VAR_2;
 VAR_10 = (float) VAR_8->t / VAR_1;
 VAR_11 = (float) (VAR_8->s + VAR_8->w) / VAR_2;
 VAR_12 = (float) (VAR_8->t + VAR_8->h) / VAR_1;
 VAR_13 = FUNC_0(VAR_6) + VAR_8->lsb;
 VAR_14 = FUNC_0(VAR_7) - VAR_8->top + VAR_8->h;

 FUNC_2(VAR_9, VAR_10); FUNC_3(VAR_13, VAR_14 - VAR_8->h);
 FUNC_2(VAR_11, VAR_10); FUNC_3(VAR_13 + VAR_8->w, VAR_14 - VAR_8->h);
 FUNC_2(VAR_11, VAR_12); FUNC_3(VAR_13 + VAR_8->w, VAR_14);
 FUNC_2(VAR_9, VAR_12); FUNC_3(VAR_13, VAR_14);

 return FUNC_1(VAR_0, VAR_3, VAR_5, 0) * VAR_4;
}
