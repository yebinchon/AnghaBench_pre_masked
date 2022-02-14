
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_qsv {int packet_data; int performance_token; } ;


 int FUNC_0 (struct obs_qsv*) ;
 int FUNC_1 (struct obs_qsv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct obs_qsv *VAR_1 = (struct obs_qsv *)VAR_0;

 if (VAR_1) {
  FUNC_3(VAR_1->performance_token);
  FUNC_1(VAR_1);
  FUNC_2(VAR_1->packet_data);
  FUNC_0(VAR_1);
 }
}
