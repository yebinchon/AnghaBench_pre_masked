
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int,char const*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;

__attribute__((used)) static BOOL FUNC_2( MSIPACKAGE *VAR_10, int VAR_11 )
{
    static const WCHAR VAR_12[] =
        {'A','D','D','L','O','C','A','L',0};
    static const WCHAR VAR_13[] =
        {'A','D','D','S','O','U','R','C','E',0};
    static const WCHAR VAR_14[] =
        {'A','D','V','E','R','T','I','S','E',0};
    BOOL VAR_15 = VAR_0;
    VAR_15 |= FUNC_1( VAR_10, VAR_11, VAR_12, VAR_3 );
    VAR_15 |= FUNC_1( VAR_10, VAR_11, VAR_9, VAR_1 );
    VAR_15 |= FUNC_1( VAR_10, VAR_11, VAR_13, VAR_4 );
    VAR_15 |= FUNC_1( VAR_10, VAR_11, VAR_8, VAR_5 );
    VAR_15 |= FUNC_1( VAR_10, VAR_11, VAR_14, VAR_2 );

    if (VAR_15)
        FUNC_0( VAR_10->db, VAR_7, VAR_6, -1 );

    return VAR_15;
}
