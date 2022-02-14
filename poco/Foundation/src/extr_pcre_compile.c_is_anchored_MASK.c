
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t pcre_uchar ;
struct TYPE_3__ {unsigned int backref_map; scalar_t__ had_pruneorskip; } ;
typedef TYPE_1__ compile_data ;
typedef void* BOOL ;


 void* VAR_0 ;
 size_t FUNC_0 (size_t const*,int) ;
 int FUNC_1 (size_t const*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int* FUNC_2 (int ) ;
 void* VAR_23 ;
 size_t* FUNC_3 (size_t const*,void*) ;

__attribute__((used)) static BOOL
FUNC_4(register const pcre_uchar *VAR_24, unsigned int VAR_25,
  compile_data *VAR_26, int VAR_27)
{
do {
   const pcre_uchar *VAR_28 = FUNC_3(
     VAR_24 + FUNC_2(VAR_22)[*VAR_24], VAR_0);
   register int VAR_29 = *VAR_28;



   if (VAR_29 == VAR_5 || VAR_29 == VAR_6 ||
       VAR_29 == VAR_13 || VAR_29 == VAR_14)
     {
     if (!FUNC_4(VAR_28, VAR_25, VAR_26, VAR_27)) return VAR_0;
     }



   else if (VAR_29 == VAR_7 || VAR_29 == VAR_8 ||
            VAR_29 == VAR_15 || VAR_29 == VAR_16)
     {
     int VAR_30 = FUNC_1(VAR_28, 1+VAR_1);
     int VAR_31 = VAR_25 | ((VAR_30 < 32)? (1 << VAR_30) : 1);
     if (!FUNC_4(VAR_28, VAR_31, VAR_26, VAR_27)) return VAR_0;
     }



   else if (VAR_29 == VAR_4)
     {
     if (!FUNC_4(VAR_28, VAR_25, VAR_26, VAR_27)) return VAR_0;
     }


   else if (VAR_29 == VAR_10)
     {
     if (VAR_28[FUNC_0(VAR_28,1)] != VAR_3) return VAR_0;
     if (!FUNC_4(VAR_28, VAR_25, VAR_26, VAR_27)) return VAR_0;
     }



   else if (VAR_29 == VAR_11 || VAR_29 == VAR_12)
     {
     if (!FUNC_4(VAR_28, VAR_25, VAR_26, VAR_27 + 1))
       return VAR_0;
     }





   else if ((VAR_29 == VAR_21 || VAR_29 == VAR_19 ||
             VAR_29 == VAR_20))
     {
     if (VAR_28[1] != VAR_2 || (VAR_25 & VAR_26->backref_map) != 0 ||
         VAR_27 > 0 || VAR_26->had_pruneorskip)
       return VAR_0;
     }



   else if (VAR_29 != VAR_17 && VAR_29 != VAR_18 && VAR_29 != VAR_9) return VAR_0;

   VAR_24 += FUNC_0(VAR_24, 1);
   }
while (*VAR_24 == VAR_3);
return VAR_23;
}
