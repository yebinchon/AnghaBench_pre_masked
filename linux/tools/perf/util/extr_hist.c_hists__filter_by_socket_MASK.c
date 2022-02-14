
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hists {int socket_filter; } ;
struct TYPE_2__ {scalar_t__ report_hierarchy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hists*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hists*,int ,int *) ;
 TYPE_1__ VAR_2 ;

void FUNC_2(struct hists *VAR_3)
{
 if (VAR_2.report_hierarchy)
  FUNC_1(VAR_3, VAR_0,
     &VAR_3->socket_filter);
 else
  FUNC_0(VAR_3, VAR_0,
          VAR_1);
}
