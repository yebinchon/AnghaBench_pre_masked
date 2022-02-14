
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ,int *,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int ,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static HANDLE FUNC_4( ULONG VAR_6 )
{
    char VAR_7[VAR_5], VAR_8[VAR_5];
    HANDLE VAR_9;

    FUNC_2( VAR_5, VAR_7 );
    FUNC_1( VAR_7, "foo", 0, VAR_8 );
    VAR_9 = FUNC_0(VAR_8, VAR_2 | VAR_3, 0, ((void*)0), VAR_0,
                         VAR_6 | VAR_1, 0);
    FUNC_3( VAR_9 != VAR_4, "failed to create temp file\n" );
    return (VAR_9 == VAR_4) ? 0 : VAR_9;
}
