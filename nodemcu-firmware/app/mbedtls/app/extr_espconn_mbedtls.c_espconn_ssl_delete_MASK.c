
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* tcp; } ;
struct espconn {scalar_t__ link_cnt; TYPE_2__ proto; } ;
typedef int sint8 ;
typedef int remot_info ;
typedef TYPE_3__* pmbedtls_msg ;
struct TYPE_11__ {TYPE_3__* pssl; struct espconn* preverse; } ;
typedef TYPE_4__ espconn_msg ;
struct TYPE_10__ {int listen_fd; } ;
struct TYPE_8__ {int local_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct espconn*,int **,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* VAR_6 ;

sint8 FUNC_6(struct espconn *VAR_7)
{
 remot_info *VAR_8 = ((void*)0);
 espconn_msg *VAR_9 = ((void*)0);
 pmbedtls_msg VAR_10 = ((void*)0);

 if (VAR_7 == ((void*)0))
  return VAR_0;

 FUNC_0(VAR_7, &VAR_8, VAR_3);

 if (VAR_7->link_cnt != 0)
  return VAR_1;
 else {
  VAR_9 = VAR_6;
  if (VAR_9 != ((void*)0) && VAR_9->preverse == VAR_7) {
   VAR_10 = VAR_9->pssl;
   FUNC_1(VAR_7->proto.tcp->local_port);
   FUNC_3(&VAR_10->listen_fd);
   FUNC_2(&VAR_10);
   VAR_9->pssl = VAR_10;
   FUNC_5(VAR_9);
   VAR_9 = ((void*)0);
   VAR_6 = VAR_9;
   FUNC_4(&VAR_5);
   FUNC_4(&VAR_4);
   return VAR_2;
  } else {
   return VAR_0;
  }
 }
}
