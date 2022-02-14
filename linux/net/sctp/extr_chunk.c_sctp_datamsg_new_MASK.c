
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_datamsg {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sctp_datamsg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sctp_datamsg*) ;

__attribute__((used)) static struct sctp_datamsg *FUNC_3(gfp_t VAR_1)
{
 struct sctp_datamsg *VAR_2;
 VAR_2 = FUNC_1(sizeof(struct sctp_datamsg), VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_0);
 }
 return VAR_2;
}
