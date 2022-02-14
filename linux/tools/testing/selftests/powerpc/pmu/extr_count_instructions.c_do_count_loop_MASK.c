
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int value; } ;
struct event {TYPE_1__ result; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event*) ;
 int FUNC_1 (struct event*) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct event *VAR_2, u64 VAR_3,
    u64 VAR_4, bool VAR_5)
{
 s64 VAR_6, VAR_7;
 double VAR_8;

 FUNC_3(VAR_1);


 FUNC_5(VAR_3 >> 5);

 FUNC_3(VAR_0);

 FUNC_0(&VAR_2[0]);
 FUNC_0(&VAR_2[1]);

 VAR_7 = VAR_3 + VAR_4;
 VAR_6 = VAR_2[0].result.value - VAR_7;
 VAR_8 = (double)VAR_6 / VAR_2[0].result.value * 100;

 if (VAR_5) {
  FUNC_1(&VAR_2[0]);
  FUNC_1(&VAR_2[1]);

  FUNC_4("Looped for %llu instructions, overhead %llu\n", VAR_3, VAR_4);
  FUNC_4("Expected %llu\n", VAR_7);
  FUNC_4("Actual   %llu\n", VAR_2[0].result.value);
  FUNC_4("Delta    %lld, %f%%\n", VAR_6, VAR_8);
 }

 FUNC_2(&VAR_2[0]);
 FUNC_2(&VAR_2[1]);

 if (VAR_6 < 0)
  VAR_6 = -VAR_6;


 VAR_6 *= 10000 * 100;
 if (VAR_6 / VAR_2[0].result.value)
  return -1;

 return 0;
}
