
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_connection {scalar_t__ sock; int flags; int user_data; TYPE_1__* iface; } ;
struct TYPE_4__ {int (* destroy_conn ) (struct mg_connection*) ;} ;
struct TYPE_3__ {TYPE_2__* vtable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mg_connection*,int *,int ,int ,int *) ;
 int FUNC_1 (struct mg_connection*,int ) ;
 int FUNC_2 (struct mg_connection*) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*) ;

void FUNC_6(struct mg_connection *VAR_5) {


  if (VAR_5->sock != VAR_0 && FUNC_2(VAR_5) == -2) {

    VAR_5->flags |= VAR_3;
    return;
  }
  VAR_5->flags |= VAR_2;
  FUNC_3(VAR_5);
  VAR_5->iface->vtable->destroy_conn(VAR_5);
  FUNC_0(VAR_5, ((void*)0), VAR_5->user_data, VAR_1, ((void*)0));
  FUNC_1(VAR_5, 0 );
}
