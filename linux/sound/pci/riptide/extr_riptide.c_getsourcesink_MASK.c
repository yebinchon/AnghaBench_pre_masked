
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {unsigned char* retbytes; } ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmdif*,unsigned char,unsigned char,union cmdret*) ;
 int FUNC_1 (char*,unsigned char,unsigned char) ;

__attribute__((used)) static int
FUNC_2(struct cmdif *VAR_2, unsigned char VAR_3, unsigned char VAR_4,
       unsigned char *VAR_5, unsigned char *VAR_6)
{
 union cmdret VAR_7 = VAR_0;

 if (FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_7) &&
     FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_7))
  return -VAR_1;
 *VAR_5 = VAR_7.retbytes[0];
 *VAR_6 = VAR_7.retbytes[1];
 FUNC_1("getsourcesink 0x%x 0x%x\n", *VAR_5, *VAR_6);
 return 0;
}
