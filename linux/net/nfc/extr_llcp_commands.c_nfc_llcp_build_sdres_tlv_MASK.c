
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct nfc_llcp_sdp_tlv {int node; void* sap; void* tid; int * tlv; int tlv_len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct nfc_llcp_sdp_tlv*) ;
 struct nfc_llcp_sdp_tlv* FUNC_2 (int,int ) ;
 int * FUNC_3 (int ,void**,int,int *) ;

struct nfc_llcp_sdp_tlv *FUNC_4(u8 VAR_2, u8 VAR_3)
{
 struct nfc_llcp_sdp_tlv *VAR_4;
 u8 VAR_5[2];

 VAR_4 = FUNC_2(sizeof(struct nfc_llcp_sdp_tlv), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;

 VAR_4->tlv = FUNC_3(VAR_1, VAR_5, 2,
     &VAR_4->tlv_len);
 if (VAR_4->tlv == ((void*)0)) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 VAR_4->tid = VAR_2;
 VAR_4->sap = VAR_3;

 FUNC_0(&VAR_4->node);

 return VAR_4;
}
