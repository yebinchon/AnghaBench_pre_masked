
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {TYPE_1__* ClusterSize; } ;
struct TYPE_3__ {int Allowed; int Default; } ;
typedef int BOOL ;


 char** VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_5 (int ,char*) ;

__attribute__((used)) static BOOL FUNC_6(int VAR_7)
{
 char* VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 ULONG VAR_12;

 FUNC_4(FUNC_1(VAR_6));

 if ((VAR_7 < 0) || (VAR_7 >= VAR_2)) {
  return VAR_1;
 }

 if ((VAR_4.ClusterSize[VAR_7].Allowed == 0)
  || (VAR_4.ClusterSize[VAR_7].Default == 0)) {
  return VAR_1;
 }

 for (VAR_9 = 0, VAR_12 = 0x100, VAR_10 = 0; VAR_12<0x10000000; VAR_9++, VAR_12 <<= 1) {
  if (VAR_12 & VAR_4.ClusterSize[VAR_7].Allowed) {
   if (VAR_12 == VAR_4.ClusterSize[VAR_7].Default) {
    VAR_8 = FUNC_5(VAR_3, VAR_0[VAR_9]);
    VAR_11 = VAR_10;
   } else {
    VAR_8 = VAR_0[VAR_9];
   }
   FUNC_4(FUNC_3(VAR_6, FUNC_0(VAR_6, VAR_8), VAR_12));
   VAR_10++;
  }
 }

 FUNC_4(FUNC_2(VAR_6, VAR_11));
 return VAR_5;
}
