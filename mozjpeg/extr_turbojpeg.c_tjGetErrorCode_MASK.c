
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ warning; } ;
struct TYPE_4__ {TYPE_1__ jerr; } ;
typedef TYPE_2__ tjinstance ;
typedef scalar_t__ tjhandle ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(tjhandle VAR_2)
{
  tjinstance *VAR_3 = (tjinstance *)VAR_2;

  if (VAR_3 && VAR_3->jerr.warning) return VAR_1;
  else return VAR_0;
}
