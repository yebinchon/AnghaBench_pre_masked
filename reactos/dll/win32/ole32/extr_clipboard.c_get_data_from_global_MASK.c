
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int med ;
struct TYPE_11__ {int tymed; } ;
struct TYPE_9__ {int hGlobal; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int * HGLOBAL ;
typedef TYPE_3__ FORMATETC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int **) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_6(IDataObject *VAR_3, FORMATETC *VAR_4, HGLOBAL *VAR_5)
{
    HGLOBAL VAR_6;
    HRESULT VAR_7;
    FORMATETC VAR_8;
    STGMEDIUM VAR_9;

    *VAR_5 = ((void*)0);

    VAR_8 = *VAR_4;
    VAR_8.tymed = VAR_2;
    FUNC_5(&VAR_9, 0, sizeof(VAR_9));

    VAR_7 = FUNC_1(VAR_3, &VAR_8, &VAR_9);
    if(FUNC_0(VAR_7)) return VAR_7;

    VAR_7 = FUNC_4(VAR_9.u.hGlobal, VAR_0|VAR_1, &VAR_6);

    if(FUNC_3(VAR_7)) *VAR_5 = VAR_6;

    FUNC_2(&VAR_9);

    return VAR_7;
}
