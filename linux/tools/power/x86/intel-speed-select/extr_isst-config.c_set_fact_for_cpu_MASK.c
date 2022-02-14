
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*,char*,int) ;
 int FUNC_1 (int,struct isst_pkg_ctdp*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(int VAR_2, void *VAR_3, void *VAR_4, void *VAR_5,
        void *VAR_6)
{
 int VAR_7;
 int VAR_8 = *(int *)VAR_6;

 VAR_7 = FUNC_2(VAR_2, 0, VAR_8);
 if (VAR_7)
  FUNC_5("isst_set_fact");
 else {
  if (VAR_8) {
   struct isst_pkg_ctdp VAR_9;

   VAR_7 = FUNC_1(VAR_2, &VAR_9);
   if (VAR_7) {
    FUNC_0(VAR_2, VAR_1, "turbo-freq",
          "enable", VAR_7);
    return;
   }
   VAR_7 = FUNC_3(VAR_2, VAR_0);
   FUNC_0(VAR_2, VAR_1, "turbo-freq", "enable",
         VAR_7);
  } else {

   FUNC_4(VAR_2, VAR_0);
   FUNC_0(VAR_2, VAR_1, "turbo-freq", "disable",
         VAR_7);
  }
 }
}
