
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int expedited_sequence; } ;


 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_4(void)
{
 unsigned long VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(&VAR_0.expedited_sequence);
 FUNC_3(VAR_0.name, VAR_1, FUNC_0("snap"));
 return VAR_1;
}
