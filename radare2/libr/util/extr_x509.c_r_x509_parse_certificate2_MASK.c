
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int RX509Certificate ;
typedef int RASN1Object ;


 int * FUNC_0 (int const*,int ,int const*) ;
 int * FUNC_1 (int *) ;

RX509Certificate *FUNC_2 (const ut8 *VAR_0, ut32 VAR_1) {
 RX509Certificate *VAR_2;
 RASN1Object *VAR_3;
 if (!VAR_0 || !VAR_1) {
  return ((void*)0);
 }
 VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_0);
 VAR_2 = FUNC_1 (VAR_3);

 return VAR_2;
}
