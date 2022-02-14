
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SegmentSignature; } ;
typedef int PVOID ;
typedef TYPE_1__ HEAP ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*,int,int *) ;

__attribute__((used)) static bool FUNC_1(HANDLE VAR_0, PVOID VAR_1) {
 HEAP VAR_2;
 if (FUNC_0 (VAR_0, VAR_1, &VAR_2, sizeof (HEAP), ((void*)0))) {
  if (VAR_2.SegmentSignature == 0xddeeddee) {
   return 1;
  }
 }
 return 0;
}
