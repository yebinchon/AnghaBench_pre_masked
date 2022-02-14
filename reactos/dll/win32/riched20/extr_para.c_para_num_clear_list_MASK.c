
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* next_para; int para_num; int fmt; } ;
struct TYPE_6__ {TYPE_3__ para; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ member; } ;
typedef int PARAFORMAT2 ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_Paragraph ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int const*) ;

__attribute__((used)) static void FUNC_4( ME_TextEditor *VAR_1, ME_Paragraph *VAR_2, const PARAFORMAT2 *VAR_3 )
{
    do
    {
        FUNC_1(VAR_1, FUNC_0(VAR_2));
        FUNC_2( &VAR_2->para_num );
        if (VAR_2->next_para->type != VAR_0) break;
        VAR_2 = &VAR_2->next_para->member.para;
    } while (FUNC_3( &VAR_2->fmt, VAR_3 ));
}
