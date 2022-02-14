
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ running; scalar_t__ enabled; } ;
struct event {TYPE_1__ result; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct event*) ;
 int FUNC_2 (struct event*,int) ;
 int FUNC_3 (struct event*) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct event VAR_1;
 char *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_7(VAR_0);
 FUNC_0(!VAR_2);

 FUNC_2(&VAR_1, 0x84918F);

 FUNC_0(FUNC_3(&VAR_1));

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 += 0x10000)
  VAR_2[VAR_3] = VAR_3;

 FUNC_4(&VAR_1);
 FUNC_5(&VAR_1);

 FUNC_0(VAR_1.result.running == 0);
 FUNC_0(VAR_1.result.enabled == 0);

 FUNC_1(&VAR_1);
 FUNC_6(VAR_2);

 return 0;
}
