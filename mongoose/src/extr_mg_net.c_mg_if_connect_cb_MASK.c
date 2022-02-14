
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin_port; int sin_addr; } ;
struct TYPE_4__ {TYPE_1__ sin; } ;
struct mg_connection {int flags; int user_data; TYPE_2__ sa; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mg_connection*,int *,int ,int ,int*) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct mg_connection *VAR_6, int VAR_7) {
  FUNC_0(VAR_0,
      ("%p %s://%s:%hu -> %d", VAR_6, (VAR_6->flags & VAR_5 ? "udp" : "tcp"),
       FUNC_1(VAR_6->sa.sin.sin_addr), FUNC_4(VAR_6->sa.sin.sin_port), VAR_7));
  VAR_6->flags &= ~VAR_3;
  if (VAR_7 != 0) {
    VAR_6->flags |= VAR_2;
  }





  {
    FUNC_2(VAR_6, ((void*)0), VAR_6->user_data, VAR_1, &VAR_7);
  }
}
