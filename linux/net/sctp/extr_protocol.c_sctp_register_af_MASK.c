
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_af {int sa_family; int list; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 struct sctp_af* VAR_1 ;
 struct sctp_af* VAR_2 ;

int FUNC_2(struct sctp_af *VAR_3)
{
 switch (VAR_3->sa_family) {
 case 129:
  if (VAR_1)
   return 0;
  VAR_1 = VAR_3;
  break;
 case 128:
  if (VAR_2)
   return 0;
  VAR_2 = VAR_3;
  break;
 default:
  return 0;
 }

 FUNC_0(&VAR_3->list);
 FUNC_1(&VAR_3->list, &VAR_0);
 return 1;
}
