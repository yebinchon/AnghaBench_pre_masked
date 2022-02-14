
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_association {scalar_t__ assoc_id; } ;
typedef scalar_t__ sctp_assoc_t ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sctp_association*,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct sctp_association *VAR_4, gfp_t VAR_5)
{
 bool VAR_6 = FUNC_0(VAR_5);
 int VAR_7;


 if (VAR_4->assoc_id)
  return 0;

 if (VAR_6)
  FUNC_2(VAR_5);
 FUNC_4(&VAR_3);



 VAR_7 = FUNC_1(&VAR_2, VAR_4, VAR_1 + 1, 0,
          VAR_0);
 FUNC_5(&VAR_3);
 if (VAR_6)
  FUNC_3();
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->assoc_id = (sctp_assoc_t)VAR_7;
 return 0;
}
