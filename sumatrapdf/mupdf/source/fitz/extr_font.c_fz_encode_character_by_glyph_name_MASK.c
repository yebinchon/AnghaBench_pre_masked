
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ft_face; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,char const*) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(fz_context *VAR_0, fz_font *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 if (VAR_1->ft_face)
 {
  VAR_3 = FUNC_1(VAR_1->ft_face, VAR_2);
  if (VAR_3 == 0)
   VAR_3 = FUNC_0(VAR_1->ft_face, FUNC_2(VAR_2));
 }

 return VAR_3;
}
