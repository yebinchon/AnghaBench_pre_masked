
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mg_connection {int flags; int user_data; TYPE_1__ send_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mg_connection*,int *,int ,int ,int *) ;
 int FUNC_1 (struct mg_connection*) ;
 int FUNC_2 (struct mg_connection*) ;
 int FUNC_3 (struct mg_connection*,double) ;
 scalar_t__ FUNC_4 (struct mg_connection*,int ) ;

int FUNC_5(struct mg_connection *VAR_10, double VAR_11) {
  if (VAR_10->flags & VAR_1) {
    FUNC_1(VAR_10);
    return 0;
  } else if (VAR_10->flags & VAR_5) {
    if (VAR_10->send_mbuf.len == 0) {
      VAR_10->flags |= VAR_1;
      FUNC_1(VAR_10);
      return 0;
    }
  } else if (VAR_10->flags & VAR_4) {
    FUNC_1(VAR_10);
    return 0;
  }
  FUNC_3(VAR_10, VAR_11);
  {
    time_t VAR_12 = (time_t) VAR_11;
    FUNC_0(VAR_10, ((void*)0), VAR_10->user_data, VAR_0, &VAR_12);
  }
  return 1;
}
