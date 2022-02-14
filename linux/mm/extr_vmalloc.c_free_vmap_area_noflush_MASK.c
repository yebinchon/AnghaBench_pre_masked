
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int va_end; int va_start; int purge_list; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int,int *) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmap_area*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct vmap_area *VAR_5)
{
 unsigned long VAR_6;

 FUNC_3(&VAR_1);
 FUNC_7(VAR_5, &VAR_2);
 FUNC_4(&VAR_1);

 VAR_6 = FUNC_0((VAR_5->va_end - VAR_5->va_start) >>
    VAR_0, &VAR_3);


 FUNC_2(&VAR_5->purge_list, &VAR_4);

 if (FUNC_6(VAR_6 > FUNC_1()))
  FUNC_5();
}
