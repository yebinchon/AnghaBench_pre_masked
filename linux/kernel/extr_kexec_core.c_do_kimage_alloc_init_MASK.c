
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int unusable_pages; int dest_pages; int control_pages; int type; int control_page; scalar_t__ head; scalar_t__* last_entry; scalar_t__* entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct kimage* FUNC_1 (int,int ) ;

struct kimage *FUNC_2(void)
{
 struct kimage *VAR_2;


 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->head = 0;
 VAR_2->entry = &VAR_2->head;
 VAR_2->last_entry = &VAR_2->head;
 VAR_2->control_page = ~0;
 VAR_2->type = VAR_1;


 FUNC_0(&VAR_2->control_pages);


 FUNC_0(&VAR_2->dest_pages);


 FUNC_0(&VAR_2->unusable_pages);

 return VAR_2;
}
