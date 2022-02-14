
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pbf_info {int dummy; } ;


 int FUNC_0 (int,int ,struct isst_pbf_info*) ;
 int FUNC_1 (struct isst_pbf_info*) ;
 int FUNC_2 (int,int ,int ,struct isst_pbf_info*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(int VAR_2, void *VAR_3, void *VAR_4, void *VAR_5,
        void *VAR_6)
{
 struct isst_pbf_info VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_1, &VAR_7);
 if (VAR_8) {
  FUNC_3("isst_get_pbf_info");
 } else {
  FUNC_2(VAR_2, VAR_0, VAR_1, &VAR_7);
  FUNC_1(&VAR_7);
 }
}
