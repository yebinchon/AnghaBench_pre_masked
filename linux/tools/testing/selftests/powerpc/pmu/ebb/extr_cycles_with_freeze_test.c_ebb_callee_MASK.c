
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ebb_count; int spurious; } ;
struct TYPE_4__ {int trace; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
 uint64_t VAR_9, VAR_10;

 VAR_9 = VAR_2 | VAR_1;

 VAR_10 = FUNC_1(VAR_3);
 if (!(VAR_10 & VAR_0)) {
  VAR_6.stats.spurious++;
  goto out;
 }

 VAR_6.stats.ebb_count++;
 FUNC_3(VAR_6.trace, VAR_6.stats.ebb_count);

 VAR_10 = FUNC_1(VAR_4);
 FUNC_4(VAR_6.trace, VAR_4, VAR_10);

 if (VAR_5) {
  FUNC_5(VAR_6.trace, "frozen");
  VAR_7++;
  VAR_9 &= ~VAR_1;
 }

 FUNC_0(1, VAR_8);
out:
 FUNC_2(VAR_9);
}
