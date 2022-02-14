
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
typedef int fds ;
struct TYPE_3__ {int xsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pollfd*,int,int ) ;
 int FUNC_2 (TYPE_1__*,struct pollfd*) ;
 int FUNC_3 (int ) ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct pollfd VAR_6[VAR_0 + 1];
 int VAR_7, VAR_8;

 FUNC_0(VAR_6, 0, sizeof(VAR_6));

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6[VAR_7].fd = FUNC_3(VAR_5[VAR_7]->xsk);
  VAR_6[VAR_7].events = VAR_1;
 }

 for (;;) {
  if (VAR_3) {
   VAR_8 = FUNC_1(VAR_6, VAR_2, VAR_4);
   if (VAR_8 <= 0)
    continue;
  }

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_2(VAR_5[VAR_7], VAR_6);
 }
}
