
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fd; } ;
typedef TYPE_1__ fcgi_request ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(fcgi_request *VAR_0, int VAR_1)
{
 int VAR_2 = 1;

 if (VAR_0->fd >= 0) {
  VAR_2 = FUNC_1(VAR_0);
  FUNC_0(VAR_0, VAR_1, 1);
 }
 return VAR_2;
}
