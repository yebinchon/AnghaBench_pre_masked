
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct tagMSIVIEW*,scalar_t__,TYPE_1__**) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static UINT FUNC_5( struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2, UINT VAR_3 )
{
    MSIRECORD *VAR_4;
    UINT VAR_5, VAR_6, VAR_7;

    VAR_5 = FUNC_3(VAR_1, VAR_3 - 1, &VAR_4);
    if (VAR_5 != VAR_0)
        return VAR_5;


    FUNC_0(&VAR_2->hdr);

    VAR_7 = FUNC_2(VAR_2);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        FUNC_1(VAR_4, VAR_6 + 1, VAR_2, VAR_6 + 1);

    FUNC_4(&VAR_4->hdr);
    return VAR_0;
}
