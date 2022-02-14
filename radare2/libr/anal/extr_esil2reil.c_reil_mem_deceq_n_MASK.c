
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RAnalReilArg ;
typedef int RAnalEsil ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(RAnalEsil *VAR_1, ut8 VAR_2) {
 int VAR_3 = 1;
 RAnalReilArg *VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4) {
  return 0;
 }

 FUNC_1(VAR_1, 1);
 FUNC_4(VAR_1, VAR_4);
 VAR_3 &= FUNC_2(VAR_1, VAR_0, VAR_2);

 FUNC_0 (VAR_4);
 return VAR_3;
}
