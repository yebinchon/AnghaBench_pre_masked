
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_image ;
struct TYPE_2__ {int list; } ;
typedef TYPE_1__ fz_display_list_image ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_image *VAR_1)
{
 fz_display_list_image *VAR_2 = (fz_display_list_image *)VAR_1;

 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_0, VAR_2->list);
}
