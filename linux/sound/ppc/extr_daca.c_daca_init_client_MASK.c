
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_keywest {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,unsigned char*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pmac_keywest *VAR_4)
{
 unsigned short VAR_5 = 0x00;


 if (FUNC_1(VAR_4->client, VAR_2, 0x08) < 0 ||
     FUNC_1(VAR_4->client, VAR_1, 0x05) < 0)
  return -VAR_3;
 return FUNC_0(VAR_4->client, VAR_0,
       2, (unsigned char*)&VAR_5);
}
