
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int UBreakIterator ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int32_t FUNC_3(UBreakIterator* VAR_1, int32_t VAR_2)
{
 int32_t VAR_3;
 int32_t (*VAR_4)(UBreakIterator* VAR_5);
 int VAR_6;

 if ( 0 == VAR_2 ) {
  return 0;
 }

 if ( VAR_2 < 0 ) {
  VAR_4 = FUNC_2;
  FUNC_0(VAR_1);
  VAR_6 = 1;
 }
 else {
  VAR_4 = FUNC_1;
  VAR_6 = -1;
 }

 VAR_3 = 0;

 while ( VAR_3 != VAR_0 && VAR_2 != 0 ) {

  VAR_3 = VAR_4(VAR_1);

  if ( VAR_0 != VAR_3 ) {
   VAR_2 += VAR_6;
  }
 }

 if ( VAR_2 != 0 ) {
  return -1;
 }

 return VAR_3;
}
