
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mg_dns_message {int num_answers; TYPE_3__* answers; } ;
struct TYPE_4__ {int sin_addr; } ;
struct TYPE_5__ {TYPE_1__ sin; } ;
struct mg_connection {int flags; int user_data; TYPE_2__ sa; } ;
typedef enum mg_resolve_err { ____Placeholder_mg_resolve_err } mg_resolve_err ;
struct TYPE_6__ {scalar_t__ rtype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mg_connection*,int *,int ,int ,...) ;
 int FUNC_1 (struct mg_connection*,int) ;
 int FUNC_2 (struct mg_dns_message*,TYPE_3__*,int *,int) ;
 int FUNC_3 (struct mg_connection*,int ,TYPE_2__*) ;
 double FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct mg_dns_message *VAR_9, void *VAR_10,
                       enum mg_resolve_err VAR_11) {
  struct mg_connection *VAR_12 = (struct mg_connection *) VAR_10;
  int VAR_13;
  int VAR_14 = -1;

  VAR_12->flags &= ~VAR_4;
  if (VAR_9 != ((void*)0)) {



    for (VAR_13 = 0; VAR_13 < VAR_9->num_answers; VAR_13++) {
      if (VAR_9->answers[VAR_13].rtype == VAR_0) {




        FUNC_2(VAR_9, &VAR_9->answers[VAR_13], &VAR_12->sa.sin.sin_addr,
                                 4);
        FUNC_3(VAR_12, VAR_12->flags & VAR_5 ? VAR_7 : VAR_8,
                      &VAR_12->sa);
        return;
      }
    }
  }

  if (VAR_11 == VAR_6) {
    double VAR_15 = FUNC_4();
    FUNC_0(VAR_12, ((void*)0), VAR_12->user_data, VAR_3, &VAR_15);
  }




  FUNC_0(VAR_12, ((void*)0), VAR_12->user_data, VAR_2, &VAR_14);
  FUNC_0(VAR_12, ((void*)0), VAR_12->user_data, VAR_1, ((void*)0));
  FUNC_1(VAR_12, 1 );
}
