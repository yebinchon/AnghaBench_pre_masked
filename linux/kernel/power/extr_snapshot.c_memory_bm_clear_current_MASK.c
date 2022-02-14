
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* node; scalar_t__ node_bit; } ;
struct memory_bitmap {TYPE_2__ cur; } ;
struct TYPE_3__ {int data; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct memory_bitmap *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->cur.node_bit - 1, 0);
 FUNC_0(VAR_1, VAR_0->cur.node->data);
}
