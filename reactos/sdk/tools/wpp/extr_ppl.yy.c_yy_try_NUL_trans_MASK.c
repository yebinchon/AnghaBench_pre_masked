
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t yy_state_type ;
typedef size_t YY_CHAR ;


 scalar_t__* VAR_0 ;
 size_t* VAR_1 ;
 char* VAR_2 ;
 size_t* VAR_3 ;
 scalar_t__* VAR_4 ;
 char* VAR_5 ;
 size_t VAR_6 ;
 size_t* VAR_7 ;
 size_t* VAR_8 ;

__attribute__((used)) static yy_state_type FUNC_0 (yy_state_type VAR_9 )
{
 register int VAR_10;
     register char *VAR_11 = (VAR_2);

 register YY_CHAR VAR_12 = 1;
 if ( VAR_0[VAR_9] )
  {
  (VAR_6) = VAR_9;
  (VAR_5) = VAR_11;
  }
 while ( VAR_3[VAR_1[VAR_9] + VAR_12] != VAR_9 )
  {
  VAR_9 = (int) VAR_4[VAR_9];
  if ( VAR_9 >= 416 )
   VAR_12 = VAR_7[(unsigned int) VAR_12];
  }
 VAR_9 = VAR_8[VAR_1[VAR_9] + (unsigned int) VAR_12];
 VAR_10 = (VAR_9 == 415);

 return VAR_10 ? 0 : VAR_9;
}
