
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef TYPE_2__* pmbedtls_msg ;
struct TYPE_7__ {TYPE_1__* pespconn; int fd; struct TYPE_7__* pssl; } ;
typedef TYPE_2__ espconn_msg ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(espconn_msg *VAR_3)
{
 FUNC_1(VAR_3);
 pmbedtls_msg VAR_4 = VAR_3->pssl;
 FUNC_1(VAR_4);
 FUNC_2(&VAR_4->fd);
 VAR_3->pespconn->state = VAR_0;
 FUNC_0(VAR_2, VAR_1, (uint32)VAR_3);
}
