
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hMF; } ;
struct TYPE_6__ {int hGlobal; int hMetaFilePict; } ;
struct TYPE_7__ {scalar_t__ tymed; scalar_t__ pUnkForRelease; TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef TYPE_3__ METAFILEPICT ;
typedef int HRESULT ;
typedef int CLIPFORMAT ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static HRESULT FUNC_6(CLIPFORMAT VAR_6, STGMEDIUM *VAR_7,
                               const STGMEDIUM *VAR_8)
{
    if (VAR_8->tymed == VAR_4)
    {
        const METAFILEPICT *VAR_9 = FUNC_2(VAR_8->u.hMetaFilePict);
        METAFILEPICT *VAR_10;

        if (!VAR_9)
            return VAR_0;
        VAR_7->u.hMetaFilePict = FUNC_1(VAR_2, sizeof(METAFILEPICT));
        VAR_10 = FUNC_2(VAR_7->u.hMetaFilePict);
        if (!VAR_10)
        {
            FUNC_3(VAR_8->u.hMetaFilePict);
            return VAR_1;
        }
        *VAR_10 = *VAR_9;
        VAR_10->hMF = FUNC_0(VAR_9->hMF, ((void*)0));
        FUNC_3(VAR_8->u.hMetaFilePict);
        FUNC_3(VAR_7->u.hMetaFilePict);
    }
    else if (VAR_8->tymed != VAR_5)
    {
        VAR_7->u.hGlobal = FUNC_5(VAR_8->u.hGlobal, VAR_6,
                                                VAR_2);
        if (!VAR_7->u.hGlobal)
            return VAR_1;
    }
    VAR_7->tymed = VAR_8->tymed;
    VAR_7->pUnkForRelease = VAR_8->pUnkForRelease;
    if (VAR_7->pUnkForRelease)
        FUNC_4(VAR_7->pUnkForRelease);
    return VAR_3;
}
