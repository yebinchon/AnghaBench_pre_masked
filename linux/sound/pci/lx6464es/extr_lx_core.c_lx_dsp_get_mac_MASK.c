
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct lx6464es {void** mac_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lx6464es*,int ) ;

int FUNC_1(struct lx6464es *VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1) & 0x00FFFFFF;
 VAR_4 = FUNC_0(VAR_2, VAR_0) & 0x00FFFFFF;


 VAR_2->mac_address[5] = ((u8 *)(&VAR_4))[0];
 VAR_2->mac_address[4] = ((u8 *)(&VAR_4))[1];
 VAR_2->mac_address[3] = ((u8 *)(&VAR_4))[2];
 VAR_2->mac_address[2] = ((u8 *)(&VAR_3))[0];
 VAR_2->mac_address[1] = ((u8 *)(&VAR_3))[1];
 VAR_2->mac_address[0] = ((u8 *)(&VAR_3))[2];

 return 0;
}
