
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct gport {int dummy; } ;
typedef int RBuffer ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (struct gport*,int*,int,int) ;

__attribute__((used)) static int FUNC_4(struct gport *VAR_0, ut8 VAR_1, RBuffer *VAR_2) {
 ut8 VAR_3[256];
 int VAR_4 = FUNC_3 (VAR_0, VAR_3, 2, 50);

 if (VAR_4 < 2) {
  return -1;
 }

 if (VAR_1 != VAR_3[1]) {
  return -1;
 }

 if (!(VAR_3[0] - 2)) {
  return 0;
 }

 VAR_4 = FUNC_3 (VAR_0, VAR_3 + 2, VAR_3[0] - 2, 50) + 2;

 if (VAR_4 != VAR_3[0]) {
  return -1;
 }
 FUNC_2 (VAR_2, VAR_3 + 2, VAR_4 - 3);

 return 0;
}
