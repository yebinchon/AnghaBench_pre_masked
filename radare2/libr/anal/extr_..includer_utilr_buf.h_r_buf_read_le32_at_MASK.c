
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int buf ;
typedef int RBuffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline ut32 FUNC_2(RBuffer *VAR_1, ut64 VAR_2) {
 ut8 VAR_3[sizeof (ut32)];
 int VAR_4 = (int) FUNC_0 (VAR_1, VAR_2, VAR_3, sizeof (VAR_3));
 return VAR_4 == sizeof (VAR_3)? FUNC_1 (VAR_3): VAR_0;
}
