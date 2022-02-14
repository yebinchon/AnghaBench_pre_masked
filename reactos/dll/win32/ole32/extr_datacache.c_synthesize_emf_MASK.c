
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int hMF; } ;
struct TYPE_7__ {int hEnhMetaFile; } ;
struct TYPE_8__ {int * pUnkForRelease; int tymed; TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef TYPE_3__ METAFILEPICT ;
typedef int HRESULT ;
typedef int HMETAFILEPICT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,void*) ;
 int VAR_1 ;
 int FUNC_6 (int ,void*,int *,TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_7( HMETAFILEPICT VAR_3, STGMEDIUM *VAR_4 )
{
    METAFILEPICT *VAR_5;
    HRESULT VAR_6 = VAR_0;
    UINT VAR_7;
    void *VAR_8;

    if (!(VAR_5 = FUNC_2( VAR_3 ))) return VAR_6;

    VAR_7 = FUNC_0( VAR_5->hMF, 0, ((void*)0) );
    if ((VAR_8 = FUNC_4( FUNC_1(), 0, VAR_7 )))
    {
        FUNC_0( VAR_5->hMF, VAR_7, VAR_8 );
        VAR_4->u.hEnhMetaFile = FUNC_6( VAR_7, VAR_8, ((void*)0), VAR_5 );
        FUNC_5( FUNC_1(), 0, VAR_8 );
        VAR_4->tymed = VAR_2;
        VAR_4->pUnkForRelease = ((void*)0);
        VAR_6 = VAR_1;
    }

    FUNC_3( VAR_3 );
    return VAR_6;
}
