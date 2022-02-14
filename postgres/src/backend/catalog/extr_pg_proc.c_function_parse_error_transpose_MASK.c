
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; char* sourceText; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*,int) ;

bool
FUNC_7(const char *VAR_2)
{
 int VAR_3;
 int VAR_4;
 const char *VAR_5;
 VAR_3 = FUNC_2();
 if (VAR_3 <= 0)
 {
  VAR_3 = FUNC_3();
  if (VAR_3 <= 0)
   return 0;
 }


 FUNC_0(VAR_0 && VAR_0->status == VAR_1);
 VAR_5 = VAR_0->sourceText;


 VAR_4 = FUNC_6(VAR_2, VAR_5, VAR_3);

 if (VAR_4 > 0)
 {

  FUNC_1(VAR_4);

  FUNC_4(0);
  FUNC_5(((void*)0));
 }
 else
 {




  FUNC_1(0);
  FUNC_4(VAR_3);
  FUNC_5(VAR_2);
 }

 return 1;
}
