
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* yytext_ptr ;
typedef size_t yy_state_type ;
typedef size_t YY_CHAR ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (char) ;
 scalar_t__* VAR_1 ;
 size_t* VAR_2 ;
 char* VAR_3 ;
 size_t* VAR_4 ;
 scalar_t__* VAR_5 ;
 int* VAR_6 ;
 char* VAR_7 ;
 size_t VAR_8 ;
 size_t* VAR_9 ;
 size_t* VAR_10 ;
 size_t VAR_11 ;

__attribute__((used)) static yy_state_type FUNC_2 (void)
{
 register yy_state_type VAR_12;
 register char *VAR_13;

 VAR_12 = (VAR_11);
 VAR_12 += FUNC_0();

 for ( VAR_13 = (yytext_ptr) + VAR_0; VAR_13 < (VAR_3); ++VAR_13 )
  {
  register YY_CHAR VAR_14 = (*VAR_13 ? VAR_6[FUNC_1(*VAR_13)] : 1);
  if ( VAR_1[VAR_12] )
   {
   (VAR_8) = VAR_12;
   (VAR_7) = VAR_13;
   }
  while ( VAR_4[VAR_2[VAR_12] + VAR_14] != VAR_12 )
   {
   VAR_12 = (int) VAR_5[VAR_12];
   if ( VAR_12 >= 210 )
    VAR_14 = VAR_9[(unsigned int) VAR_14];
   }
  VAR_12 = VAR_10[VAR_2[VAR_12] + (unsigned int) VAR_14];
  }

 return VAR_12;
}
