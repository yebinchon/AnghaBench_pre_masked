
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int auth_chunk; int skb; int transmitted_list; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sctp_chunk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct sctp_chunk *VAR_1)
{
 FUNC_0(!FUNC_5(&VAR_1->list));
 FUNC_4(&VAR_1->transmitted_list);

 FUNC_2(VAR_1->skb);
 FUNC_2(VAR_1->auth_chunk);

 FUNC_1(VAR_1);
 FUNC_3(VAR_0, VAR_1);
}
