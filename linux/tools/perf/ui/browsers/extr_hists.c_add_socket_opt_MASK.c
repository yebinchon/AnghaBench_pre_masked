
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct popup_action {int socket; int fn; } ;
struct hist_browser {TYPE_1__* hists; } ;
struct TYPE_2__ {int socket_filter; } ;


 scalar_t__ FUNC_0 (char**,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct hist_browser *VAR_2, struct popup_action *VAR_3,
        char **VAR_4, int VAR_5)
{
 if (!FUNC_1(VAR_2->hists, VAR_1) || VAR_5 < 0)
  return 0;

 if (FUNC_0(VAR_4, "Zoom %s Processor Socket %d",
       (VAR_2->hists->socket_filter > -1) ? "out of" : "into",
       VAR_5) < 0)
  return 0;

 VAR_3->socket = VAR_5;
 VAR_3->fn = VAR_0;
 return 1;
}
