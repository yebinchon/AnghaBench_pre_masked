
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcfile_state {int lineno; int colno; int name; struct srcfile_state* prev; int dir; int f; } ;


 scalar_t__ VAR_0 ;
 struct srcfile_state* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char const*,int *) ;
 struct srcfile_state* FUNC_4 (int) ;

void FUNC_5(const char *VAR_3)
{
 struct srcfile_state *VAR_4;

 if (VAR_2++ >= VAR_0)
  FUNC_0("Includes nested too deeply");

 VAR_4 = FUNC_4(sizeof(*VAR_4));

 VAR_4->f = FUNC_3(VAR_3, &VAR_4->name);
 VAR_4->dir = FUNC_1(VAR_4->name);
 VAR_4->prev = VAR_1;

 VAR_4->lineno = 1;
 VAR_4->colno = 1;

 VAR_1 = VAR_4;

 if (VAR_2 == 1)
  FUNC_2(VAR_4->name);
}
