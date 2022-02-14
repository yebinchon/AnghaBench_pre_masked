
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct mts64 {TYPE_1__* pardev; } ;
struct TYPE_2__ {struct parport* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parport*,int ) ;

__attribute__((used)) static int FUNC_1(struct mts64 *VAR_2)
{
 int VAR_3;
 struct parport *VAR_4 = VAR_2->pardev->port;

 for (VAR_3 = 0; VAR_3 < 5; ++VAR_3) {
  FUNC_0(VAR_4, VAR_0);
  FUNC_0(VAR_4, VAR_1);
 }

 return 0;
}
