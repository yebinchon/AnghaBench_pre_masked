
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RAnalReilOpcode ;
typedef int RAnalReilArg ;
typedef int RAnalEsil ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static bool FUNC_7(RAnalEsil *VAR_0, RAnalReilOpcode VAR_1, ut8 VAR_2) {
 int VAR_3 = 1;
 RAnalReilArg *VAR_4, *VAR_5;

 VAR_4 = FUNC_5 (VAR_0);
 if (!VAR_4) {
  return 0;
 }
 VAR_5 = FUNC_5 (VAR_0);
 if (!VAR_5) {
  FUNC_0 (VAR_4);
  return 0;
 }

 FUNC_6(VAR_0, VAR_4);
 VAR_3 &= FUNC_3(VAR_0, VAR_2);
 FUNC_6(VAR_0, VAR_5);
 VAR_3 &= FUNC_2(VAR_0, VAR_1);
 FUNC_6(VAR_0, VAR_4);
 VAR_3 &= FUNC_4(VAR_0, VAR_2);

 FUNC_1 (VAR_4);
 FUNC_1 (VAR_5);
 return VAR_3;
}
