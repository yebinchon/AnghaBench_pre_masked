
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_bidi_level ;
typedef scalar_t__ fz_bidi_chartype ;
typedef int fz_bidi_action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int** VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,size_t,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,size_t,size_t,scalar_t__) ;
 int** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_7(fz_context *VAR_7, fz_bidi_level VAR_8, fz_bidi_chartype *VAR_9, fz_bidi_level *VAR_10, size_t VAR_11)
{
 int VAR_12 = FUNC_5(VAR_8) ? VAR_6 : VAR_5;
 fz_bidi_chartype VAR_13;
 size_t VAR_14;
 fz_bidi_action VAR_15;
 fz_bidi_chartype VAR_16;
 fz_bidi_chartype VAR_17;

 fz_bidi_level VAR_18 = VAR_8;

 size_t VAR_19 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
 {
  if (VAR_9[VAR_14] > VAR_0) {
   FUNC_2(VAR_7, "error: pcls[%zu] > BN (%d)\n", VAR_14, VAR_9[VAR_14]);
  }


  if (VAR_9[VAR_14] == VAR_0)
  {

   VAR_10[VAR_14] = VAR_18;


   if (VAR_14 + 1 == VAR_11 && VAR_18 != VAR_8)
   {


    VAR_9[VAR_14] = FUNC_1(VAR_18);
   }
   else if (VAR_14 + 1 < VAR_11 && VAR_18 != VAR_10[VAR_14+1] && VAR_9[VAR_14+1] != VAR_0)
   {


    int VAR_20 = VAR_10[VAR_14+1];
    if (VAR_18 > VAR_20) {
     VAR_20 = VAR_18;
    }
    VAR_10[VAR_14] = VAR_20;


    VAR_9[VAR_14] = FUNC_1(VAR_20);
    VAR_18 = VAR_10[VAR_14+1];
   }
   else
   {

    if (VAR_19)
    {
     VAR_19++;
    }
    continue;
   }
  }

  FUNC_0(VAR_9[VAR_14] <= VAR_0);
  VAR_13 = VAR_9[VAR_14];

  VAR_15 = VAR_3[VAR_12][VAR_13];


  VAR_16 = FUNC_3(VAR_15);
  if (VAR_16 != VAR_2)
  {
   FUNC_6(VAR_9, VAR_19, VAR_14, VAR_16);
   VAR_19 = 0;
  }


  VAR_17 = FUNC_4(VAR_15);
  if (VAR_17 != VAR_2)
   VAR_9[VAR_14] = VAR_17;


  if (VAR_1 & VAR_15)
   VAR_19++;

  VAR_12 = VAR_4[VAR_12][VAR_13];
 }



 VAR_13 = FUNC_1(VAR_18);


 VAR_16 = FUNC_3(VAR_3[VAR_12][VAR_13]);
 if (VAR_16 != VAR_2)
  FUNC_6(VAR_9, VAR_19, VAR_14, VAR_16);
}
