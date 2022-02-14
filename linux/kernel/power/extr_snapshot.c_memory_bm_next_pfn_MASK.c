
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long node_pfn; int node_bit; TYPE_2__* zone; TYPE_1__* node; } ;
struct memory_bitmap {TYPE_3__ cur; } ;
struct TYPE_5__ {unsigned long end_pfn; int start_pfn; } ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (struct memory_bitmap*) ;

__attribute__((used)) static unsigned long FUNC_3(struct memory_bitmap *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 int VAR_6;

 do {
  VAR_5 = VAR_2->cur.zone->end_pfn - VAR_2->cur.zone->start_pfn;
  VAR_3 = FUNC_1(VAR_5 - VAR_2->cur.node_pfn, VAR_0);
  VAR_6 = FUNC_0(VAR_2->cur.node->data, VAR_3,
       VAR_2->cur.node_bit);
  if (VAR_6 < VAR_3) {
   VAR_4 = VAR_2->cur.zone->start_pfn + VAR_2->cur.node_pfn + VAR_6;
   VAR_2->cur.node_bit = VAR_6 + 1;
   return VAR_4;
  }
 } while (FUNC_2(VAR_2));

 return VAR_1;
}
