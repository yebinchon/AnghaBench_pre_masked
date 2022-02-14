
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int hreftype; int guid; } ;
struct TYPE_16__ {TYPE_2__* pLibInfo; TYPE_1__* pTblDir; } ;
struct TYPE_15__ {int offset; int entry; int hreftype; int guid; } ;
struct TYPE_14__ {int length; int offset; } ;
struct TYPE_13__ {int guid_list; } ;
struct TYPE_12__ {TYPE_3__ pGuidTab; } ;
typedef TYPE_4__ TLBGuid ;
typedef TYPE_5__ TLBContext ;
typedef TYPE_6__ MSFT_GuidEntry ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(TLBContext *VAR_2)
{
    TLBGuid *VAR_3;
    MSFT_GuidEntry VAR_4;
    int VAR_5 = 0;

    FUNC_1(VAR_2, VAR_2->pTblDir->pGuidTab.offset);
    while (1) {
        if (VAR_5 >= VAR_2->pTblDir->pGuidTab.length)
            return VAR_1;

        FUNC_0(&VAR_4, sizeof(MSFT_GuidEntry), VAR_2, VAR_0);

        VAR_3 = FUNC_2(sizeof(TLBGuid));

        VAR_3->offset = VAR_5;
        VAR_3->guid = VAR_4.guid;
        VAR_3->hreftype = VAR_4.hreftype;

        FUNC_3(&VAR_2->pLibInfo->guid_list, &VAR_3->entry);

        VAR_5 += sizeof(MSFT_GuidEntry);
    }
}
