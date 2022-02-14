
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum CharClass { ____Placeholder_CharClass } CharClass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0 ( enum CharClass VAR_7, enum CharClass VAR_8 )
{
    if ( VAR_7 == VAR_3 && VAR_8 != VAR_3 ) {
        return VAR_6;
    }
    if ( ( VAR_7 == VAR_2 && VAR_8 == VAR_5 ) ||
         ( VAR_7 != VAR_1 && VAR_8 == VAR_1 ) ) {
        return VAR_0;
    }
    if ( VAR_8 == VAR_3 ) {
        return VAR_4;
    }
    return 0;
}
