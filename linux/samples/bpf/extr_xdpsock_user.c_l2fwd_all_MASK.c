
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
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct pollfd*) ;
 int FUNC_1 (struct pollfd*,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pollfd*,int,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__** VAR_6 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct pollfd VAR_7[VAR_0];
 int VAR_8, VAR_9;

 FUNC_1(VAR_7, 0, sizeof(VAR_7));

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7[VAR_8].fd = FUNC_3(VAR_6[VAR_8]->xsk);
  VAR_7[VAR_8].events = VAR_2 | VAR_1;
 }

 for (;;) {
  if (VAR_4) {
   VAR_9 = FUNC_2(VAR_7, VAR_3, VAR_5);
   if (VAR_9 <= 0)
    continue;
  }

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   FUNC_0(VAR_6[VAR_8], VAR_7);
 }
}
