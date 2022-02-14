
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** playInterface; } ;
typedef TYPE_1__ uri_player ;
struct TYPE_6__ {scalar_t__ (* SetPlayState ) (TYPE_2__**,int ) ;} ;
typedef scalar_t__ SLresult ;
typedef TYPE_2__** SLPlayItf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__**,int ) ;

void FUNC_1(uri_player* VAR_3, char **VAR_4) {
  SLPlayItf VAR_5 = VAR_3->playInterface;
  SLresult VAR_6;


  VAR_2 = 0;

  VAR_6 = (*VAR_5)->SetPlayState(VAR_5, VAR_0);
  if (VAR_6 != VAR_1) {
    *VAR_4 = "Failed to set SL_PLAYSTATE_STOPPED";
    return;
  }
}
