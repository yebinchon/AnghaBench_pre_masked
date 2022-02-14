
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ strip_num; } ;
typedef TYPE_1__ cinepak_info ;


 TYPE_1__* FUNC_0 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static cinepak_info *FUNC_1(void)
{
    cinepak_info *VAR_2;
    int VAR_3;

    VAR_2 = FUNC_0( sizeof (cinepak_info) );
    if( !VAR_2 )
        return ((void*)0);
    VAR_2->strip_num = 0;

    if(VAR_1 == ((void*)0))
    {
        VAR_1 = VAR_0+512;
        for(VAR_3 = -512; VAR_3 < 512; VAR_3++)
            VAR_1[VAR_3] = (VAR_3 < 0 ? 0 : (VAR_3 > 255 ? 255 : VAR_3));
    }

    return VAR_2;
}
