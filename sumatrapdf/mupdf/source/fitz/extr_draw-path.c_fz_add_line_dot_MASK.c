
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float flatness; float linewidth; } ;
typedef TYPE_1__ sctx ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 float FUNC_1 (float) ;
 int FUNC_2 (int *,TYPE_1__*,float,float,float,float,int ) ;
 float FUNC_3 (float) ;
 int FUNC_4 (float) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_2, sctx *VAR_3, float VAR_4, float VAR_5)
{
 float VAR_6 = VAR_3->flatness;
 float VAR_7 = VAR_3->linewidth;
 int VAR_8 = FUNC_0(VAR_0 / (VAR_1 * FUNC_4(VAR_6 / VAR_7)));
 float VAR_9 = VAR_4 - VAR_7;
 float VAR_10 = VAR_5;
 int VAR_11;

 if (VAR_8 < 3)
  VAR_8 = 3;
 for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++)
 {
  float VAR_12 = VAR_0 * 2 * VAR_11 / VAR_8;
  float VAR_13 = FUNC_1(VAR_12);
  float VAR_14 = FUNC_3(VAR_12);
  float VAR_15 = VAR_4 - VAR_13 * VAR_7;
  float VAR_16 = VAR_5 + VAR_14 * VAR_7;
  FUNC_2(VAR_2, VAR_3, VAR_9, VAR_10, VAR_15, VAR_16, 0);
  VAR_9 = VAR_15;
  VAR_10 = VAR_16;
 }

 FUNC_2(VAR_2, VAR_3, VAR_9, VAR_10, VAR_4 - VAR_7, VAR_5, 0);
}
