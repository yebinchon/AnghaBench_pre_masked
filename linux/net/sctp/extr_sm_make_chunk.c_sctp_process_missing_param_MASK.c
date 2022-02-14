
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct __sctp_missing {int type; int num_missing; } ;
typedef int report ;
typedef enum sctp_param { ____Placeholder_sctp_param } sctp_param ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct __sctp_missing*) ;
 int FUNC_3 (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk*,int ) ;

__attribute__((used)) static int FUNC_5(const struct sctp_association *VAR_1,
          enum sctp_param VAR_2,
          struct sctp_chunk *VAR_3,
          struct sctp_chunk **VAR_4)
{
 struct __sctp_missing VAR_5;
 __u16 VAR_6;

 VAR_6 = FUNC_0(sizeof(VAR_5));




 if (!*VAR_4)
  *VAR_4 = FUNC_4(VAR_1, VAR_3, VAR_6);

 if (*VAR_4) {
  VAR_5.num_missing = FUNC_1(1);
  VAR_5.type = VAR_2;
  FUNC_3(*VAR_4, VAR_0,
    sizeof(VAR_5));
  FUNC_2(*VAR_4, sizeof(VAR_5), &VAR_5);
 }


 return 0;
}
