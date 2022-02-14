
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int on_disk; TYPE_1__* emh; } ;
struct TYPE_7__ {scalar_t__ iType; scalar_t__ dSignature; int nBytes; } ;
typedef int HENHMETAFILE ;
typedef TYPE_1__ ENHMETAHEADER ;
typedef TYPE_2__ ENHMETAFILEOBJ ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;

HENHMETAFILE FUNC_6(ENHMETAHEADER *VAR_4, BOOL VAR_5 )
{
    HENHMETAFILE VAR_6;
    ENHMETAFILEOBJ *VAR_7;

    if (VAR_4->iType != VAR_0)
    {
        FUNC_3(VAR_2);
        return 0;
    }
    if (VAR_4->dSignature != VAR_1 ||
        (VAR_4->nBytes & 3))
    {
        FUNC_4("Invalid emf header type 0x%08x sig 0x%08x.\n",
             VAR_4->iType, VAR_4->dSignature);
        return 0;
    }

    if (!(VAR_7 = FUNC_1( FUNC_0(), 0, sizeof(*VAR_7) ))) return 0;

    VAR_7->emh = VAR_4;
    VAR_7->on_disk = VAR_5;

    if (!(VAR_6 = FUNC_5( VAR_7, VAR_3, ((void*)0) )))
        FUNC_2( FUNC_0(), 0, VAR_7 );
    return VAR_6;
}
