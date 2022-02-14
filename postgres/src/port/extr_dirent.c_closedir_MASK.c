
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handle; struct TYPE_4__* dirname; } ;
typedef TYPE_1__ DIR ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(DIR *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->handle != VAR_0)
  VAR_2 = !FUNC_0(VAR_1->handle);
 FUNC_1(VAR_1->dirname);
 FUNC_1(VAR_1);

 return VAR_2;
}
