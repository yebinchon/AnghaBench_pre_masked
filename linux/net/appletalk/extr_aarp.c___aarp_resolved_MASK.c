
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct aarp_entry {struct aarp_entry* next; int hwaddr; scalar_t__ expires_at; int packet_queue; } ;
struct TYPE_3__ {int (* request ) (TYPE_1__*,struct sk_buff*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct aarp_entry** VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct aarp_entry **VAR_5, struct aarp_entry *VAR_6,
       int VAR_7)
{
 struct sk_buff *VAR_8;

 while (*VAR_5)
  if (*VAR_5 == VAR_6) {
   VAR_4--;
   *VAR_5 = VAR_6->next;


   VAR_6->next = VAR_2[VAR_7];
   VAR_2[VAR_7] = VAR_6;


   while ((VAR_8 = FUNC_0(&VAR_6->packet_queue)) != ((void*)0)) {
    VAR_6->expires_at = VAR_1 +
      VAR_3 * 10;
    VAR_0->request(VAR_0, VAR_8, VAR_6->hwaddr);
   }
  } else
   VAR_5 = &((*VAR_5)->next);
}
