
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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (void*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int,int *) ;

int32_t FUNC_5(const UChar *VAR_3, int32_t VAR_4, int VAR_5[], int VAR_6 )
{
 unsigned char VAR_7[VAR_1];
 UErrorCode VAR_8 = VAR_2;
 int VAR_9, VAR_10;
 UBreakIterator* VAR_11;

 VAR_11 = FUNC_1((void*)VAR_7, &VAR_8 );

 if( FUNC_0(VAR_8) ) {
  return -1;
 }

 FUNC_4(VAR_11, VAR_3, VAR_4, &VAR_8);

 VAR_10 = 0;

 for ( VAR_9 = 0; VAR_10 != VAR_0; ) {

  VAR_10 = FUNC_3(VAR_11);

  if ( VAR_10 != VAR_0 ) {

   if ( ((void*)0) != VAR_5 && VAR_9 < VAR_6 ) {
    VAR_5[VAR_9] = VAR_10;
   }

   VAR_9++;
  }
 }

 FUNC_2(VAR_11);

 return VAR_9;
}
