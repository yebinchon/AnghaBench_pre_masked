
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* write ) (char const*,int) ;} ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2)
{
 if(FUNC_2())
  FUNC_0(VAR_1, VAR_2);
 else
  VAR_0->write(VAR_1, VAR_2);
}
