
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
typedef int buf ;
typedef int RBuffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline ut16 FUNC_2(RBuffer *VAR_1) {
 ut8 VAR_2[sizeof (ut16)];
 int VAR_3 = (int) FUNC_0 (VAR_1, VAR_2, sizeof (VAR_2));
 return VAR_3 == sizeof (VAR_2)? FUNC_1 (VAR_2): VAR_0;
}
