
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_range {int line_list; int comp_dir; int path; int file; int function; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct line_range *VAR_0)
{
 FUNC_1(&VAR_0->function);
 FUNC_1(&VAR_0->file);
 FUNC_1(&VAR_0->path);
 FUNC_1(&VAR_0->comp_dir);
 FUNC_0(VAR_0->line_list);
}
