
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {void (* complete ) (struct urb*) ;} ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct urb **VAR_1, void (*VAR_2)(struct urb *))
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct urb *VAR_4 = VAR_1[VAR_3];
  VAR_4->complete = VAR_2;
 }
}
