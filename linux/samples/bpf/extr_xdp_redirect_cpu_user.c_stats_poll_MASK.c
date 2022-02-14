
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_record {int dummy; } ;


 int VAR_0 ;
 struct stats_record* FUNC_0 () ;
 int FUNC_1 (struct stats_record*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct stats_record*) ;
 int FUNC_5 (struct stats_record*,struct stats_record*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct stats_record**,struct stats_record**) ;

__attribute__((used)) static void FUNC_8(int VAR_1, bool VAR_2, char *VAR_3,
         bool VAR_4)
{
 struct stats_record *VAR_5, *VAR_6;

 VAR_5 = FUNC_0();
 VAR_6 = FUNC_0();
 FUNC_4(VAR_5);


 if (VAR_2)
  FUNC_2(VAR_0, "en_US");

 while (1) {
  FUNC_7(&VAR_6, &VAR_5);
  FUNC_4(VAR_5);
  FUNC_5(VAR_5, VAR_6, VAR_3);
  FUNC_3(VAR_1);
  if (VAR_4)
   FUNC_6();
 }

 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
}
