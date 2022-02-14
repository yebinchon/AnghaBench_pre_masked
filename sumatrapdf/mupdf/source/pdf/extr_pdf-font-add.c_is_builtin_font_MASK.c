
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int buffer; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,unsigned char**) ;
 unsigned char* FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_0, fz_font *VAR_1)
{
 int VAR_2;
 unsigned char *VAR_3;
 if (!VAR_1->buffer)
  return 0;
 FUNC_0(VAR_0, VAR_1->buffer, &VAR_3);
 return FUNC_1(VAR_0, FUNC_2(VAR_1->name), &VAR_2) == VAR_3;
}
