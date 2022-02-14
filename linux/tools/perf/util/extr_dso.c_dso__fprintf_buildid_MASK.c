
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int build_id; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 size_t FUNC_1 (int *,char*,char*) ;

size_t FUNC_2(struct dso *VAR_1, FILE *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_0(VAR_1->build_id, sizeof(VAR_1->build_id), VAR_3);
 return FUNC_1(VAR_2, "%s", VAR_3);
}
