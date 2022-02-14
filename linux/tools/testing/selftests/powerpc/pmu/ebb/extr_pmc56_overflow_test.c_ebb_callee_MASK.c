
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(void)
{
 uint64_t VAR_8;

 VAR_8 = FUNC_1(VAR_2);
 if (!(VAR_8 & VAR_0)) {
  VAR_5.stats.spurious++;
  goto out;
 }

 VAR_5.stats.ebb_count++;
 FUNC_0(2, VAR_7);

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 >= VAR_1)
  VAR_6++;

 FUNC_0(5, VAR_1);

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 >= VAR_1)
  VAR_6++;

 FUNC_0(6, VAR_1);

out:
 FUNC_2();
}
