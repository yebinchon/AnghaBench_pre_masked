
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ VARTYPE ;
struct TYPE_5__ {void* fFeatures; } ;
typedef TYPE_1__ SAFEARRAY ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_2(VARTYPE VAR_8, SAFEARRAY *VAR_9)
{

  if (VAR_8 == VAR_5)
  {
    VAR_9->fFeatures = VAR_0;
    FUNC_1(VAR_9, &VAR_3);
  }
  else if (VAR_8 == VAR_7)
  {
    VAR_9->fFeatures = VAR_0;
    FUNC_1(VAR_9, &VAR_4);
  }
  else if (VAR_8 == VAR_6)
    VAR_9->fFeatures = VAR_2;
  else
  {
    VAR_9->fFeatures = VAR_1;
    FUNC_0(VAR_9, VAR_8);
  }
}
