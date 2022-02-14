
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; int csum; } ;
struct TYPE_2__ {scalar_t__ c; } ;
struct raw_frag_vec {int hlen; int msg; TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__,char*,int,int ) ;
 int FUNC_2 (int ,char*,int,int,int,struct sk_buff*) ;
 int FUNC_3 (char*,scalar_t__,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5,
         struct sk_buff *VAR_6)
{
 struct raw_frag_vec *VAR_7 = VAR_1;

 if (VAR_3 < VAR_7->hlen) {
  int VAR_8 = FUNC_4(VAR_7->hlen - VAR_3, VAR_4);

  if (VAR_6->ip_summed == VAR_0)
   FUNC_3(VAR_2, VAR_7->hdr.c + VAR_3, VAR_8);
  else
   VAR_6->csum = FUNC_0(
    VAR_6->csum,
    FUNC_1(VAR_7->hdr.c + VAR_3,
         VAR_2, VAR_8, 0),
    VAR_5);

  VAR_5 = 0;
  VAR_3 += VAR_8;
  VAR_2 += VAR_8;
  VAR_4 -= VAR_8;

  if (!VAR_4)
   return 0;
 }

 VAR_3 -= VAR_7->hlen;

 return FUNC_2(VAR_7->msg, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
