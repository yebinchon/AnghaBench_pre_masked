
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int member_1; int member_0; } ;
struct TYPE_7__ {int hEnhMetaFile; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef TYPE_3__ SIZEL ;
typedef int ME_TextEditor ;
typedef int HRESULT ;
typedef int FORMATETC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_5(ME_TextEditor *VAR_1, FORMATETC *VAR_2, STGMEDIUM *VAR_3)
{
    HRESULT VAR_4;
    SIZEL VAR_5 = {0, 0};

    VAR_4 = FUNC_4( VAR_1, VAR_3->u.hEnhMetaFile, ((void*)0), &VAR_5 );
    if (FUNC_3(VAR_4))
    {
        FUNC_0( VAR_1 );
        FUNC_1( VAR_1, VAR_0 );
    }
    else
        FUNC_2( VAR_3 );

    return VAR_4;
}
