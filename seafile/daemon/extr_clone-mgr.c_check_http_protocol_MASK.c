
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int http_tx_mgr; } ;
struct TYPE_7__ {int server_url; } ;
typedef TYPE_1__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,TYPE_1__*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3 (CloneTask *VAR_5)
{
    if (FUNC_0 (VAR_4->http_tx_mgr,
                                                VAR_5->server_url,
                                                VAR_1,
                                                VAR_3,
                                                VAR_5) < 0) {
        FUNC_2 (VAR_5, VAR_2);
        return;
    }

    FUNC_1 (VAR_5, VAR_0);
}
