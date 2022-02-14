
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_bebob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_bebob*,int*,unsigned int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_3(struct snd_bebob *VAR_2, unsigned int VAR_3, bool *VAR_4)
{
 int VAR_5;
 u8 *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_3);
 if (VAR_5 < 0)
  goto end;


 *VAR_4 = (VAR_6[VAR_3 - 2] != 0xff);
end:
 FUNC_1(VAR_6);
 return VAR_5;
}
