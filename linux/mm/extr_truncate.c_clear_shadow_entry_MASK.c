
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int i_pages; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct address_space*,int ,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct address_space *VAR_0, pgoff_t VAR_1,
          void *VAR_2)
{
 FUNC_1(&VAR_0->i_pages);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->i_pages);
}
