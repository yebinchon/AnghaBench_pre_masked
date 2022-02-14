
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct gport {int dummy; } ;
typedef int RBuffer ;


 int * FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct gport*,int const*,scalar_t__,int) ;
 int FUNC_2 (struct gport*) ;

__attribute__((used)) static int FUNC_3(struct gport *VAR_0, RBuffer *VAR_1) {
 FUNC_2 (VAR_0);

 ut64 VAR_2;
 const ut8 *VAR_3 = FUNC_0 (VAR_1, &VAR_2);
 if (FUNC_1 (VAR_0, VAR_3, VAR_2, 100) != VAR_2) {
  return -1;
 }

 return 0;
}
