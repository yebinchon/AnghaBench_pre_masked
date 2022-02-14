
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ebb_count; int spurious; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_5 ;
 void* FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 uint64_t VAR_8;

 VAR_8 = FUNC_1(VAR_1);
 if (!(VAR_8 & VAR_0)) {
  VAR_5.stats.spurious++;
  goto out;
 }

 VAR_5.stats.ebb_count++;
 FUNC_0(1, VAR_7);

 VAR_4 = FUNC_1(VAR_2);


 FUNC_3();

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_4 != VAR_3)
  VAR_6 = 1;

out:
 FUNC_2();
}
