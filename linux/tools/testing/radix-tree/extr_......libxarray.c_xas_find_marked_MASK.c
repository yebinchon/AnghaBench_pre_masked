
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xa_mark_t ;
struct xa_state {int xa_index; int xa_offset; TYPE_1__* xa_node; int xa; } ;
struct TYPE_6__ {int shift; unsigned int offset; } ;


 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (struct xa_state*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int ,TYPE_1__*,unsigned int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (int ,TYPE_1__*) ;
 void* FUNC_9 (void*) ;
 unsigned int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (struct xa_state*) ;
 unsigned int FUNC_12 (struct xa_state*,int,int ) ;
 int FUNC_13 (struct xa_state*,unsigned int) ;
 int FUNC_14 (struct xa_state*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;

void *FUNC_16(struct xa_state *VAR_2, unsigned long VAR_3, xa_mark_t VAR_4)
{
 bool VAR_5 = 1;
 unsigned int VAR_6;
 void *VAR_7;

 if (FUNC_11(VAR_2))
  return ((void*)0);

 if (!VAR_2->xa_node) {
  VAR_2->xa_index = 1;
  goto out;
 } else if (FUNC_15(VAR_2->xa_node)) {
  VAR_5 = 0;
  VAR_7 = FUNC_4(VAR_2->xa);
  VAR_2->xa_node = ((void*)0);
  if (VAR_2->xa_index > FUNC_0(VAR_7))
   goto out;
  if (!FUNC_5(VAR_7)) {
   if (FUNC_7(VAR_2->xa, VAR_4))
    return VAR_7;
   VAR_2->xa_index = 1;
   goto out;
  }
  VAR_2->xa_node = FUNC_9(VAR_7);
  VAR_2->xa_offset = VAR_2->xa_index >> VAR_2->xa_node->shift;
 }

 while (VAR_2->xa_index <= VAR_3) {
  if (FUNC_2(VAR_2->xa_offset == VAR_1)) {
   VAR_2->xa_offset = VAR_2->xa_node->offset + 1;
   VAR_2->xa_node = FUNC_8(VAR_2->xa, VAR_2->xa_node);
   if (!VAR_2->xa_node)
    break;
   VAR_5 = 0;
   continue;
  }

  if (!VAR_5) {
   VAR_7 = FUNC_3(VAR_2->xa, VAR_2->xa_node, VAR_2->xa_offset);
   if (FUNC_6(VAR_7)) {
    VAR_2->xa_offset = FUNC_10(VAR_7);
    FUNC_13(VAR_2, VAR_2->xa_offset);
   }
  }

  VAR_6 = FUNC_12(VAR_2, VAR_5, VAR_4);
  if (VAR_6 > VAR_2->xa_offset) {
   VAR_5 = 0;
   FUNC_13(VAR_2, VAR_6);

   if ((VAR_2->xa_index - 1) >= VAR_3)
    goto max;
   VAR_2->xa_offset = VAR_6;
   if (VAR_6 == VAR_1)
    continue;
  }

  VAR_7 = FUNC_3(VAR_2->xa, VAR_2->xa_node, VAR_2->xa_offset);
  if (!FUNC_5(VAR_7))
   return VAR_7;
  VAR_2->xa_node = FUNC_9(VAR_7);
  FUNC_14(VAR_2);
 }

out:
 if (VAR_2->xa_index > VAR_3)
  goto max;
 return FUNC_1(VAR_2);
max:
 VAR_2->xa_node = VAR_0;
 return ((void*)0);
}
