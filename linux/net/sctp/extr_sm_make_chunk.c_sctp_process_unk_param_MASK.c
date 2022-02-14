
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sctp_params {int v; TYPE_1__* p; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef enum sctp_ierror { ____Placeholder_sctp_ierror } sctp_ierror ;
struct TYPE_2__ {int type; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int ,int ) ;
 int FUNC_2 (struct sctp_chunk*,int ,int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,struct sctp_chunk*) ;

__attribute__((used)) static enum sctp_ierror FUNC_4(
     const struct sctp_association *VAR_5,
     union sctp_params VAR_6,
     struct sctp_chunk *VAR_7,
     struct sctp_chunk **VAR_8)
{
 int VAR_9 = VAR_3;

 switch (VAR_6.p->type & VAR_4) {
 case 131:
  VAR_9 = VAR_1;
  break;
 case 129:
  break;
 case 130:
  VAR_9 = VAR_1;

 case 128:



  if (!*VAR_8) {
   *VAR_8 = FUNC_3(VAR_5, VAR_7);
   if (!*VAR_8) {





    VAR_9 = VAR_2;
    break;
   }
  }

  if (!FUNC_2(*VAR_8, VAR_0,
         FUNC_0(VAR_6.p->length)))
   FUNC_1(*VAR_8, FUNC_0(VAR_6.p->length),
      VAR_6.v);
  break;
 default:
  break;
 }

 return VAR_9;
}
