
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotation_line {void* privsize; int line; int path; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct annotation_line *VAR_0)
{
 void *VAR_1 = (void *) VAR_0 - VAR_0->privsize;

 FUNC_1(VAR_0->path);
 FUNC_2(&VAR_0->line);
 FUNC_0(VAR_1);
}
