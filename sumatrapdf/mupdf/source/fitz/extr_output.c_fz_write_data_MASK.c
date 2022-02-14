
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bp; int ep; int wp; int state; int (* write ) (int *,int ,char const*,size_t) ;} ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int FUNC_0 (int,char const*,size_t) ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int ,char const*,size_t) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,int ,char const*,size_t) ;

void
FUNC_5(fz_context *VAR_0, fz_output *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_2;

 if (VAR_1->bp)
 {
  if (VAR_3 >= (size_t) (VAR_1->ep - VAR_1->bp))
  {
   if (VAR_1->wp > VAR_1->bp)
   {
    VAR_1->write(VAR_0, VAR_1->state, VAR_1->bp, VAR_1->wp - VAR_1->bp);
    VAR_1->wp = VAR_1->bp;
   }
   VAR_1->write(VAR_0, VAR_1->state, VAR_4, VAR_3);
  }
  else if (VAR_1->wp + VAR_3 <= VAR_1->ep)
  {
   FUNC_0(VAR_1->wp, VAR_4, VAR_3);
   VAR_1->wp += VAR_3;
  }
  else
  {
   size_t VAR_5 = VAR_1->ep - VAR_1->wp;
   FUNC_0(VAR_1->wp, VAR_4, VAR_5);
   VAR_1->write(VAR_0, VAR_1->state, VAR_1->bp, VAR_1->ep - VAR_1->bp);
   FUNC_0(VAR_1->bp, VAR_4 + VAR_5, VAR_3 - VAR_5);
   VAR_1->wp = VAR_1->bp + VAR_3 - VAR_5;
  }
 }
 else
 {
  VAR_1->write(VAR_0, VAR_1->state, VAR_4, VAR_3);
 }
}
