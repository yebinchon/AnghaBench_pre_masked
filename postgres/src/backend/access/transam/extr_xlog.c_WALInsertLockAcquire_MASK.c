
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pgprocno; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_5__ {TYPE_1__ l; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 bool VAR_5;
 static int VAR_6 = -1;

 if (VAR_6 == -1)
  VAR_6 = VAR_2->pgprocno % VAR_3;
 VAR_1 = VAR_6;





 VAR_5 = FUNC_0(&VAR_4[VAR_1].l.lock, VAR_0);
 if (!VAR_5)
 {
  VAR_6 = (VAR_6 + 1) % VAR_3;
 }
}
