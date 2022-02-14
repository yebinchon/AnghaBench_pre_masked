
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CameraState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,double,double) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(CameraState *VAR_2) {
  int VAR_3;

  FUNC_3(VAR_2, 1.0, 1.0);

  VAR_3 = FUNC_2(VAR_2, VAR_1, FUNC_0(VAR_1), VAR_0);
  FUNC_1("sensor start regs: %d", VAR_3);
}
