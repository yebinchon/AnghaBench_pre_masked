
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rle {int state; int run; int* buf; } ;
typedef int fz_context ;






 int FUNC_0 (int *,struct rle*) ;
 int FUNC_1 (int *,struct rle*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct rle *VAR_4 = VAR_1;
 const unsigned char *VAR_5 = VAR_2;
 while (VAR_3-- > 0)
 {
  int VAR_6 = *VAR_5++;
  switch (VAR_4->state)
  {
  case 128:
   VAR_4->state = 130;
   VAR_4->run = 1;
   VAR_4->buf[0] = VAR_6;
   break;

  case 130:
   VAR_4->state = 131;
   VAR_4->run = 2;
   VAR_4->buf[1] = VAR_6;
   break;

  case 131:

   if (VAR_4->run == 128)
   {
    FUNC_0(VAR_0, VAR_4);
    VAR_4->state = 130;
    VAR_4->run = 1;
    VAR_4->buf[0] = VAR_6;
   }

   else if ((VAR_4->run >= 2) && (VAR_6 == VAR_4->buf[VAR_4->run-1]) && (VAR_6 == VAR_4->buf[VAR_4->run-2]))
   {
    if (VAR_4->run >= 3) {
     VAR_4->run -= 2;
     FUNC_0(VAR_0, VAR_4);
    }
    VAR_4->state = 129;
    VAR_4->run = 3;
    VAR_4->buf[0] = VAR_6;
   }
   else
   {
    VAR_4->buf[VAR_4->run] = VAR_6;
    VAR_4->run++;
   }
   break;

  case 129:
   if ((VAR_4->run == 128) || (VAR_6 != VAR_4->buf[0]))
   {
    FUNC_1(VAR_0, VAR_4);
    VAR_4->state = 130;
    VAR_4->run = 1;
    VAR_4->buf[0] = VAR_6;
   }
   else
   {
    VAR_4->run++;
   }
  }
 }
}
