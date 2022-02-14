
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef float float4 ;
typedef int TrgmBound ;


 int FUNC_0 (int ) ;
 float FUNC_1 (int,int,int) ;
 float FUNC_2 (float,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 double VAR_4 ;
 double VAR_5 ;

__attribute__((used)) static float4
FUNC_6(int *VAR_6,
      bool *VAR_7,
      int VAR_8,
      int VAR_9,
      int VAR_10,
      uint8 VAR_11,
      TrgmBound *VAR_12)
{
 int *VAR_13,
    VAR_14,
    VAR_15 = 0,
    VAR_16 = 0,
    VAR_17 = -1,
    VAR_18;
 float4 VAR_19,
    VAR_20 = 0.0f;
 double VAR_21;

 FUNC_0(VAR_12 || !(VAR_11 & VAR_3));


 VAR_21 = (VAR_11 & VAR_3) ?
  VAR_4 :
  VAR_5;






 VAR_18 = (VAR_11 & VAR_3) ? 0 : -1;


 VAR_13 = (int *) FUNC_4(sizeof(int) * VAR_10);
 FUNC_3(VAR_13, -1, sizeof(int) * VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
 {

  int VAR_22 = VAR_6[VAR_14];


  if (VAR_18 >= 0 || VAR_7[VAR_22])
  {
   if (VAR_13[VAR_22] < 0)
   {
    VAR_15++;
    if (VAR_7[VAR_22])
     VAR_16++;
   }
   VAR_13[VAR_22] = VAR_14;
  }






  if ((VAR_11 & VAR_3) ? (VAR_12[VAR_14] & VAR_1)
   : VAR_7[VAR_22])
  {
   int VAR_23,
      VAR_24,
      VAR_25,
      VAR_26;

   VAR_17 = VAR_14;
   if (VAR_18 == -1)
   {
    VAR_18 = VAR_14;
    VAR_15 = 1;
   }

   VAR_19 = FUNC_1(VAR_16, VAR_8, VAR_15);


   VAR_26 = VAR_16;
   VAR_24 = VAR_15;
   VAR_23 = VAR_18;
   for (VAR_25 = VAR_18; VAR_25 <= VAR_17; VAR_25++)
   {
    float VAR_27;
    int VAR_28;






    if (!(VAR_11 & VAR_3)
     || (VAR_12[VAR_25] & VAR_0))
    {
     VAR_27 = FUNC_1(VAR_26, VAR_8, VAR_24);
     if (VAR_27 > VAR_19)
     {
      VAR_19 = VAR_27;
      VAR_15 = VAR_24;
      VAR_18 = VAR_25;
      VAR_16 = VAR_26;
     }






     if ((VAR_11 & VAR_2)
      && VAR_19 >= VAR_21)
      break;
    }

    VAR_28 = VAR_6[VAR_25];
    if (VAR_13[VAR_28] == VAR_25)
    {
     VAR_24--;
     if (VAR_7[VAR_28])
      VAR_26--;
    }
   }

   VAR_20 = FUNC_2(VAR_20, VAR_19);





   if ((VAR_11 & VAR_2) && VAR_20 >= VAR_21)
    break;

   for (VAR_25 = VAR_23; VAR_25 < VAR_18; VAR_25++)
   {
    int VAR_29;

    VAR_29 = VAR_6[VAR_25];
    if (VAR_13[VAR_29] == VAR_25)
     VAR_13[VAR_29] = -1;
   }
  }
 }

 FUNC_5(VAR_13);

 return VAR_20;
}
