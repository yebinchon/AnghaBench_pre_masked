
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int cflags; } ;
struct cvec {int dummy; } ;
typedef char chr ;


 char FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 (struct cvec*,char) ;
 struct cvec* FUNC_2 (struct vars*,char) ;
 int FUNC_3 (int ) ;
 struct cvec* FUNC_4 (struct vars*,int,int ) ;

__attribute__((used)) static struct cvec *
FUNC_5(struct vars *VAR_1,
    chr VAR_2,

    int VAR_3)
{
 struct cvec *VAR_4;


 if ((VAR_1->cflags & VAR_0) && VAR_2 == 'x')
 {
  VAR_4 = FUNC_4(VAR_1, 4, 0);
  FUNC_1(VAR_4, FUNC_0('x'));
  FUNC_1(VAR_4, FUNC_0('y'));
  if (VAR_3)
  {
   FUNC_1(VAR_4, FUNC_0('X'));
   FUNC_1(VAR_4, FUNC_0('Y'));
  }
  return VAR_4;
 }


 if (VAR_3)
  return FUNC_2(VAR_1, VAR_2);
 VAR_4 = FUNC_4(VAR_1, 1, 0);
 FUNC_3(VAR_4 != ((void*)0));
 FUNC_1(VAR_4, VAR_2);
 return VAR_4;
}
