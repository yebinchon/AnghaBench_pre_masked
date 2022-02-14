
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int objtable; scalar_t__ record_stream; TYPE_1__* record_graphics; int hemf; int preserve_hemf; int record_dc; int comment_data; } ;
struct TYPE_5__ {int busy; int * image; } ;
typedef TYPE_2__ GpMetafile ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,unsigned int) ;

void FUNC_7(GpMetafile *VAR_1)
{
    unsigned int VAR_2;

    FUNC_5(VAR_1->comment_data);
    FUNC_2(FUNC_1(VAR_1->record_dc));
    if (!VAR_1->preserve_hemf)
        FUNC_2(VAR_1->hemf);
    if (VAR_1->record_graphics)
    {
        FUNC_4("metafile closed while recording\n");

        VAR_1->record_graphics->image = ((void*)0);
        VAR_1->record_graphics->busy = VAR_0;
    }

    if (VAR_1->record_stream)
        FUNC_3(VAR_1->record_stream);

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->objtable); VAR_2++)
        FUNC_6(VAR_1, VAR_2);
}
