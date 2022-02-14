
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int image; int refs; } ;
typedef TYPE_1__ fz_image_key ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, void *VAR_1)
{
 fz_image_key *VAR_2 = (fz_image_key *)VAR_1;
 if (FUNC_1(VAR_0, VAR_2, &VAR_2->refs))
 {
  FUNC_0(VAR_0, VAR_2->image);
  FUNC_2(VAR_0, VAR_2);
 }
}
