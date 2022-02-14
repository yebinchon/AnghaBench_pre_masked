
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sctp_transport {int dummy; } ;


 struct sctp_transport* FUNC_0 (struct sctp_transport*,struct sctp_transport*) ;
 scalar_t__ FUNC_1 (struct sctp_transport*) ;

__attribute__((used)) static struct sctp_transport *FUNC_2(struct sctp_transport *VAR_0,
          struct sctp_transport *VAR_1)
{
 u8 VAR_2, VAR_3;

 if (VAR_1 == ((void*)0) || VAR_0 == VAR_1)
  return VAR_0;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);





 if (VAR_2 > VAR_3)
  return VAR_0;
 else if (VAR_2 == VAR_3)
  return FUNC_0(VAR_1, VAR_0);
 else
  return VAR_1;
}
