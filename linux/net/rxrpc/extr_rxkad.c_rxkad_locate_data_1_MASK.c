
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rxrpc_call {int dummy; } ;
struct rxkad_level1_hdr {int data_size; } ;
typedef int sechdr ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int,struct rxkad_level1_hdr*,int) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_call *VAR_0, struct sk_buff *VAR_1,
    unsigned int *VAR_2, unsigned int *VAR_3)
{
 struct rxkad_level1_hdr VAR_4;

 if (FUNC_2(VAR_1, *VAR_2, &VAR_4, sizeof(VAR_4)) < 0)
  FUNC_0();
 *VAR_2 += sizeof(VAR_4);
 *VAR_3 = FUNC_1(VAR_4.data_size) & 0xffff;
}
