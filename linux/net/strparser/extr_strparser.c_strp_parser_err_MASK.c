
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* abort_parser ) (struct strparser*,int) ;} ;
struct strparser {TYPE_1__ cb; int * skb_head; } ;
struct TYPE_5__ {int error; } ;
typedef TYPE_2__ read_descriptor_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct strparser*,int) ;

__attribute__((used)) static void FUNC_2(struct strparser *VAR_0, int VAR_1,
       read_descriptor_t *VAR_2)
{
 VAR_2->error = VAR_1;
 FUNC_0(VAR_0->skb_head);
 VAR_0->skb_head = ((void*)0);
 VAR_0->cb.abort_parser(VAR_0, VAR_1);
}
