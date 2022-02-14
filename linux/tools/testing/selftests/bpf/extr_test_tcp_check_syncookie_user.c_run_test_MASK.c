
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *,int ) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(int VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4 = -1, VAR_5 = -1;
 int VAR_6 = 0;
 __u32 VAR_7 = 0;
 __u32 VAR_8 = 1;
 __u32 VAR_9 = 2;
 __u32 VAR_10 = 0;
 __u32 VAR_11 = 0;
 __u32 VAR_12 = 0;

 if (FUNC_2(VAR_2, &VAR_7, &VAR_10, 0) < 0) {
  FUNC_5("Can't clear results");
  goto err;
 }

 if (FUNC_2(VAR_2, &VAR_8, &VAR_11, 0) < 0) {
  FUNC_5("Can't clear results");
  goto err;
 }

 if (FUNC_2(VAR_2, &VAR_9, &VAR_12, 0) < 0) {
  FUNC_5("Can't clear results");
  goto err;
 }

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 == -1)
  goto err;

 VAR_5 = FUNC_0(VAR_1, ((void*)0), 0);
 if (VAR_5 == -1) {
  FUNC_5("Can't accept connection");
  goto err;
 }

 if (FUNC_1(VAR_2, &VAR_7, &VAR_10) < 0) {
  FUNC_5("Can't lookup result");
  goto err;
 }

 if (VAR_10 == 0) {
  FUNC_5("Didn't match syncookie: %u", VAR_10);
  goto err;
 }

 if (FUNC_1(VAR_2, &VAR_8, &VAR_11) < 0) {
  FUNC_5("Can't lookup result");
  goto err;
 }

 if (VAR_3 && VAR_11 == 0) {


  FUNC_6("Skipping XDP cookie check\n");
  goto out;
 }

 if (FUNC_1(VAR_2, &VAR_9, &VAR_12) < 0) {
  FUNC_5("Can't lookup result");
  goto err;
 }

 if (VAR_10 != VAR_11) {
  FUNC_5("BPF generated cookie does not match kernel one");
  goto err;
 }

 if (VAR_12 < 536 || VAR_12 > VAR_0) {
  FUNC_5("Unexpected MSS retrieved");
  goto err;
 }

 goto out;

err:
 VAR_6 = 1;
out:
 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
 return VAR_6;
}
