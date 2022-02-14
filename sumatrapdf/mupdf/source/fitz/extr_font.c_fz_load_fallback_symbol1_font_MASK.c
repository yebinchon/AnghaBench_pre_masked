
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fz_font ;
struct TYPE_7__ {TYPE_1__* font; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_6__ {int * symbol1; } ;


 unsigned char* FUNC_0 (TYPE_2__*,int*) ;
 int * FUNC_1 (TYPE_2__*,int *,unsigned char const*,int,int ,int ) ;

__attribute__((used)) static fz_font *FUNC_2(fz_context *VAR_0)
{
 const unsigned char *VAR_1;
 int VAR_2;
 if (!VAR_0->font->symbol1)
 {
  VAR_1 = FUNC_0(VAR_0, &VAR_2);
  if (VAR_1)
   VAR_0->font->symbol1 = FUNC_1(VAR_0, ((void*)0), VAR_1, VAR_2, 0, 0);
 }
 return VAR_0->font->symbol1;
}
