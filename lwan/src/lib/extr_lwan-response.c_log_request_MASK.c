
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int mime_type; } ;
struct TYPE_9__ {int value; } ;
struct lwan_request {int flags; TYPE_5__ response; TYPE_4__ original_url; TYPE_3__* conn; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_8__ {TYPE_2__* thread; } ;
struct TYPE_6__ {int date; } ;
struct TYPE_7__ {TYPE_1__ date; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lwan_request*) ;
 int FUNC_1 (struct lwan_request*,char*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct lwan_request *VAR_2,
                        enum lwan_http_status VAR_3)
{
    char VAR_4[VAR_0];

    FUNC_2("%s [%s] \"%s %s HTTP/%s\" %d %s",
                      FUNC_1(VAR_2, VAR_4),
                      VAR_2->conn->thread->date.date,
                      FUNC_0(VAR_2), VAR_2->original_url.value,
                      VAR_2->flags & VAR_1 ? "1.0" : "1.1",
                      VAR_3, VAR_2->response.mime_type);
}
