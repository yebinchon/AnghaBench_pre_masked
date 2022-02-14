
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int headers_section; } ;
typedef TYPE_1__ http_request_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( http_request_t *VAR_0, const WCHAR *VAR_1, BOOL VAR_2 )
{
    int VAR_3;
    FUNC_0( &VAR_0->headers_section );
    VAR_3 = FUNC_2( VAR_0, VAR_1, 0, VAR_2 );
    if (VAR_3 != -1) FUNC_1( VAR_0, VAR_3 );
    FUNC_3( &VAR_0->headers_section );
}
