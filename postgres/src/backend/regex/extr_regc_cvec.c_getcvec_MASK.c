
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {struct cvec* cv; } ;
struct cvec {int chrspace; int rangespace; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct cvec* FUNC_1 (struct cvec*) ;
 int FUNC_2 (struct cvec*) ;
 struct cvec* FUNC_3 (int,int) ;

__attribute__((used)) static struct cvec *
FUNC_4(struct vars *VAR_1,
  int VAR_2,
  int VAR_3)
{

 if (VAR_1->cv != ((void*)0) && VAR_2 <= VAR_1->cv->chrspace &&
  VAR_3 <= VAR_1->cv->rangespace)
  return FUNC_1(VAR_1->cv);


 if (VAR_1->cv != ((void*)0))
  FUNC_2(VAR_1->cv);
 VAR_1->cv = FUNC_3(VAR_2, VAR_3);
 if (VAR_1->cv == ((void*)0))
  FUNC_0(VAR_0);

 return VAR_1->cv;
}
