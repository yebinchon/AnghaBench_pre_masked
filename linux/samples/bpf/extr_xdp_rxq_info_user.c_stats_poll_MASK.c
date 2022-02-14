
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_record {int dummy; } ;
typedef int __u32 ;


 struct stats_record* FUNC_0 () ;
 int FUNC_1 (struct stats_record*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct stats_record*) ;
 int FUNC_4 (struct stats_record*,struct stats_record*,int,int ) ;
 int FUNC_5 (struct stats_record**,struct stats_record**) ;

__attribute__((used)) static void FUNC_6(int VAR_0, int VAR_1, __u32 VAR_2)
{
 struct stats_record *VAR_3, *VAR_4;

 VAR_3 = FUNC_0();
 VAR_4 = FUNC_0();
 FUNC_3(VAR_3);

 while (1) {
  FUNC_5(&VAR_4, &VAR_3);
  FUNC_3(VAR_3);
  FUNC_4(VAR_3, VAR_4, VAR_1, VAR_2);
  FUNC_2(VAR_0);
 }

 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
}
