
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float flatness; int linewidth; } ;
typedef TYPE_1__ sctx ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (float,float) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,float,float,float,float,int) ;
 float FUNC_5 (float) ;
 int FUNC_6 (float) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_2, sctx *VAR_3,
 float VAR_4, float VAR_5,
 float VAR_6, float VAR_7,
 float VAR_8, float VAR_9,
 int VAR_10)
{
 float VAR_11, VAR_12, VAR_13;
 float VAR_14;
 float VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 VAR_13 = FUNC_3(VAR_3->linewidth);
 VAR_14 = 2 * VAR_1 * FUNC_6(VAR_3->flatness / VAR_13);
 VAR_11 = FUNC_0(VAR_7, VAR_6);
 VAR_12 = FUNC_0(VAR_9, VAR_8);

 if (VAR_13 > 0)
 {
  if (VAR_11 < VAR_12)
   VAR_11 += VAR_0 * 2;
  VAR_19 = FUNC_1((VAR_11 - VAR_12) / VAR_14);
 }
 else
 {
  if (VAR_12 < VAR_11)
   VAR_12 += VAR_0 * 2;
  VAR_19 = FUNC_1((VAR_12 - VAR_11) / VAR_14);
 }

 if (VAR_10)
 {
  VAR_15 = VAR_8;
  VAR_16 = VAR_9;
  for (VAR_20 = VAR_19-1; VAR_20 > 0; VAR_20--)
  {
   VAR_14 = VAR_11 + (VAR_12 - VAR_11) * VAR_20 / VAR_19;
   VAR_17 = FUNC_2(VAR_14) * VAR_13;
   VAR_18 = FUNC_5(VAR_14) * VAR_13;
   FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_17, VAR_5 + VAR_18, VAR_4 + VAR_15, VAR_5 + VAR_16, VAR_10);
   VAR_15 = VAR_17;
   VAR_16 = VAR_18;
  }

  FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_6, VAR_5 + VAR_7, VAR_4 + VAR_15, VAR_5 + VAR_16, VAR_10);
 }
 else
 {
  VAR_15 = VAR_6;
  VAR_16 = VAR_7;
  for (VAR_20 = 1; VAR_20 < VAR_19; VAR_20++)
  {
   VAR_14 = VAR_11 + (VAR_12 - VAR_11) * VAR_20 / VAR_19;
   VAR_17 = FUNC_2(VAR_14) * VAR_13;
   VAR_18 = FUNC_5(VAR_14) * VAR_13;
   FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_15, VAR_5 + VAR_16, VAR_4 + VAR_17, VAR_5 + VAR_18, VAR_10);
   VAR_15 = VAR_17;
   VAR_16 = VAR_18;
  }

  FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_15, VAR_5 + VAR_16, VAR_4 + VAR_8, VAR_5 + VAR_9, VAR_10);
 }
}
