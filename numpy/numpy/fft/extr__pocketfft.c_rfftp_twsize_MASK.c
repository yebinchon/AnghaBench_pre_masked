
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* rfftp_plan ;
struct TYPE_5__ {size_t nfct; size_t length; TYPE_1__* fct; } ;
struct TYPE_4__ {size_t fct; } ;



__attribute__((used)) static size_t FUNC_0(rfftp_plan VAR_0)
  {
  size_t VAR_1=0, VAR_2=1;
  for (size_t VAR_3=0; VAR_3<VAR_0->nfct; ++VAR_3)
    {
    size_t VAR_4=VAR_0->fct[VAR_3].fct, VAR_5= VAR_0->length/(VAR_2*VAR_4);
    VAR_1+=(VAR_4-1)*(VAR_5-1);
    if (VAR_4>5) VAR_1+=2*VAR_4;
    VAR_2*=VAR_4;
    }
  return VAR_1;
  return 0;
  }
