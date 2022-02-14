
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uprobe_cpu_buffer {int mutex; } ;


 int FUNC_0 (int *) ;
 struct uprobe_cpu_buffer* FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static struct uprobe_cpu_buffer *FUNC_3(void)
{
 struct uprobe_cpu_buffer *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2();
 VAR_1 = FUNC_1(VAR_0, VAR_2);





 FUNC_0(&VAR_1->mutex);

 return VAR_1;
}
