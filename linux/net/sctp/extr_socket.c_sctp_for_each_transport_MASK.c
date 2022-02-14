
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sctp_transport sctp_transport ;
struct rhashtable_iter {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sctp_transport*) ;
 struct sctp_transport* FUNC_1 (struct net*,struct rhashtable_iter*,int) ;
 struct sctp_transport* FUNC_2 (struct net*,struct rhashtable_iter*) ;
 int FUNC_3 (struct sctp_transport*) ;
 int FUNC_4 (struct rhashtable_iter*) ;
 int FUNC_5 (struct rhashtable_iter*) ;

int FUNC_6(int (*VAR_0)(struct sctp_transport *, void *),
       int (*VAR_1)(struct sctp_transport *, void *),
       struct net *VAR_2, int *VAR_3, void *VAR_4) {
 struct rhashtable_iter VAR_5;
 struct sctp_transport *VAR_6;
 int VAR_7;

again:
 VAR_7 = 0;
 FUNC_4(&VAR_5);

 VAR_6 = FUNC_1(VAR_2, &VAR_5, *VAR_3 + 1);
 for (; !FUNC_0(VAR_6); VAR_6 = FUNC_2(VAR_2, &VAR_5)) {
  VAR_7 = VAR_0(VAR_6, VAR_4);
  if (VAR_7)
   break;
  (*VAR_3)++;
  FUNC_3(VAR_6);
 }
 FUNC_5(&VAR_5);

 if (VAR_7) {
  if (VAR_1 && !VAR_1(VAR_6, VAR_4)) {
   (*VAR_3)++;
   FUNC_3(VAR_6);
   goto again;
  }
  FUNC_3(VAR_6);
 }

 return VAR_7;
}
