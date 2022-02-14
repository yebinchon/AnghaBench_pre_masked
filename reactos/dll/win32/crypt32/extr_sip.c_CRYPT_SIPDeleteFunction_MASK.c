
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int LONG ;
typedef int GUID ;


 int FUNC_0 (int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 size_t FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static LONG FUNC_5( const GUID *VAR_3, LPCWSTR VAR_4 )
{
    WCHAR VAR_5[ 0x100 ];
    LONG VAR_6 = VAR_0;


    FUNC_3( VAR_5, VAR_2 );
    FUNC_2( VAR_5, VAR_4 );
    FUNC_0( VAR_3, &VAR_5[ FUNC_4( VAR_5 ) ] );

    VAR_6 = FUNC_1(VAR_1, VAR_5);

    return VAR_6;
}
