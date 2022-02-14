
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvec {int chrspace; int rangespace; int * chrs; int * ranges; } ;
typedef int chr ;


 scalar_t__ FUNC_0 (size_t) ;
 struct cvec* FUNC_1 (struct cvec*) ;

__attribute__((used)) static struct cvec *
FUNC_2(int VAR_0,
  int VAR_1)
{
 size_t VAR_2 = (size_t) VAR_0 + (size_t) VAR_1 * 2;
 size_t VAR_3 = sizeof(struct cvec) + VAR_2 * sizeof(chr);
 struct cvec *VAR_4 = (struct cvec *) FUNC_0(VAR_3);

 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->chrspace = VAR_0;
 VAR_4->chrs = (chr *) (((char *) VAR_4) + sizeof(struct cvec));
 VAR_4->ranges = VAR_4->chrs + VAR_0;
 VAR_4->rangespace = VAR_1;
 return FUNC_1(VAR_4);
}
