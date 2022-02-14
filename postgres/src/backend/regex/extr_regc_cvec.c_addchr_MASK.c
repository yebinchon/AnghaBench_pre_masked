
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvec {scalar_t__ nchrs; scalar_t__ chrspace; int * chrs; } ;
typedef int chr ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct cvec *VAR_0,
    chr VAR_1)
{
 FUNC_0(VAR_0->nchrs < VAR_0->chrspace);
 VAR_0->chrs[VAR_0->nchrs++] = VAR_1;
}
