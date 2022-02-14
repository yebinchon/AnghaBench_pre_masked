
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* response; } ;
struct TYPE_7__ {int status; } ;
struct TYPE_6__ {TYPE_2__* status_info; } ;
typedef TYPE_2__ TS_STATUS_INFO ;
typedef TYPE_3__ TS_RESP_CTX ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,char const*) ;
 scalar_t__ VAR_0 ;

int FUNC_2(TS_RESP_CTX *VAR_1,
                                     int VAR_2, const char *VAR_3)
{
    int VAR_4 = 1;
    TS_STATUS_INFO *VAR_5 = VAR_1->response->status_info;

    if (FUNC_0(VAR_5->status) == VAR_0) {
        VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    }
    return VAR_4;
}
