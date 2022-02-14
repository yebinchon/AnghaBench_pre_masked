
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fd {TYPE_2__* file; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_7__ {int i_mode; } ;
struct TYPE_6__ {int f_mode; TYPE_1__* f_mapping; } ;
struct TYPE_5__ {int a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct fd FUNC_1 (int) ;
 int FUNC_2 (struct fd) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,size_t,int ) ;

ssize_t FUNC_5(int VAR_4, loff_t VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 struct fd VAR_8;

 VAR_7 = -VAR_0;
 VAR_8 = FUNC_1(VAR_4);
 if (!VAR_8.file || !(VAR_8.file->f_mode & VAR_2))
  goto out;






 VAR_7 = -VAR_1;
 if (!VAR_8.file->f_mapping || !VAR_8.file->f_mapping->a_ops ||
     !FUNC_0(FUNC_3(VAR_8.file)->i_mode))
  goto out;

 VAR_7 = FUNC_4(VAR_8.file, VAR_5, VAR_6, VAR_3);
out:
 FUNC_2(VAR_8);
 return VAR_7;
}
