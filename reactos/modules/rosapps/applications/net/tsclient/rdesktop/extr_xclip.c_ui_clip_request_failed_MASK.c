
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int has_selection_request; int selection_request; } ;
struct TYPE_6__ {TYPE_1__ xclip; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;

void
FUNC_1(RDPCLIENT * VAR_1)
{
 FUNC_0(VAR_1, &VAR_1->xclip.selection_request);
 VAR_1->xclip.has_selection_request = VAR_0;
}
