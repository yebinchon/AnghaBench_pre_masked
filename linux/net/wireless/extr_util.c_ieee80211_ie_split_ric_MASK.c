
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 int FUNC_0 (size_t const*,int,size_t const,int) ;
 size_t FUNC_1 (size_t const*,size_t,size_t) ;

size_t FUNC_2(const u8 *VAR_2, size_t VAR_3,
         const u8 *VAR_4, int VAR_5,
         const u8 *VAR_6, int VAR_7,
         size_t VAR_8)
{
 size_t VAR_9 = VAR_8;

 while (VAR_9 < VAR_3) {
  u8 VAR_10 = 0;

  if (VAR_2[VAR_9] == VAR_0)
   VAR_10 = 2;
  if ((VAR_9 + VAR_10) >= VAR_3)
   break;

  if (!FUNC_0(VAR_4, VAR_5, VAR_2[VAR_9 + VAR_10],
       VAR_2[VAR_9] == VAR_0))
   break;

  if (VAR_2[VAR_9] == VAR_1 && VAR_7) {
   VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_9);

   while (VAR_9 < VAR_3) {
    if (VAR_2[VAR_9] == VAR_0)
     VAR_10 = 2;
    else
     VAR_10 = 0;

    if ((VAR_9 + VAR_10) >= VAR_3)
     break;

    if (!FUNC_0(VAR_6,
         VAR_7,
         VAR_2[VAR_9 + VAR_10],
         VAR_10 == 2))
     VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_9);
    else
     break;
   }
  } else {
   VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_9);
  }
 }

 return VAR_9;
}
