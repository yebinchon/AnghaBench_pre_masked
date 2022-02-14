
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {int hMetaFilePict; int hGlobal; } ;
struct TYPE_8__ {int hMF; } ;
struct TYPE_7__ {scalar_t__ tymed; int hGlobal; int hEnhMetaFile; } ;
typedef TYPE_1__ const STGMEDIUM ;
typedef TYPE_2__ METAFILEPICT ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (int *,int *,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_10(const STGMEDIUM *VAR_6, STGMEDIUM *VAR_7)
{
    BYTE *VAR_8, *VAR_9;
    ULONG VAR_10, VAR_11;

    if (VAR_6->tymed != VAR_7->tymed)
        return VAR_0;

    if (VAR_6->tymed == VAR_5)
    {
        METAFILEPICT *VAR_12 = FUNC_3(FUNC_8(VAR_6)->hMetaFilePict);
        METAFILEPICT *VAR_13 = FUNC_3(FUNC_8(VAR_7)->hMetaFilePict);

        VAR_10 = FUNC_1(VAR_12->hMF, 0, ((void*)0));
        VAR_11 = FUNC_1(VAR_13->hMF, 0, ((void*)0));
        if (VAR_10 == VAR_11)
        {
            VAR_8 = FUNC_6(FUNC_2(), 0, VAR_10);
            VAR_9 = FUNC_6(FUNC_2(), 0, VAR_11);
            FUNC_1(VAR_12->hMF, VAR_10, VAR_8);
            FUNC_1(VAR_13->hMF, VAR_11, VAR_9);
        }
        else return VAR_0;
    }
    else if (VAR_6->tymed == VAR_3)
    {
        VAR_10 = FUNC_0(VAR_6->hEnhMetaFile, 0, ((void*)0));
        VAR_11 = FUNC_0(VAR_7->hEnhMetaFile, 0, ((void*)0));
        if (VAR_10 == VAR_11)
        {
            VAR_8 = FUNC_6(FUNC_2(), 0, VAR_10);
            VAR_9 = FUNC_6(FUNC_2(), 0, VAR_11);
            FUNC_0(VAR_6->hEnhMetaFile, VAR_10, VAR_8);
            FUNC_0(VAR_7->hEnhMetaFile, VAR_11, VAR_9);
        }
        else return VAR_0;
    }
    else if (VAR_6->tymed == VAR_4)
    {
        VAR_10 = FUNC_4(VAR_6->hGlobal);
        VAR_11 = FUNC_4(VAR_7->hGlobal);

        if (VAR_10 == VAR_11)
        {
            VAR_8 = FUNC_3(VAR_6->hGlobal);
            VAR_9 = FUNC_3(VAR_7->hGlobal);
        }
        else
            return VAR_0;
    }
    else
        return VAR_1;

    if (FUNC_9(VAR_8, VAR_9, VAR_10) != 0)
        return VAR_0;

    if (VAR_6->tymed == VAR_4)
    {
        FUNC_5(FUNC_8(VAR_6)->hGlobal);
        FUNC_5(FUNC_8(VAR_7)->hGlobal);
    }
    else if (VAR_6->tymed == VAR_5)
    {
        FUNC_7(FUNC_2(), 0, VAR_8);
        FUNC_7(FUNC_2(), 0, VAR_9);
        FUNC_5(FUNC_8(VAR_6)->hMetaFilePict);
        FUNC_5(FUNC_8(VAR_7)->hMetaFilePict);
    }
    else
    {
        FUNC_7(FUNC_2(), 0, VAR_8);
        FUNC_7(FUNC_2(), 0, VAR_9);
    }

    return VAR_2;
}
