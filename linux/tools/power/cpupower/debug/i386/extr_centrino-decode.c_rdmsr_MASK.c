
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,unsigned long long*,int) ;
 int FUNC_4 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_3, unsigned int VAR_4,
   unsigned int *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 char VAR_8[20];
 unsigned long long VAR_9;
 int VAR_10 = -1;

 *VAR_5 = *VAR_6 = 0;

 if (VAR_3 > VAR_0)
  goto err1;

 FUNC_4(VAR_8, "/dev/cpu/%d/msr", VAR_3);
 VAR_7 = FUNC_2(VAR_8, VAR_1);

 if (VAR_7 < 0)
  goto err1;

 if (FUNC_1(VAR_7, VAR_4, VAR_2) == -1)
  goto err2;

 if (FUNC_3(VAR_7, &VAR_9, 8) != 8)
  goto err2;

 *VAR_5 = (uint32_t )(VAR_9 & 0xffffffffull);
 *VAR_6 = (uint32_t )(VAR_9>>32 & 0xffffffffull);

 VAR_10 = 0;
err2:
 FUNC_0(VAR_7);
err1:
 return VAR_10;
}
