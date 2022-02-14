
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcpos {struct srcpos* file; int * next; } ;
struct srcfile_state {struct srcfile_state* file; int * next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct srcpos*,struct srcpos*,int) ;
 struct srcpos* FUNC_2 (int) ;

struct srcpos *
FUNC_3(struct srcpos *VAR_0)
{
 struct srcpos *VAR_1;
 struct srcfile_state *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_2(sizeof(struct srcpos));
 FUNC_0(VAR_0->next == ((void*)0));
 FUNC_1(VAR_1, VAR_0, sizeof(struct srcpos));


 VAR_2 = FUNC_2(sizeof(struct srcfile_state));
 FUNC_1(VAR_2, VAR_0->file, sizeof(struct srcfile_state));
 VAR_1->file = VAR_2;

 return VAR_1;
}
