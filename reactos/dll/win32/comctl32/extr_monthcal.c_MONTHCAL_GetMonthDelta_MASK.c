
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ delta; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef scalar_t__ LRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static LRESULT
FUNC_2(const MONTHCAL_INFO *VAR_1)
{
  FUNC_1("\n");

  if(VAR_1->delta)
    return VAR_1->delta;

  return FUNC_0(VAR_1, VAR_0, ((void*)0));
}
