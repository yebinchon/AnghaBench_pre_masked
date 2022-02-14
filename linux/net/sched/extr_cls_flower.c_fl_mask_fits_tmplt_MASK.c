
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_tmplt {int mask; } ;
struct fl_flow_mask {int key; } ;


 long* FUNC_0 (int *,struct fl_flow_mask*) ;
 int FUNC_1 (struct fl_flow_mask*) ;

__attribute__((used)) static bool FUNC_2(struct fl_flow_tmplt *VAR_0,
          struct fl_flow_mask *VAR_1)
{
 const long *VAR_2 = FUNC_0(&VAR_1->key, VAR_1);
 const long *VAR_3;
 int VAR_4;

 if (!VAR_0)
  return 1;
 VAR_3 = FUNC_0(&VAR_0->mask, VAR_1);
 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4 += sizeof(long)) {
  if (~*VAR_3++ & *VAR_2++)
   return 0;
 }
 return 1;
}
