
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ running; scalar_t__ enabled; scalar_t__ value; } ;
struct TYPE_3__ {int disabled; int exclude_user; int exclude_hv; int exclude_kernel; } ;
struct event {TYPE_2__ result; int fd; TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (struct event*,int ,int ,char*) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*,int ) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (struct event*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct event *VAR_6, VAR_7[4];
 char *VAR_8;
 int VAR_9;

 VAR_8 = (char *)FUNC_8(VAR_0);
 FUNC_0(!VAR_8);
 FUNC_1(FUNC_10(VAR_8, "power8") != 0);





 VAR_6 = &VAR_7[0];
 FUNC_3(VAR_6, VAR_2,
   VAR_3, "instructions");
 VAR_6->attr.disabled = 1;

 VAR_6 = &VAR_7[1];
 FUNC_3(VAR_6, VAR_2,
   VAR_3, "instructions(k)");
 VAR_6->attr.disabled = 1;
 VAR_6->attr.exclude_user = 1;
 VAR_6->attr.exclude_hv = 1;

 VAR_6 = &VAR_7[2];
 FUNC_3(VAR_6, VAR_2,
   VAR_3, "instructions(h)");
 VAR_6->attr.disabled = 1;
 VAR_6->attr.exclude_user = 1;
 VAR_6->attr.exclude_kernel = 1;

 VAR_6 = &VAR_7[3];
 FUNC_3(VAR_6, VAR_2,
   VAR_3, "instructions(u)");
 VAR_6->attr.disabled = 1;
 VAR_6->attr.exclude_hv = 1;
 VAR_6->attr.exclude_kernel = 1;

 FUNC_0(FUNC_4(&VAR_7[0]));






 for (VAR_9 = 1; VAR_9 < 4; VAR_9++)
  FUNC_0(FUNC_5(&VAR_7[VAR_9], VAR_7[0].fd));





 FUNC_9(VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  asm volatile("" : : : "memory");

 FUNC_9(VAR_4);

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  FUNC_0(FUNC_6(&VAR_7[VAR_9]));
  FUNC_7(&VAR_7[VAR_9]);
 }





 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  FUNC_0(VAR_7[VAR_9].result.running != VAR_7[VAR_9].result.enabled);






 for (VAR_9 = 1; VAR_9 < 4; VAR_9++)
  FUNC_0(VAR_7[0].result.value < VAR_7[VAR_9].result.value);

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  FUNC_2(&VAR_7[VAR_9]);

 return 0;
}
