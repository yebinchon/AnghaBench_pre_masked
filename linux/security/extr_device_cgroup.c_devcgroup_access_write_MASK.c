
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_open_file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct kernfs_open_file*) ;
 int FUNC_5 (struct kernfs_open_file*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct kernfs_open_file *VAR_1,
          char *VAR_2, size_t VAR_3, loff_t VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_0);
 VAR_5 = FUNC_1(FUNC_0(FUNC_5(VAR_1)),
      FUNC_4(VAR_1)->private, FUNC_6(VAR_2));
 FUNC_3(&VAR_0);
 return VAR_5 ?: VAR_3;
}
