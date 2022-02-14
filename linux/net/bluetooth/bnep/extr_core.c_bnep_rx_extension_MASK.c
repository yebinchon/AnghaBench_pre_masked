
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct bnep_session {int dummy; } ;
struct bnep_ext_hdr {int type; int len; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct bnep_session*,scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct bnep_session *VAR_3, struct sk_buff *VAR_4)
{
 struct bnep_ext_hdr *VAR_5;
 int VAR_6 = 0;

 do {
  VAR_5 = (void *) VAR_4->data;
  if (!FUNC_2(VAR_4, sizeof(*VAR_5))) {
   VAR_6 = -VAR_2;
   break;
  }

  FUNC_0("type 0x%x len %d", VAR_5->type, VAR_5->len);

  switch (VAR_5->type & VAR_1) {
  case 128:
   FUNC_1(VAR_3, VAR_4->data, VAR_4->len);
   break;

  default:

   break;
  }

  if (!FUNC_2(VAR_4, VAR_5->len)) {
   VAR_6 = -VAR_2;
   break;
  }
 } while (!VAR_6 && (VAR_5->type & VAR_0));

 return VAR_6;
}
