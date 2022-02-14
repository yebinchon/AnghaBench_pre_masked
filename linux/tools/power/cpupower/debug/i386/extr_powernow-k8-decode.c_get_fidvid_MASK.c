
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_6, uint32_t *VAR_7, uint32_t *VAR_8)
{
 int VAR_9 = 1;
 uint64_t VAR_10 = 0;
 int VAR_11;
 char VAR_12[20];

 if (VAR_6 > VAR_0)
  goto out;

 FUNC_4(VAR_12, "/dev/cpu/%d/msr", VAR_6);

 VAR_11 = FUNC_2(VAR_12, VAR_4);
 if (VAR_11 < 0)
  goto out;
 FUNC_1(VAR_11, VAR_1, VAR_5);
 if (FUNC_3(VAR_11, &VAR_10, 8) != 8)
  goto err1;

 *VAR_7 = ((uint32_t )(VAR_10 & 0xffffffffull)) & VAR_3;
 *VAR_8 = ((uint32_t )(VAR_10>>32 & 0xffffffffull)) & VAR_2;
 VAR_9 = 0;
err1:
 FUNC_0(VAR_11);
out:
 return VAR_9;
}
