
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int hdr; } ;
struct TYPE_11__ {int db; } ;
typedef TYPE_1__ MSIWHEREVIEW ;
typedef TYPE_2__ MSIRECORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tagMSIVIEW*,scalar_t__,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,struct tagMSIVIEW*,scalar_t__,TYPE_2__**) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static UINT FUNC_7( struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2 )
{
    MSIWHEREVIEW *VAR_3 = (MSIWHEREVIEW *)VAR_1;
    UINT VAR_4, VAR_5, VAR_6, VAR_7 = 0;
    MSIRECORD *VAR_8;


    VAR_4 = FUNC_4( VAR_3, VAR_2, &VAR_5 );
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_4 = FUNC_5( VAR_3->db, VAR_1, VAR_5, &VAR_8 );
    if (VAR_4 != VAR_0)
        return VAR_4;

    FUNC_3(FUNC_0(VAR_2) == FUNC_0(VAR_8));

    for (VAR_6 = FUNC_0(VAR_2); VAR_6 > 0; VAR_6--)
    {
        if (!FUNC_1(VAR_2, VAR_8, VAR_6))
            VAR_7 |= 1 << (VAR_6 - 1);
    }
     FUNC_6(&VAR_8->hdr);

    return FUNC_2( VAR_1, VAR_5, VAR_2, VAR_7 );
}
