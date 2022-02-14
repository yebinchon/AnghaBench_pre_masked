
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int rdSize; int rdParm; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef int LOGPEN16 ;
typedef int HPEN ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static UINT16 FUNC_3(PHYSDEV VAR_1, HPEN VAR_2, LOGPEN16 *VAR_3)
{
    char VAR_4[sizeof(METARECORD) - 2 + sizeof(*VAR_3)];
    METARECORD *VAR_5 = (METARECORD *)&VAR_4;

    VAR_5->rdSize = (sizeof(METARECORD) + sizeof(*VAR_3) - 2) / 2;
    VAR_5->rdFunction = VAR_0;
    FUNC_2(&(VAR_5->rdParm), VAR_3, sizeof(*VAR_3));
    if (!(FUNC_1( VAR_1, VAR_5, VAR_5->rdSize * 2)))
        return 0;
    return FUNC_0( VAR_1, VAR_2 );
}
