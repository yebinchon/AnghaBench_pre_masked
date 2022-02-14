
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int UChar ;



__attribute__((used)) static inline int FUNC_0 ( const UInt32 VAR_0, UChar *VAR_1 ) {
 int VAR_2;
 UInt32 VAR_3;
 UChar *VAR_4, *VAR_5;


 if ( ! VAR_1 || VAR_0 > 0xfffffffUL )
  return 0;

 if ( VAR_0 > 0x1fffffUL )
  VAR_2 = 4;
 else if ( VAR_0 > 0x3fffUL )
  VAR_2 = 3;
 else if ( VAR_0 > 0x7fUL )
  VAR_2 = 2;
 else
  VAR_2 = 1;

 VAR_3 = VAR_0;
 VAR_5 = VAR_4 = VAR_1 + (VAR_2 - 1);

 while ( VAR_4 >= VAR_1 ) {
  *VAR_4 = (VAR_3 & 0x7fUL);
  if ( VAR_4 < VAR_5 )
   *VAR_4 |= 0x80UL;
  VAR_4--;
  VAR_3 >>= 7;
 }

 return VAR_2;
}
