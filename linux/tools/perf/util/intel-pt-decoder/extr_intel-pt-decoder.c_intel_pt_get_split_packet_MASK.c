
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {unsigned char* temp_buf; size_t len; unsigned char* buf; size_t pos; unsigned char* next_buf; size_t next_len; int pkt_ctx; int packet; int prev_pkt_ctx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*,int) ;
 int FUNC_2 (unsigned char*,size_t,int *,int *) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_4(struct intel_pt_decoder *VAR_2)
{
 unsigned char *VAR_3 = VAR_2->temp_buf;
 size_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_2->len;
 VAR_5 = VAR_2->len;
 FUNC_3(VAR_3, VAR_2->buf, VAR_5);

 VAR_7 = FUNC_1(VAR_2, 0);
 if (VAR_7) {
  VAR_2->pos += VAR_4;
  return VAR_7 < 0 ? VAR_7 : -VAR_0;
 }

 VAR_6 = VAR_1 - VAR_5;
 if (VAR_6 > VAR_2->len)
  VAR_6 = VAR_2->len;
 FUNC_3(VAR_3 + VAR_5, VAR_2->buf, VAR_6);
 VAR_5 += VAR_6;

 VAR_2->prev_pkt_ctx = VAR_2->pkt_ctx;
 VAR_7 = FUNC_2(VAR_3, VAR_5, &VAR_2->packet, &VAR_2->pkt_ctx);
 if (VAR_7 < (int)VAR_4) {
  VAR_2->next_buf = VAR_2->buf;
  VAR_2->next_len = VAR_2->len;
  VAR_2->buf = VAR_3;
  VAR_2->len = VAR_4;
  return FUNC_0(VAR_2);
 }

 VAR_2->next_buf = VAR_2->buf + (VAR_7 - VAR_4);
 VAR_2->next_len = VAR_2->len - (VAR_7 - VAR_4);

 VAR_2->buf = VAR_3;
 VAR_2->len = VAR_7;

 return VAR_7;
}
