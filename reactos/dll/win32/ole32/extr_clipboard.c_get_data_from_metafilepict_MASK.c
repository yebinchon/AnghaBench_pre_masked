
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int med ;
struct TYPE_11__ {int tymed; } ;
struct TYPE_9__ {int hMetaFilePict; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int * HGLOBAL ;
typedef TYPE_3__ FORMATETC ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_6(IDataObject *VAR_1, FORMATETC *VAR_2, HGLOBAL *VAR_3)
{
    HGLOBAL VAR_4;
    HRESULT VAR_5;
    FORMATETC VAR_6;
    STGMEDIUM VAR_7;

    *VAR_3 = ((void*)0);

    VAR_6 = *VAR_2;
    VAR_6.tymed = VAR_0;
    FUNC_5(&VAR_7, 0, sizeof(VAR_7));

    VAR_5 = FUNC_1(VAR_1, &VAR_6, &VAR_7);
    if(FUNC_0(VAR_5)) return VAR_5;

    VAR_5 = FUNC_4(VAR_7.u.hMetaFilePict, &VAR_4);

    if(FUNC_3(VAR_5)) *VAR_3 = VAR_4;

    FUNC_2(&VAR_7);

    return VAR_5;
}
