
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_layout_block ;
typedef int fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,float,float,char const*) ;
 int FUNC_1 (int *,int *,float,float,float,char const*) ;
 float FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int*,char const*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, fz_layout_block *VAR_2, float VAR_3, float VAR_4,
 const char *VAR_5, const char *VAR_6, fz_font *VAR_7, float VAR_8, float VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 1;
 float VAR_14;
 if (VAR_5 == VAR_6)
  FUNC_1(VAR_1, VAR_2, VAR_3 + VAR_9 / 2, VAR_4, VAR_8, VAR_5);
 while (VAR_5 < VAR_6)
 {
  VAR_10 = FUNC_3(&VAR_11, VAR_5);
  VAR_11 = FUNC_5(VAR_11);
  if (VAR_11 < 0) VAR_11 = VAR_0;
  VAR_12 = FUNC_4(VAR_1, VAR_7, VAR_11);
  VAR_14 = FUNC_2(VAR_1, VAR_7, VAR_12, 0) * VAR_8;
  if (VAR_13)
  {
   FUNC_1(VAR_1, VAR_2, VAR_3 + (VAR_9 - VAR_14) / 2, VAR_4, VAR_8, VAR_5);
   VAR_13 = 0;
  }
  FUNC_0(VAR_1, VAR_2, VAR_3 + (VAR_9 - VAR_14) / 2, VAR_14, VAR_5);
  VAR_5 += VAR_10;
  VAR_3 += VAR_9;
 }
}
