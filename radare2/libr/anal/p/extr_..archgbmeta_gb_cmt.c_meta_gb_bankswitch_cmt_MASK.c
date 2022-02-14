
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut16 ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,char*) ;

void FUNC_1(RAnal *VAR_1, ut64 VAR_2, ut16 VAR_3) {
 if(0x1fff <VAR_3 && VAR_3 < 0x4000 && VAR_2 < 0x4000)
  FUNC_0 (VAR_1, VAR_0, VAR_2, "Bankswitch");
 if(0x6000 > VAR_3 && VAR_3 > 0x3fff)
  FUNC_0(VAR_1, VAR_0, VAR_2, "Ramswitch");
}
