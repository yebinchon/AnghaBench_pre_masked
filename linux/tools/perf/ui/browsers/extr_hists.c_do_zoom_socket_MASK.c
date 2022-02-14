
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct popup_action {int socket; } ;
struct hist_browser {TYPE_1__* hists; int pstack; } ;
struct TYPE_3__ {int socket_filter; } ;


 int VAR_0 ;
 int FUNC_0 (struct hist_browser*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct hist_browser *VAR_2, struct popup_action *VAR_3)
{
 if (!FUNC_2(VAR_2->hists, VAR_1) || VAR_3->socket < 0)
  return 0;

 if (VAR_2->hists->socket_filter > -1) {
  FUNC_5(VAR_2->pstack, &VAR_2->hists->socket_filter);
  VAR_2->hists->socket_filter = -1;
  FUNC_3(VAR_0, 0);
 } else {
  VAR_2->hists->socket_filter = VAR_3->socket;
  FUNC_3(VAR_0, 1);
  FUNC_4(VAR_2->pstack, &VAR_2->hists->socket_filter);
 }

 FUNC_1(VAR_2->hists);
 FUNC_0(VAR_2);
 return 0;
}
