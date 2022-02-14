
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct element {int dummy; } ;
typedef int gfp_t ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 struct element* FUNC_0 (int ,int*,size_t) ;
 scalar_t__ FUNC_1 (int const,int*,size_t) ;
 int* FUNC_2 (int const,int const*,size_t) ;
 scalar_t__ FUNC_3 (struct element const*,struct element const*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int const*,size_t,int ) ;
 int FUNC_6 (int const*,int*,int) ;
 int FUNC_7 (int*,int const*,int const) ;

__attribute__((used)) static size_t FUNC_8(const u8 *VAR_5, size_t VAR_6,
      const u8 *VAR_7, size_t VAR_8,
      u8 *VAR_9, gfp_t VAR_10)
{
 u8 *VAR_11, *VAR_12;
 const u8 *VAR_13, *VAR_14;
 const struct element *VAR_15;
 u8 *VAR_16;




 VAR_16 = FUNC_5(VAR_7, VAR_8, VAR_10);
 if (!VAR_16)
  return 0;

 VAR_11 = &VAR_9[0];


 VAR_14 = FUNC_2(VAR_3, VAR_16, VAR_8);
 if (VAR_14) {
  FUNC_7(VAR_11, VAR_14, VAR_14[1] + 2);
  VAR_11 += (VAR_14[1] + 2);
 }


 VAR_15 =
  FUNC_0(VAR_1,
           VAR_16, VAR_8);




 VAR_13 = FUNC_2(VAR_3, VAR_5, VAR_6);
 VAR_13 = (VAR_13) ? VAR_13 + VAR_13[1] + 2 : VAR_5;

 while (VAR_13 + VAR_13[1] + 2 - VAR_5 <= VAR_6) {
  if (VAR_13[0] == 0) {
   VAR_13++;
   continue;
  }

  if (VAR_13[0] == VAR_0)
   VAR_12 = (u8 *)FUNC_1(VAR_13[2], VAR_16,
        VAR_8);
  else
   VAR_12 = (u8 *)FUNC_2(VAR_13[0], VAR_16,
           VAR_8);

  if (!VAR_12) {
   const struct element *VAR_17 = (void *)VAR_13;


   if (FUNC_3(VAR_17,
         VAR_15)) {
    FUNC_7(VAR_11, VAR_13, VAR_13[1] + 2);
    VAR_11 += VAR_13[1] + 2;
   }
  } else {







   if (VAR_13[0] == VAR_4) {
    if (!FUNC_6(VAR_13 + 2, VAR_12 + 2, 5)) {



     FUNC_7(VAR_11, VAR_12, VAR_12[1] + 2);
     VAR_11 += VAR_12[1] + 2;
     VAR_12[0] = VAR_3;
    } else {
     FUNC_7(VAR_11, VAR_13, VAR_13[1] + 2);
     VAR_11 += VAR_13[1] + 2;
    }
   } else {

    FUNC_7(VAR_11, VAR_12, VAR_12[1] + 2);
    VAR_11 += VAR_12[1] + 2;
    VAR_12[0] = VAR_3;
   }
  }

  if (VAR_13 + VAR_13[1] + 2 - VAR_5 == VAR_6)
   break;

  VAR_13 += VAR_13[1] + 2;
 }




 VAR_14 = VAR_16;
 while (VAR_14 + VAR_14[1] + 2 - VAR_16 <= VAR_8) {
  if (!(VAR_14[0] == VAR_2 ||
        VAR_14[0] == VAR_3)) {
   FUNC_7(VAR_11, VAR_14, VAR_14[1] + 2);
   VAR_11 += VAR_14[1] + 2;
  }
  if (VAR_14 + VAR_14[1] + 2 - VAR_16 == VAR_8)
   break;
  VAR_14 += VAR_14[1] + 2;
 }

 FUNC_4(VAR_16);
 return VAR_11 - VAR_9;
}
