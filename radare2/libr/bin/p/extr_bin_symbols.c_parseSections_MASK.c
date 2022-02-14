
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut32 ;
struct TYPE_3__ {char* string; } ;
typedef int RListFree ;
typedef int RList ;
typedef int RBuffer ;
typedef TYPE_1__ RBinString ;
typedef int RBinSection ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int * FUNC_2 (char const*,scalar_t__,scalar_t__,int ) ;
 int * FUNC_3 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int) ;
 int * FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_1 ;

__attribute__((used)) static RList *FUNC_11(RBuffer *VAR_2, int VAR_3, int VAR_4, RList *VAR_5) {

 int VAR_6 = FUNC_5 (VAR_2);
 char *VAR_7 = FUNC_1 (VAR_6);
 if (!VAR_7) {
  return ((void*)0);
 }
 bool VAR_8 = 0;
 if (!VAR_5) {
  VAR_5 = FUNC_3 (VAR_2, VAR_1, VAR_6);
  if (VAR_5) {
   VAR_8 = 1;
  }
 }

 FUNC_4 (VAR_2, VAR_3, (ut8 *)VAR_7, 4);
 if (VAR_7[0] == '_') {
  VAR_3 += 16;
 }
 RList *VAR_9 = FUNC_9 ((RListFree)VAR_0);
 int VAR_10;
 FUNC_4 (VAR_2, VAR_3, (ut8 *)VAR_7, VAR_6);
 int VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_11 = VAR_10 * 16;
  if (VAR_11 + 8 >= VAR_6) {
   break;
  }
  RBinString *VAR_12 = VAR_5? FUNC_8 (VAR_5, VAR_10): ((void*)0);
  const char *VAR_13 = VAR_12? VAR_12->string: "";
  ut32 VAR_14 = FUNC_10 (VAR_7 + VAR_11);
  ut32 VAR_15 = FUNC_10 (VAR_7 + VAR_11 + 4);




  RBinSection *VAR_16 = FUNC_2 (VAR_13, VAR_14, VAR_14 + VAR_15, 0);
  FUNC_6 (VAR_9, VAR_16);
 }
 if (VAR_8) {
  FUNC_7 (VAR_5);
 }
 FUNC_0 (VAR_7);
 return VAR_9;
}
