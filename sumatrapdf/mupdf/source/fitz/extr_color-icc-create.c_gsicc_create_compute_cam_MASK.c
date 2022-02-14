
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int *,float*,int,int,float*,int,int,float*) ;
 int FUNC_1 (float*,int ,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_3, float VAR_4[], float *VAR_5)
{
 float VAR_6[] = { 0.7328f, 0.4296f, -0.1624f, -0.7036f, 1.6975f, 0.0061f, 0.003f, 0.0136f, 0.9834f };
 float VAR_7[] = { 1.0961f, -0.2789f, 0.1827f, 0.4544f, 0.4735f, 0.0721f, -0.0096f, -0.0057f, 1.0153f };
 float VAR_8[9];
 float VAR_9[9];
 float VAR_10[3], VAR_11[3];
 int VAR_12;
 float VAR_13[3] = { VAR_0, VAR_1, VAR_2 };

 FUNC_0(VAR_3, VAR_6, 3, 3, VAR_4, 3, 1, VAR_10);
 FUNC_0(VAR_3, VAR_6, 3, 3, VAR_13, 3, 1, VAR_11);
 FUNC_1(&(VAR_8[0]), 0, sizeof(float) * 9);

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
 {
  if (VAR_10[VAR_12] > 0)
   VAR_8[VAR_12 * 3 + VAR_12] = VAR_11[VAR_12] / VAR_10[VAR_12];
  else
   VAR_8[VAR_12 * 3 + VAR_12] = 1;
 }
 FUNC_0(VAR_3, &(VAR_8[0]), 3, 3, VAR_6, 3, 3, VAR_9);
 FUNC_0(VAR_3, &(VAR_7[0]), 3, 3, VAR_9, 3, 3, VAR_5);
}
