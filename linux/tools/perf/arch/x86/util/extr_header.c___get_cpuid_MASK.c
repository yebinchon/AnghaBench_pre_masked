
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (char*,size_t,char const*,char*,int,int,int) ;
 scalar_t__ FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1, size_t VAR_2, const char *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = -1, VAR_10 = -1, VAR_11 = -1;
 int VAR_12;
 char VAR_13[16];

 FUNC_0(0, &VAR_8, &VAR_5, &VAR_6, &VAR_7);
 FUNC_3(&VAR_13[0], (char *)(&VAR_5), 4);
 FUNC_3(&VAR_13[4], (char *)(&VAR_7), 4);
 FUNC_3(&VAR_13[8], (char *)(&VAR_6), 4);
 VAR_13[12] = '\0';

 if (VAR_8 >= 1) {
  FUNC_0(1, &VAR_4, &VAR_5, &VAR_6, &VAR_7);

  VAR_9 = (VAR_4 >> 8) & 0xf;
  VAR_10 = (VAR_4 >> 4) & 0xf;
  VAR_11 = VAR_4 & 0xf;


  if (VAR_9 == 0xf)
   VAR_9 += (VAR_4 >> 20) & 0xff;


  if (VAR_9 >= 0x6)
   VAR_10 += ((VAR_4 >> 16) & 0xf) << 4;
 }
 VAR_12 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_13, VAR_9, VAR_10, VAR_11);


 if (FUNC_2(VAR_1, '$')) {
  VAR_1[VAR_12-1] = '\0';
  return 0;
 }
 return VAR_0;
}
