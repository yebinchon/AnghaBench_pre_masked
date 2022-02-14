
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int med ;
struct TYPE_11__ {int tymed; } ;
struct TYPE_9__ {int hEnhMetaFile; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int * HGLOBAL ;
typedef scalar_t__ HENHMETAFILE ;
typedef TYPE_3__ FORMATETC ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_5(IDataObject *VAR_2, FORMATETC *VAR_3, HGLOBAL *VAR_4)
{
    HENHMETAFILE VAR_5;
    HRESULT VAR_6;
    FORMATETC VAR_7;
    STGMEDIUM VAR_8;

    *VAR_4 = ((void*)0);

    VAR_7 = *VAR_3;
    VAR_7.tymed = VAR_1;
    FUNC_4(&VAR_8, 0, sizeof(VAR_8));

    VAR_6 = FUNC_2(VAR_2, &VAR_7, &VAR_8);
    if(FUNC_1(VAR_6)) return VAR_6;

    VAR_5 = FUNC_0(VAR_8.u.hEnhMetaFile, ((void*)0));
    if(VAR_5) *VAR_4 = (HGLOBAL)VAR_5;
    else VAR_6 = VAR_0;

    FUNC_3(&VAR_8);

    return VAR_6;
}
