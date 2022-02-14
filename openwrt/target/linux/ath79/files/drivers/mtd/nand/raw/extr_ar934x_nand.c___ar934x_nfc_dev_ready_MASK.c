
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar934x_nfc*,int ) ;

__attribute__((used)) static bool FUNC_1(struct ar934x_nfc *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 return (VAR_2 & 0xff) == 0xff;
}
