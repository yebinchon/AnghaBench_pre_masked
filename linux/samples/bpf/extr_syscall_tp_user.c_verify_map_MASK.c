
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,scalar_t__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 __u32 VAR_4 = 0;
 __u32 VAR_5;

 if (FUNC_0(VAR_3, &VAR_4, &VAR_5) != 0) {
  FUNC_2(VAR_2, "map_lookup failed: %s\n", FUNC_3(VAR_1));
  return;
 }
 if (VAR_5 == 0) {
  FUNC_2(VAR_2, "failed: map #%d returns value 0\n", VAR_3);
  return;
 }
 VAR_5 = 0;
 if (FUNC_1(VAR_3, &VAR_4, &VAR_5, VAR_0) != 0) {
  FUNC_2(VAR_2, "map_update failed: %s\n", FUNC_3(VAR_1));
  return;
 }
}
