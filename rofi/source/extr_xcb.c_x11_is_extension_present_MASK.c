
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int present; } ;
typedef TYPE_1__ xcb_query_extension_reply_t ;
typedef int xcb_query_extension_cookie_t ;
struct TYPE_6__ {int connection; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (int ,int ,char const*) ;
 TYPE_1__* FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4 ( const char *VAR_1 )
{
    xcb_query_extension_cookie_t VAR_2 = FUNC_2 ( VAR_0->connection, FUNC_1 ( VAR_1 ), VAR_1 );

    xcb_query_extension_reply_t *VAR_3 = FUNC_3 ( VAR_0->connection, VAR_2, ((void*)0) );

    int VAR_4 = VAR_3->present;

    FUNC_0 ( VAR_3 );

    return VAR_4;
}
