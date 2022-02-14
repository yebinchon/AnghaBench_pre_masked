
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int invert; int regex; } ;
typedef TYPE_1__ rofi_int_matcher ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ,int *) ;

int FUNC_1 ( rofi_int_matcher* const *VAR_1, const char *VAR_2 )
{
    int VAR_3 = VAR_0;

    if ( VAR_1 ) {
        for ( int VAR_4 = 0; VAR_3 && VAR_1[VAR_4]; VAR_4++ ) {
            VAR_3 = FUNC_0 ( VAR_1[VAR_4]->regex, VAR_2, 0, ((void*)0) );
            VAR_3 ^= VAR_1[VAR_4]->invert;
        }
    }
    return VAR_3;
}
