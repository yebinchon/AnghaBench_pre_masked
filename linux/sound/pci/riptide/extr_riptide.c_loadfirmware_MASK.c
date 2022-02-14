
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmdif {int dummy; } ;



 int VAR_0 ;




 int FUNC_0 (struct cmdif*,int) ;
 int FUNC_1 (unsigned char const*,int) ;
 int FUNC_2 (struct cmdif*,unsigned char const*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct cmdif *VAR_1, const unsigned char *VAR_2,
   unsigned int VAR_3)
{
 const unsigned char *VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_5 = VAR_6 = 0;
 while (VAR_3 > 0 && VAR_9 == 0) {
  VAR_4 = VAR_2;
  if (VAR_4[0] == ':') {
   VAR_7 = FUNC_1(&VAR_4[7], 2);
   switch (VAR_7) {
   case 132:
    VAR_9 = FUNC_2(VAR_1, VAR_4, VAR_5 + VAR_6);
    break;
   case 128:
    VAR_6 = FUNC_1(&VAR_4[9], 4) << 4;
    break;
   case 129:
    VAR_5 = FUNC_1(&VAR_4[9], 4) << 16;
    break;
   case 130:
    VAR_8 = FUNC_1(&VAR_4[9], 8);
    if (FUNC_0(VAR_1, VAR_8) != 0)
     VAR_9 = -VAR_0;
    break;
   case 131:
    VAR_3 = 0;
    break;
   default:
    break;
   }
   while (VAR_3 > 0) {
    VAR_3--;
    if (*VAR_2++ == '\n')
     break;
   }
  }
 }
 FUNC_3("load firmware return %d\n", VAR_9);
 return VAR_9;
}
