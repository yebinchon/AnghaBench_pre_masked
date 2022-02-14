
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct xt_sctp_info {int chunk_match_type; int flag_count; int chunkmap; struct xt_sctp_flag_info* flag_info; } ;
struct xt_sctp_flag_info {int dummy; } ;
struct sk_buff {unsigned int len; } ;
struct sctp_chunkhdr {scalar_t__ length; int flags; int type; } ;
typedef int _sch ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;



 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct xt_sctp_flag_info const*,int,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,...) ;
 struct sctp_chunkhdr* FUNC_9 (struct sk_buff const*,unsigned int,int,struct sctp_chunkhdr*) ;

__attribute__((used)) static inline bool
FUNC_10(const struct sk_buff *VAR_0,
      unsigned int VAR_1,
      const struct xt_sctp_info *VAR_2,
      bool *VAR_3)
{
 u_int32_t VAR_4[256 / sizeof (u_int32_t)];
 const struct sctp_chunkhdr *VAR_5;
 struct sctp_chunkhdr VAR_6;
 int VAR_7 = VAR_2->chunk_match_type;
 const struct xt_sctp_flag_info *VAR_8 = VAR_2->flag_info;
 int VAR_9 = VAR_2->flag_count;





 if (VAR_7 == 130)
  FUNC_1(VAR_4, VAR_2->chunkmap);

 do {
  VAR_5 = FUNC_9(VAR_0, VAR_1, sizeof(VAR_6), &VAR_6);
  if (VAR_5 == ((void*)0) || VAR_5->length == 0) {
   FUNC_8("Dropping invalid SCTP packet.\n");
   *VAR_3 = 1;
   return 0;
  }






  VAR_1 += FUNC_4(FUNC_7(VAR_5->length));

  FUNC_8("skb->len: %d\toffset: %d\n", VAR_0->len, VAR_1);

  if (FUNC_3(VAR_2->chunkmap, VAR_5->type)) {
   switch (VAR_7) {
   case 129:
    if (FUNC_6(VAR_8, VAR_9,
     VAR_5->type, VAR_5->flags)) {
     return 1;
    }
    break;

   case 130:
    if (FUNC_6(VAR_8, VAR_9,
        VAR_5->type, VAR_5->flags))
     FUNC_0(VAR_4, VAR_5->type);
    break;

   case 128:
    if (!FUNC_6(VAR_8, VAR_9,
        VAR_5->type, VAR_5->flags))
     return 0;
    break;
   }
  } else {
   switch (VAR_7) {
   case 128:
    return 0;
   }
  }
 } while (VAR_1 < VAR_0->len);

 switch (VAR_7) {
 case 130:
  return FUNC_2(VAR_4);
 case 129:
  return 0;
 case 128:
  return 1;
 }


 return 0;
}
