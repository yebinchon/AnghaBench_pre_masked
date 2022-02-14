
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ label; } ;
typedef TYPE_1__ pending_label ;
typedef scalar_t__ XactEvent ;


 char* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(XactEvent VAR_6, void *VAR_7)
{
 if (VAR_6 == VAR_3)
 {
  if (VAR_5 != VAR_0)
  {
   pending_label *VAR_8 = FUNC_1(VAR_5);
   char *VAR_9;

   if (VAR_8->label)
    VAR_9 = FUNC_0(VAR_1,
            VAR_8->label);
   else
    VAR_9 = ((void*)0);

   if (VAR_4)
    FUNC_2(VAR_4);

   VAR_4 = VAR_9;






   VAR_5 = VAR_0;
  }
 }
 else if (VAR_6 == VAR_2)
  VAR_5 = VAR_0;
}
