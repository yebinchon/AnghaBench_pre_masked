
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_fact_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,int ,struct isst_fact_info*) ;
 int FUNC_1 (int,int ,struct isst_fact_info*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4, void *VAR_5, void *VAR_6,
         void *VAR_7, void *VAR_8)
{
 struct isst_fact_info VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_4, VAR_3, &VAR_9);
 if (VAR_10)
  FUNC_2("isst_get_fact_bucket_info");
 else
  FUNC_0(VAR_4, VAR_2, VAR_3, VAR_1,
           VAR_0, &VAR_9);
}
