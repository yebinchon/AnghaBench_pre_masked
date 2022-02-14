
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int lineheight; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct list*,int,int ,int) ;
 int FUNC_5 (struct list*) ;
 scalar_t__ FUNC_6 (struct list*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 static struct list VAR_3;
 char VAR_4[VAR_0], VAR_5[VAR_0];
 const char *VAR_6 = FUNC_0("HOME");
 const char *VAR_7 = FUNC_0("USER");
 int VAR_8;

 FUNC_4(&VAR_3, FUNC_3(VAR_1), 0, FUNC_3(VAR_1) * VAR_2.lineheight + 4);

 for (VAR_8 = 0; VAR_8 < (int)FUNC_3(VAR_1); ++VAR_8)
  if (FUNC_1(VAR_6, VAR_7, VAR_8, VAR_4, VAR_5))
   if (FUNC_6(&VAR_3, VAR_1[VAR_8].name, VAR_5, 0))
    FUNC_2(VAR_4);

 FUNC_5(&VAR_3);
}
