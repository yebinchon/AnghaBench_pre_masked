
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const unsigned char** VAR_0, size_t *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 if(*VAR_1 < 2) return 0;

 if((*VAR_0)[0] == 0xff && (*VAR_0)[1] == 0xfe)
 VAR_2 = -1;

 if((*VAR_0)[0] == 0xfe && (*VAR_0)[1] == 0xff)
 VAR_2 = 1;


 if(VAR_2 != 0)
 {
  *VAR_0 += 2;
  *VAR_1 -= 2;

  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if(VAR_3 == 0) return VAR_2;
  else return VAR_3;
 }
 else return 0;
}
