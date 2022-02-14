
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ended; } ;
typedef TYPE_1__ fcgi_request ;


 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(fcgi_request *VAR_0) {
 int VAR_1 = 1;
 if (!VAR_0->ended) {
  VAR_1 = FUNC_0(VAR_0, 1);
  VAR_0->ended = 1;
 }
 return VAR_1;
}
