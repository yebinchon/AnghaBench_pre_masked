
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* b; } ;
typedef TYPE_1__ uuid_le ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(char *VAR_0, uuid_le VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0 + VAR_2, "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
  VAR_1.b[3], VAR_1.b[2], VAR_1.b[1], VAR_1.b[0],
  VAR_1.b[5], VAR_1.b[4], VAR_1.b[7], VAR_1.b[6],
  VAR_1.b[8], VAR_1.b[9], VAR_1.b[10], VAR_1.b[11],
  VAR_1.b[12], VAR_1.b[13], VAR_1.b[14], VAR_1.b[15]);
}
