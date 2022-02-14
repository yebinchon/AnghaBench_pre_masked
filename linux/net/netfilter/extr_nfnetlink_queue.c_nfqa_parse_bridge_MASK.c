
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct nf_queue_entry {TYPE_1__* skb; } ;
struct TYPE_3__ {int network_header; int mac_header; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr const* const,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct nf_queue_entry *VAR_7,
        const struct nlattr * const VAR_8[])
{
 if (VAR_8[VAR_2]) {
  struct nlattr *VAR_9[VAR_3 + 1];
  int VAR_10;

  VAR_10 = FUNC_5(VAR_9, VAR_3,
        VAR_8[VAR_2],
        VAR_6, ((void*)0));
  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_9[VAR_5] || !VAR_9[VAR_4])
   return -VAR_0;

  FUNC_0(VAR_7->skb,
   FUNC_3(VAR_9[VAR_4]),
   FUNC_6(FUNC_3(VAR_9[VAR_5])));
 }

 if (VAR_8[VAR_1]) {
  int VAR_11 = VAR_7->skb->network_header -
   VAR_7->skb->mac_header;

  if (VAR_11 != FUNC_4(VAR_8[VAR_1]))
   return -VAR_0;
  else if (VAR_11 > 0)
   FUNC_1(FUNC_7(VAR_7->skb),
          FUNC_2(VAR_8[VAR_1]),
          VAR_11);
 }

 return 0;
}
