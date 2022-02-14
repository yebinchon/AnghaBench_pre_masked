
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvec {int cclasscode; scalar_t__ nranges; scalar_t__ nchrs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct cvec *
FUNC_1(struct cvec *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));
 VAR_0->nchrs = 0;
 VAR_0->nranges = 0;
 VAR_0->cclasscode = -1;
 return VAR_0;
}
