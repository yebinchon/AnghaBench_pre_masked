
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * Walfile ;
struct TYPE_2__ {int fd; scalar_t__ compression; int sync; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_3(Walfile VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_2();

 if (!VAR_0->sync)
  return 0;





 if (VAR_0->compression)
  return 0;

 return FUNC_1(VAR_0->fd);
}
