
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmap_block {TYPE_1__* va; } ;
struct TYPE_2__ {int va_start; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vmap_block*,int ) ;
 struct vmap_block* FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct vmap_block *VAR_3)
{
 struct vmap_block *VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_1(VAR_3->va->va_start);
 FUNC_5(&VAR_2);
 VAR_4 = FUNC_4(&VAR_1, VAR_5);
 FUNC_6(&VAR_2);
 FUNC_0(VAR_4 != VAR_3);

 FUNC_2(VAR_3->va);
 FUNC_3(VAR_3, VAR_0);
}
