
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6 < 0) {
  FUNC_2("failed to open scaling_max_freq, errno=%d\n", VAR_4);
  return VAR_6;
 }

 VAR_5 = FUNC_4(VAR_6, VAR_1, FUNC_3(VAR_1));
 if (VAR_5 < 0) {
  FUNC_2("failed to open scaling_max_freq, errno=%d\n", VAR_4);
  goto err;
 }

 VAR_5 = FUNC_4(VAR_6, VAR_0, FUNC_3(VAR_0));
 if (VAR_5 < 0) {
  FUNC_2("failed to open scaling_max_freq, errno=%d\n", VAR_4);
  goto err;
 }

err:
 FUNC_0(VAR_6);
 return VAR_5;
}
