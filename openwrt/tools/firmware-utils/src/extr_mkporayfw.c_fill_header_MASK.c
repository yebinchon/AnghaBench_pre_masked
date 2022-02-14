
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fw_header {void* flags; void* firmware_len; void* hw_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_header*,int ,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_3)
{
 struct fw_header *VAR_4 = (struct fw_header *) VAR_3;

 FUNC_1(VAR_4, 0, sizeof (struct fw_header));
 VAR_4->hw_id = FUNC_0(VAR_2);
 VAR_4->firmware_len = FUNC_0(VAR_1);
 VAR_4->flags = FUNC_0(VAR_0);
}
