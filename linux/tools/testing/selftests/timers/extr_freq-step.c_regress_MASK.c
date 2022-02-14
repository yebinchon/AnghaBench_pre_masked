
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {double time; double offset; } ;


 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(struct sample *VAR_0, int VAR_1, double *VAR_2,
      double *VAR_3, double *VAR_4, double *VAR_5)
{
 double VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_9 = 0.0, VAR_10 = 0.0, VAR_11 = 0.0, VAR_12 = 0.0;

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_6 = VAR_0[VAR_14].time;
  VAR_7 = VAR_0[VAR_14].offset;

  VAR_9 += VAR_6;
  VAR_10 += VAR_7;
  VAR_11 += VAR_6 * VAR_7;
  VAR_12 += VAR_6 * VAR_6;
 }

 *VAR_3 = (VAR_11 - VAR_9 * VAR_10 / VAR_1) / (VAR_12 - VAR_9 * VAR_9 / VAR_1);
 *VAR_2 = (VAR_10 - *VAR_3 * VAR_9) / VAR_1;

 *VAR_5 = 0.0, VAR_13 = 0.0;

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_6 = VAR_0[VAR_14].time;
  VAR_7 = VAR_0[VAR_14].offset;
  VAR_8 = FUNC_0(VAR_6 * *VAR_3 + *VAR_2 - VAR_7);
  if (*VAR_5 < VAR_8)
   *VAR_5 = VAR_8;
  VAR_13 += VAR_8 * VAR_8;
 }

 *VAR_4 = FUNC_1(VAR_13 / VAR_1);
}
