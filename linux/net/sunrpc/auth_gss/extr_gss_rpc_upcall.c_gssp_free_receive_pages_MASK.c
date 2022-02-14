
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gssx_arg_accept_sec_context {int npages; scalar_t__* pages; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct gssx_arg_accept_sec_context *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->npages && VAR_0->pages[VAR_1]; VAR_1++)
  FUNC_0(VAR_0->pages[VAR_1]);

 FUNC_1(VAR_0->pages);
}
