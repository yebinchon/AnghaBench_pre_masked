
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int win_location; } ;
typedef TYPE_1__ locate_windowfunc_context ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*,int ) ;

int
FUNC_1(Node *VAR_1)
{
 locate_windowfunc_context VAR_2;

 VAR_2.win_location = -1;





 (void) FUNC_0(VAR_1,
             VAR_0,
             (void *) &VAR_2,
             0);

 return VAR_2.win_location;
}
