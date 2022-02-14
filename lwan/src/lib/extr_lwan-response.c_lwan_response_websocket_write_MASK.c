
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buffer; } ;
struct lwan_request {TYPE_2__ response; TYPE_1__* conn; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lwan_request*,unsigned char,char*,size_t) ;

void FUNC_4(struct lwan_request *VAR_2)
{
    size_t VAR_3 = FUNC_1(VAR_2->response.buffer);
    char *VAR_4 = FUNC_0(VAR_2->response.buffer);


    unsigned char VAR_5 = 0x80 | VAR_1;

    if (!(VAR_2->conn->flags & VAR_0))
        return;

    FUNC_3(VAR_2, VAR_5, VAR_4, VAR_3);
    FUNC_2(VAR_2->response.buffer);
}
