
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ ebb_count; int spurious; } ;
struct TYPE_4__ {int trace; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(void)
{
 uint64_t VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_3);
 if (!(VAR_10 & VAR_0)) {
  VAR_7.stats.spurious++;
  goto out;
 }

 VAR_7.stats.ebb_count++;
 FUNC_4(VAR_7.trace, VAR_7.stats.ebb_count);


 FUNC_0(1, VAR_8);

out:
 if (VAR_7.stats.ebb_count == VAR_2)

  FUNC_3(VAR_1);
 else

  FUNC_2();


 VAR_9 = FUNC_1(VAR_6);
 FUNC_5(VAR_7.trace, VAR_6, VAR_9);

 VAR_10 = FUNC_1(VAR_5);
 FUNC_5(VAR_7.trace, VAR_5, VAR_10);

 VAR_10 = FUNC_1(VAR_4);
 FUNC_5(VAR_7.trace, VAR_4, VAR_10);
}
