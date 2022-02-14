
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int tmp ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,void*,size_t,int *,int*,scalar_t__*,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_4, bool VAR_5, uint32_t VAR_6,
       void *VAR_7, size_t VAR_8)
{
 __u8 VAR_9[VAR_2 << 2];
 __u32 VAR_10 = sizeof(VAR_9);
 uint32_t VAR_11;
 int VAR_12;

 if (VAR_5)
  FUNC_2(1);
 VAR_12 = FUNC_0(VAR_4, 1, VAR_7, VAR_8,
    VAR_9, &VAR_10, &VAR_11, ((void*)0));
 if (VAR_5)
  FUNC_2(0);
 if (VAR_12 && VAR_3 != 524 && VAR_3 != VAR_0) {
  FUNC_1("Unexpected bpf_prog_test_run error ");
  return VAR_12;
 }
 if (!VAR_12 && VAR_11 != VAR_6 &&
     VAR_6 != VAR_1) {
  FUNC_1("FAIL retval %d != %d ", VAR_11, VAR_6);
  return 1;
 }

 return 0;
}
