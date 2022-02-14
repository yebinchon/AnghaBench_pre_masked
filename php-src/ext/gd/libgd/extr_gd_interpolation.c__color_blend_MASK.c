
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int const) ;
 int const FUNC_1 (int const) ;
 int const FUNC_2 (int const) ;
 int const FUNC_3 (int const) ;

__attribute__((used)) static inline int FUNC_4 (const int VAR_3, const int VAR_4)
{
    const int VAR_5 = FUNC_0(VAR_4);

    if( VAR_5 == VAR_1 ) {
  return VAR_4;
 } else {
  const int VAR_6 = FUNC_0(VAR_3);

  if( VAR_5 == VAR_2 ) return VAR_3;
  if( VAR_6 == VAR_2 ) {
   return VAR_4;
  } else {
   register int VAR_7, VAR_8, VAR_9, VAR_10;
   const int VAR_11 = VAR_2 - VAR_5;
   const int VAR_12 = (VAR_2 - VAR_6) * VAR_5 / VAR_0;
   const int VAR_13 = VAR_11 + VAR_12;

   VAR_7 = VAR_5 * VAR_6 / VAR_0;

   VAR_8 = (FUNC_3(VAR_4) * VAR_11
       + FUNC_3(VAR_3) * VAR_12) / VAR_13;
   VAR_9 = (FUNC_2(VAR_4) * VAR_11
       + FUNC_2(VAR_3) * VAR_12) / VAR_13;
   VAR_10 = (FUNC_1(VAR_4) * VAR_11
       + FUNC_1(VAR_3) * VAR_12) / VAR_13;

   return ((VAR_7 << 24) + (VAR_8 << 16) + (VAR_9 << 8) + VAR_10);
  }
 }
}
