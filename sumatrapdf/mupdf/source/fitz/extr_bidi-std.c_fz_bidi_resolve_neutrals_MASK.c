
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_bidi_level ;
typedef scalar_t__ fz_bidi_chartype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__*,size_t,size_t,scalar_t__) ;
 int** VAR_6 ;

void FUNC_6(fz_bidi_level VAR_7, fz_bidi_chartype *VAR_8, const fz_bidi_level *VAR_9, size_t VAR_10)
{

 int VAR_11 = FUNC_4(VAR_7) ? VAR_5 : VAR_4;
 fz_bidi_chartype VAR_12;
 size_t VAR_13;
 fz_bidi_chartype VAR_14;

 size_t VAR_15 = 0;
 fz_bidi_level VAR_16 = VAR_7;

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
 {
  int VAR_17;
  fz_bidi_chartype VAR_18;


  if (VAR_8[VAR_13] == VAR_0)
  {

   if (VAR_15)
    VAR_15++;


   continue;
  }

  FUNC_0(VAR_8[VAR_13] < 5);
  VAR_12 = VAR_8[VAR_13];

  VAR_17 = VAR_3[VAR_11][VAR_12];


  VAR_14 = FUNC_2(VAR_17, VAR_16);
  if (VAR_14 != VAR_1)
  {
   FUNC_5(VAR_8, VAR_15, VAR_13, VAR_14);
   VAR_15 = 0;
  }


  VAR_18 = FUNC_3(VAR_17);
  if (VAR_18 != VAR_1)
   VAR_8[VAR_13] = VAR_18;

  if (VAR_2 & VAR_17)
   VAR_15++;

  VAR_11 = VAR_6[VAR_11][VAR_12];
  VAR_16 = VAR_9[VAR_13];
 }


 VAR_12 = FUNC_1(VAR_16);


 VAR_14 = FUNC_2(VAR_3[VAR_11][VAR_12], VAR_16);
 if (VAR_14 != VAR_1)
  FUNC_5(VAR_8, VAR_15, VAR_13, VAR_14);
}
