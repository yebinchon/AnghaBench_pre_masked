
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int UBreakIterator ;


 int FUNC_0 (unsigned char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int32_t
FUNC_2(UBreakIterator *VAR_1, int32_t VAR_2, unsigned char *VAR_3, int32_t VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7, VAR_8;
 int VAR_9 = 0;

 while ( 1 ) {
  VAR_5 = FUNC_1(VAR_1);

  if ( VAR_0 == VAR_5 ) {
   break;
  }

  for ( VAR_7 = VAR_6; VAR_7 < VAR_5; ) {
   VAR_9++;
   VAR_8 = VAR_7;
   FUNC_0(VAR_3, VAR_7, VAR_4);

   if ( VAR_8 == VAR_7 ) {

    VAR_2 = 0;
    break;
   }
  }


  if ( VAR_9 > VAR_2 ) {
   break;
  }

  VAR_6 = VAR_7;
 }

 return VAR_6;
}
