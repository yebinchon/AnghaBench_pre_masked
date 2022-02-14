
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sighand; } ;
struct TYPE_4__ {int siglock; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,unsigned long const,int ) ;
 int FUNC_2 (unsigned long const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static long FUNC_5(void)
{
 const unsigned long VAR_3 = VAR_1;
 long VAR_4 = -VAR_0;

 FUNC_3(&VAR_2->sighand->siglock);

 if (!FUNC_2(VAR_3))
  goto out;




 FUNC_1(VAR_2, VAR_3, 0);
 VAR_4 = 0;

out:
 FUNC_4(&VAR_2->sighand->siglock);

 return VAR_4;
}
