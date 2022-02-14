
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_2__ {int present; } ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 int VAR_0 ;

bool FUNC_1(xcb_connection_t *VAR_1)
{
 if (!VAR_1 || !FUNC_0(VAR_1, &VAR_0)->present)
  return 0;

 return 1;
}
