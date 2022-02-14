
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uffdio_api {scalar_t__ api; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,struct uffdio_api*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(int VAR_9)
{
 struct uffdio_api VAR_10;

 VAR_7 = FUNC_3(VAR_5, VAR_1 | VAR_2);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6,
   "userfaultfd syscall not available in this kernel\n");
  return 1;
 }
 VAR_8 = FUNC_0(VAR_7, VAR_0, ((void*)0));

 VAR_10.api = VAR_4;
 VAR_10.features = VAR_9;
 if (FUNC_2(VAR_7, VAR_3, &VAR_10)) {
  FUNC_1(VAR_6, "UFFDIO_API\n");
  return 1;
 }
 if (VAR_10.api != VAR_4) {
  FUNC_1(VAR_6, "UFFDIO_API error %ld\n", VAR_10.api);
  return 1;
 }

 return 0;
}
