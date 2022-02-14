
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_writer_t ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (int *,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(json_writer_t *VAR_0, const void *VAR_1,
        bool VAR_2)
{







 __u64 VAR_3, VAR_4;





 VAR_3 = *(__u64 *)(VAR_1 + 8);
 VAR_4 = *(__u64 *)VAR_1;


 if (VAR_2) {
  if (VAR_3 == 0)
   FUNC_0(VAR_0, "0x%llx", VAR_4);
  else
   FUNC_0(VAR_0, "0x%llx%016llx", VAR_3, VAR_4);
 } else {
  if (VAR_3 == 0)
   FUNC_0(VAR_0, "\"0x%llx\"", VAR_4);
  else
   FUNC_0(VAR_0, "\"0x%llx%016llx\"", VAR_3, VAR_4);
 }
}
