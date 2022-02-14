
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int strip_num; struct TYPE_4__** v1_codebook; struct TYPE_4__** v4_codebook; } ;
typedef TYPE_1__ cinepak_info ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( cinepak_info *VAR_0 )
{
    unsigned int VAR_1;

    for( VAR_1=0; VAR_1<VAR_0->strip_num; VAR_1++ )
    {
        FUNC_0(VAR_0->v4_codebook[VAR_1]);
        FUNC_0(VAR_0->v1_codebook[VAR_1]);
    }
    FUNC_0( VAR_0 );
}
