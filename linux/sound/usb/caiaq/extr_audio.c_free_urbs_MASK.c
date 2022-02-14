
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct urb** transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb**) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb **VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1[VAR_2])
   continue;

  FUNC_2(VAR_1[VAR_2]);
  FUNC_0(VAR_1[VAR_2]->transfer_buffer);
  FUNC_1(VAR_1[VAR_2]);
 }

 FUNC_0(VAR_1);
}
