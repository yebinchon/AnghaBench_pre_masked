
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_common {int dummy; } ;
typedef int obs_data_t ;
typedef int json_t ;


 int FUNC_0 (struct rtmp_common*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0, obs_data_t *VAR_1,
           obs_data_t *VAR_2)
{
 struct rtmp_common *VAR_3 = VAR_0;
 json_t *VAR_4 = FUNC_2();

 if (VAR_4) {
  FUNC_0(VAR_3, VAR_4, VAR_1,
      VAR_2);
  FUNC_1(VAR_4);
 }
}
