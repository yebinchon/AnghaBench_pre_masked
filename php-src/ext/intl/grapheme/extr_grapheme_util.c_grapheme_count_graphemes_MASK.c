
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int UErrorCode ;
typedef int UChar ;
typedef int UBreakIterator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,int *) ;

int32_t FUNC_2(UBreakIterator *VAR_2, UChar *VAR_3, int32_t VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 UErrorCode VAR_7 = VAR_1;

 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_7);

 do {

  VAR_6 = FUNC_0(VAR_2);

  if ( VAR_0 != VAR_6 ) {
   VAR_5++;
  }

 } while ( VAR_0 != VAR_6 );

 return VAR_5;
}
