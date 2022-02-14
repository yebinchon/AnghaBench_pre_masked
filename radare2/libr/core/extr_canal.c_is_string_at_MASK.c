
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef int ut64 ;
typedef int rstr ;
struct TYPE_3__ {int io; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int,int*) ;
 int FUNC_3 (int ,int,scalar_t__*,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5(RCore *VAR_1, ut64 VAR_2, int *VAR_3) {
 ut8 VAR_4[128] = {0};
 int VAR_5 = 0, VAR_6 = 0;
 ut8 *VAR_7 = FUNC_0 (256, 1);
 if (!VAR_7) {
  if (VAR_3) {
   *VAR_3 = 0;
  }
  return ((void*)0);
 }
 FUNC_3 (VAR_1->io, VAR_2, VAR_7, 255);

 VAR_7[255] = 0;
 if (FUNC_2 (VAR_7, 256, &VAR_6)) {
  if (VAR_3) {
   *VAR_3 = VAR_6;
  }
  return (char*) VAR_7;
 }

 ut64 *VAR_8 = (ut64*)VAR_7;
 ut64 VAR_9 = VAR_8[0];
 if (VAR_9 >> 32) {
  VAR_9 &= VAR_0;
 }

 if (VAR_8[0] == 0 && VAR_8[1] < 0x1000) {
  ut64 VAR_10 = VAR_8[2];
  if (VAR_10 >> 32) {
   VAR_10 &= VAR_0;
  }
  if (VAR_10) {
   FUNC_3 (VAR_1->io, VAR_10, VAR_4, sizeof (VAR_4));
   VAR_4[127] = 0;
   VAR_5 = FUNC_2 (VAR_4, 128, &VAR_6);
   if (VAR_5) {
    FUNC_4 ((char*) VAR_7, (char*) VAR_4);
    if (VAR_3) {
     *VAR_3 = VAR_6;
    }
    return (char*) VAR_7;
   }
  }
 } else {

  FUNC_3 (VAR_1->io, VAR_9, VAR_4, sizeof (VAR_4));
  VAR_4[127] = 0;
  VAR_5 = FUNC_2 (VAR_4, sizeof (VAR_4), &VAR_6);
  if (VAR_5) {
   FUNC_4 ((char*) VAR_7, (char*) VAR_4);
   if (VAR_3) {
    *VAR_3 = VAR_6;
   }
   return (char*) VAR_7;
  }
 }

 if (VAR_6 < 1) {
  VAR_5 = 0;
  FUNC_1 (VAR_7);
  VAR_6 = -1;
 } else if (VAR_3) {
  *VAR_3 = VAR_6;
 }

 return VAR_5? (char *)VAR_7: ((void*)0);
}
