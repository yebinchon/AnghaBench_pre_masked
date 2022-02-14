
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int checksum; } ;
struct rxkad_response {TYPE_1__ encrypted; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rxkad_response *VAR_0)
{
 u32 VAR_1 = 1000003;
 int VAR_2;
 u8 *VAR_3 = (u8 *) VAR_0;

 for (VAR_2 = sizeof(*VAR_0); VAR_2 > 0; VAR_2--)
  VAR_1 = VAR_1 * 0x10204081 + *VAR_3++;

 VAR_0->encrypted.checksum = FUNC_0(VAR_1);
}
