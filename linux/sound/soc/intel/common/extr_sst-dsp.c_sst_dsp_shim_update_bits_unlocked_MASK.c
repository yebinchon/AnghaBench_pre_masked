
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sst_dsp {int dummy; } ;


 unsigned int FUNC_0 (struct sst_dsp*,unsigned int) ;
 int FUNC_1 (struct sst_dsp*,unsigned int,unsigned int) ;

int FUNC_2(struct sst_dsp *VAR_0, u32 VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 bool VAR_4;
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1);

 VAR_5 = VAR_7;
 VAR_6 = (VAR_5 & (~VAR_2)) | (VAR_3 & VAR_2);

 VAR_4 = (VAR_5 != VAR_6);
 if (VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_6);

 return VAR_4;
}
