
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flv_output {int path; int mutex; } ;


 int FUNC_0 (struct flv_output*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct flv_output *VAR_1 = VAR_0;

 FUNC_2(&VAR_1->mutex);
 FUNC_1(&VAR_1->path);
 FUNC_0(VAR_1);
}
