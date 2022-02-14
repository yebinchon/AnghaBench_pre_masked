
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct nfc_llcp_sdp_tlv {size_t tlv_len; int* tlv; int* uri; int node; int time; void* tid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct nfc_llcp_sdp_tlv*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int*,char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;

struct nfc_llcp_sdp_tlv *FUNC_6(u8 VAR_4, char *VAR_5,
        size_t VAR_6)
{
 struct nfc_llcp_sdp_tlv *VAR_7;

 FUNC_5("uri: %s, len: %zu\n", VAR_5, VAR_6);


 if (FUNC_1(VAR_6 > VAR_2 - 4))
  return ((void*)0);

 VAR_7 = FUNC_3(sizeof(struct nfc_llcp_sdp_tlv), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->tlv_len = VAR_6 + 3;

 if (VAR_5[VAR_6 - 1] == 0)
  VAR_7->tlv_len--;

 VAR_7->tlv = FUNC_3(VAR_7->tlv_len + 1, VAR_0);
 if (VAR_7->tlv == ((void*)0)) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 VAR_7->tlv[0] = VAR_1;
 VAR_7->tlv[1] = VAR_7->tlv_len - 2;
 VAR_7->tlv[2] = VAR_4;

 VAR_7->tid = VAR_4;
 VAR_7->uri = VAR_7->tlv + 3;
 FUNC_4(VAR_7->uri, VAR_5, VAR_6);

 VAR_7->time = VAR_3;

 FUNC_0(&VAR_7->node);

 return VAR_7;
}
