
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int buf ;
typedef int RBuffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline ut64 FUNC_2(RBuffer *VAR_1, ut64 VAR_2, bool VAR_3) {
 ut8 VAR_4[sizeof (ut64)];
 int VAR_5 = (int) FUNC_0 (VAR_1, VAR_2, VAR_4, sizeof (VAR_4));
 return VAR_5 == sizeof (VAR_4)? FUNC_1 (VAR_4, VAR_3): VAR_0;
}
