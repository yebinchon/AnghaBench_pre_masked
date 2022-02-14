
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addr; int trailer; TYPE_1__* prev; scalar_t__ start_offset; TYPE_2__* entries; } ;
struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
typedef TYPE_3__* HPDF_Xref ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_5 (HPDF_Xref VAR_1,
               HPDF_Stream VAR_2)
{
    HPDF_UINT VAR_3 = VAR_1->entries->count + VAR_1->start_offset;
    HPDF_STATUS VAR_4;

    FUNC_2 ((" WriteTrailer\n"));

    if ((VAR_4 = FUNC_0 (VAR_1->trailer, "Size", VAR_3))
            != VAR_0)
        return VAR_4;

    if (VAR_1->prev)
        if ((VAR_4 = FUNC_0 (VAR_1->trailer, "Prev",
                VAR_1->prev->addr)) != VAR_0)
            return VAR_4;

    if ((VAR_4 = FUNC_3 (VAR_2, "trailer\012")) != VAR_0)
        return VAR_4;

    if ((VAR_4 = FUNC_1 (VAR_1->trailer, VAR_2, ((void*)0))) != VAR_0)
        return VAR_4;

    if ((VAR_4 = FUNC_3 (VAR_2, "\012startxref\012")) != VAR_0)
        return VAR_4;

    if ((VAR_4 = FUNC_4 (VAR_2, VAR_1->addr)) != VAR_0)
        return VAR_4;

    if ((VAR_4 = FUNC_3 (VAR_2, "\012%%EOF\012")) != VAR_0)
        return VAR_4;

    return VAR_0;
}
