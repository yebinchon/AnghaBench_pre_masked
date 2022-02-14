
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int UBreakIterator ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int32_t
FUNC_1(UBreakIterator *VAR_1, int32_t VAR_2, unsigned char *VAR_3, int32_t VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;

 while ( VAR_2 ) {
  VAR_5 = FUNC_0(VAR_1);

  if ( VAR_0 == VAR_5 ) {
   break;
  }
  VAR_6 = VAR_5;
  VAR_2--;
 }

 return VAR_6;
}
