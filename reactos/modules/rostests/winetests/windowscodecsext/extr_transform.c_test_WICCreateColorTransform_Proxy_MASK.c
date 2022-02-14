
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWICColorTransform ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    HRESULT VAR_4;
    IWICColorTransform *VAR_5;

    VAR_4 = FUNC_3( ((void*)0) );
    FUNC_4( VAR_4 == VAR_2, "got %08x\n", VAR_4 );

    VAR_5 = ((void*)0);
    VAR_4 = FUNC_3( &VAR_5 );
    FUNC_4( VAR_4 == VAR_3, "got %08x\n", VAR_4 );
    if (VAR_5) FUNC_2( VAR_5 );

    VAR_4 = FUNC_0( ((void*)0), VAR_0 );
    FUNC_4( VAR_4 == VAR_3, "got %08x\n", VAR_4 );

    VAR_5 = ((void*)0);
    VAR_4 = FUNC_3( &VAR_5 );
    FUNC_4( VAR_4 == VAR_3, "got %08x\n", VAR_4 );
    if (VAR_5) FUNC_2( VAR_5 );
    FUNC_1();

    VAR_4 = FUNC_0( ((void*)0), VAR_1 );
    FUNC_4( VAR_4 == VAR_3, "got %08x\n", VAR_4 );

    VAR_5 = ((void*)0);
    VAR_4 = FUNC_3( &VAR_5 );
    FUNC_4( VAR_4 == VAR_3, "got %08x\n", VAR_4 );
    if (VAR_5) FUNC_2( VAR_5 );
    FUNC_1();
}
