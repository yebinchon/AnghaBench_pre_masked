
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_media_addr {int value; } ;


 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct tipc_media_addr *VAR_0, char *VAR_1,
       int VAR_2)
{
 if (VAR_2 < 60)
  return 1;

 FUNC_0(VAR_1, "%20phC", VAR_0->value);

 return 0;
}
