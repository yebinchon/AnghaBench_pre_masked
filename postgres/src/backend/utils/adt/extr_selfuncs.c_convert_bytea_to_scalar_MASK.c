
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bytea ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 double FUNC_4 (unsigned char*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(Datum VAR_0,
      double *VAR_1,
      Datum VAR_2,
      double *VAR_3,
      Datum VAR_4,
      double *VAR_5)
{
 bytea *VAR_6 = FUNC_0(VAR_0);
 bytea *VAR_7 = FUNC_0(VAR_2);
 bytea *VAR_8 = FUNC_0(VAR_4);
 int VAR_9,
    VAR_10,
    VAR_11 = FUNC_3(VAR_6),
    VAR_12 = FUNC_3(VAR_7),
    VAR_13 = FUNC_3(VAR_8),
    VAR_14,
    VAR_15;
 unsigned char *VAR_16 = (unsigned char *) FUNC_2(VAR_6);
 unsigned char *VAR_17 = (unsigned char *) FUNC_2(VAR_7);
 unsigned char *VAR_18 = (unsigned char *) FUNC_2(VAR_8);




 VAR_9 = 0;
 VAR_10 = 255;




 VAR_15 = FUNC_1(FUNC_1(VAR_11, VAR_12), VAR_13);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
 {
  if (*VAR_17 != *VAR_18 || *VAR_17 != *VAR_16)
   break;
  VAR_17++, VAR_18++, VAR_16++;
  VAR_12--, VAR_13--, VAR_11--;
 }




 *VAR_1 = FUNC_4(VAR_16, VAR_11, VAR_9, VAR_10);
 *VAR_3 = FUNC_4(VAR_17, VAR_12, VAR_9, VAR_10);
 *VAR_5 = FUNC_4(VAR_18, VAR_13, VAR_9, VAR_10);
}
