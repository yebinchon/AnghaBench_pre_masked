
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int MSICOMPONENT ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int ,int const*) ;
 int FUNC_5 (int const*,int ,int const*,int ,int ) ;

__attribute__((used)) static void FUNC_6( const MSICOMPONENT *VAR_2, HKEY VAR_3, const WCHAR *VAR_4 )
{
    LONG VAR_5;
    HKEY VAR_6;

    if (!(VAR_6 = FUNC_5( VAR_2, VAR_3, VAR_4, VAR_0, VAR_1 ))) return;
    VAR_5 = FUNC_1( VAR_6, ((void*)0) );
    if (VAR_5) FUNC_2("failed to delete subtree of %s (%d)\n", FUNC_3(VAR_4), VAR_5);
    FUNC_4( VAR_2, VAR_3, VAR_4 );
    FUNC_0( VAR_6 );
}
