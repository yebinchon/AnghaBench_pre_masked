
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int UChar ;



__attribute__((used)) static inline int FUNC_0 ( const UChar *VAR_0, UInt32 *VAR_1 ) {
 int VAR_2;

 VAR_2 = 0;
 *VAR_1 = 0;

 while ( (VAR_0[VAR_2] & 0x80) && (VAR_2 < 3) ) {
  *VAR_1 <<= 7;
  *VAR_1 |= VAR_0[VAR_2] & 0x7f;
  VAR_2++;
 }
 *VAR_1 <<= 7;
 *VAR_1 |= VAR_0[VAR_2] & 0x7f;
 VAR_2++;

 return VAR_2;
}
