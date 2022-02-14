
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ halfspeed; } ;
struct TYPE_5__ {int lay; int ssize; int bsbuf; int ssave; TYPE_1__ p; } ;
typedef TYPE_2__ mpg123_handle ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(mpg123_handle *VAR_0)
{

 if(VAR_0->p.halfspeed && VAR_0->lay == 3)
 {
  FUNC_0("halfspeed - reusing old bsbuf ");
  FUNC_1 (VAR_0->ssave, VAR_0->bsbuf, VAR_0->ssize);
 }
}
