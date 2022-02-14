
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrap_data {scalar_t__ iotype; int my_fd; int * handle; int (* h_cleanup ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct wrap_data *VAR_2 = VAR_1;
 if(VAR_2->iotype == VAR_0)
 {
  if(VAR_2->h_cleanup != ((void*)0) && VAR_2->handle != ((void*)0))
  VAR_2->h_cleanup(VAR_2->handle);

  VAR_2->handle = ((void*)0);
 }
 if(VAR_2->my_fd >= 0)
 {
  FUNC_0(VAR_2->my_fd);
  VAR_2->my_fd = -1;
 }
}
