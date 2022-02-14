
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ message; } ;
typedef TYPE_1__* LPMSG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(LPMSG VAR_3)
{

  if(VAR_3->message == VAR_2) {
    FUNC_0("skipping spurious message %04x\n", VAR_3->message);
    return VAR_1;
  }
  return VAR_0;
}
