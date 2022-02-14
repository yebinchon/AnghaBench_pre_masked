
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HENHMETAFILE ;
typedef int HANDLE ;
typedef int ENHMETAHEADER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HENHMETAFILE FUNC_5( HANDLE VAR_3 )
{
    ENHMETAHEADER *VAR_4;
    HANDLE VAR_5;
    HENHMETAFILE VAR_6;

    VAR_5 = FUNC_1( VAR_3, ((void*)0), VAR_1, 0, 0, ((void*)0) );
    VAR_4 = FUNC_3( VAR_5, VAR_0, 0, 0, 0 );
    FUNC_0( VAR_5 );

    if (!VAR_4) return 0;

    VAR_6 = FUNC_2( VAR_4, VAR_2 );
    if (!VAR_6)
        FUNC_4( VAR_4 );
    return VAR_6;
}
