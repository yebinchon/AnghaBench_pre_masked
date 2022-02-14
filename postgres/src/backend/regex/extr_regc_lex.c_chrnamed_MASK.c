
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int err; } ;
struct cvec {scalar_t__ nchrs; int * chrs; } ;
typedef int chr ;


 int FUNC_0 (struct vars*,int const*,int const*) ;
 struct cvec* FUNC_1 (struct vars*,int ,int ,int ) ;

__attribute__((used)) static chr
FUNC_2(struct vars *VAR_0,
   const chr *VAR_1,
   const chr *VAR_2,
   chr VAR_3)
{
 chr VAR_4;
 int VAR_5;
 int VAR_6;
 struct cvec *VAR_7;

 VAR_5 = VAR_0->err;
 VAR_0->err = 0;
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_6 = VAR_0->err;
 VAR_0->err = VAR_5;

 if (VAR_6 != 0)
  return VAR_3;

 VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_4, 0);
 if (VAR_7->nchrs == 0)
  return VAR_3;
 return VAR_7->chrs[0];
}
