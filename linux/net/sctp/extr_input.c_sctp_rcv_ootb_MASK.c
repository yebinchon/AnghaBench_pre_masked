
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; void* data; } ;
struct sctp_chunkhdr {scalar_t__ type; int length; } ;
typedef int _ch ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct sctp_chunkhdr* FUNC_2 (struct sk_buff*,int,int,struct sctp_chunkhdr*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3)
{
 struct sctp_chunkhdr *VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0;


 do {

  if (VAR_7 + sizeof(VAR_5) > VAR_3->len)
   break;

  VAR_4 = FUNC_2(VAR_3, VAR_7, sizeof(*VAR_4), &VAR_5);


  if (FUNC_1(VAR_4->length) < sizeof(VAR_5))
   break;

  VAR_6 = VAR_7 + FUNC_0(FUNC_1(VAR_4->length));
  if (VAR_6 > VAR_3->len)
   break;





  if (VAR_0 == VAR_4->type)
   goto discard;





  if (VAR_2 == VAR_4->type)
   goto discard;






  if (VAR_1 == VAR_4->type && (void *)VAR_4 != VAR_3->data)
   goto discard;

  VAR_7 = VAR_6;
 } while (VAR_6 < VAR_3->len);

 return 0;

discard:
 return 1;
}
