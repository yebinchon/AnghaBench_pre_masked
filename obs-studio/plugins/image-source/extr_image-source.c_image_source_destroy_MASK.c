
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_source {struct image_source* file; } ;


 int FUNC_0 (struct image_source*) ;
 int FUNC_1 (struct image_source*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct image_source *VAR_1 = VAR_0;

 FUNC_1(VAR_1);

 if (VAR_1->file)
  FUNC_0(VAR_1->file);
 FUNC_0(VAR_1);
}
