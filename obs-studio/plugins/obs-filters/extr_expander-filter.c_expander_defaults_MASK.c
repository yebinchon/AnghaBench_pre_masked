
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,double) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static void FUNC_5(obs_data_t *VAR_7)
{
 const char *VAR_8 = FUNC_0(VAR_7, VAR_3);
 bool VAR_9 = 1;
 if (FUNC_4(VAR_8, "gate") == 0)
  VAR_9 = 0;
 FUNC_3(VAR_7, VAR_3,
        VAR_9 ? "expander" : "gate");
 FUNC_1(VAR_7, VAR_4,
        VAR_9 ? 2.0 : 10.0);
 FUNC_1(VAR_7, VAR_6, -40.0f);
 FUNC_2(VAR_7, VAR_0, 10);
 FUNC_2(VAR_7, VAR_5,
     VAR_9 ? 50 : 125);
 FUNC_1(VAR_7, VAR_2, 0.0);
 FUNC_3(VAR_7, VAR_1, "RMS");
}
