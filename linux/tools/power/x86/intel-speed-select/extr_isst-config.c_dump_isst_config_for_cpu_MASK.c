
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp {int dummy; } ;
typedef int pkg_dev ;


 int FUNC_0 (int,int ,int ,struct isst_pkg_ctdp*) ;
 int FUNC_1 (int,int ,struct isst_pkg_ctdp*) ;
 int FUNC_2 (int,struct isst_pkg_ctdp*) ;
 int FUNC_3 (struct isst_pkg_ctdp*,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(int VAR_2, void *VAR_3, void *VAR_4,
         void *VAR_5, void *VAR_6)
{
 struct isst_pkg_ctdp VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_1(VAR_2, VAR_1, &VAR_7);
 if (VAR_8) {
  FUNC_4("isst_get_process_ctdp");
 } else {
  FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_7);
  FUNC_2(VAR_2, &VAR_7);
 }
}
