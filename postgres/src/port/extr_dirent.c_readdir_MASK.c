
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dirent {int d_name; int d_namlen; } ;
struct TYPE_6__ {int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
struct TYPE_7__ {struct dirent ret; int handle; int dirname; } ;
typedef TYPE_2__ DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

struct dirent *
FUNC_6(DIR *VAR_4)
{
 WIN32_FIND_DATA VAR_5;

 if (VAR_4->handle == VAR_2)
 {
  VAR_4->handle = FUNC_0(VAR_4->dirname, &VAR_5);
  if (VAR_4->handle == VAR_2)
  {

   if (FUNC_2() == VAR_0)
    VAR_3 = 0;
   else
    FUNC_3(FUNC_2());
   return ((void*)0);
  }
 }
 else
 {
  if (!FUNC_1(VAR_4->handle, &VAR_5))
  {

   if (FUNC_2() == VAR_1)
    VAR_3 = 0;
   else
    FUNC_3(FUNC_2());
   return ((void*)0);
  }
 }
 FUNC_4(VAR_4->ret.d_name, VAR_5.cFileName);
 VAR_4->ret.d_namlen = FUNC_5(VAR_4->ret.d_name);

 return &VAR_4->ret;
}
