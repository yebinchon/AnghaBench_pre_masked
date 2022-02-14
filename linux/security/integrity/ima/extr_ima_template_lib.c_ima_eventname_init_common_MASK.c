
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ima_field_data {int dummy; } ;
struct ima_event_data {char* filename; TYPE_4__* file; } ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_8__ {TYPE_3__ f_path; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,scalar_t__,int ,struct ima_field_data*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct ima_event_data *VAR_2,
         struct ima_field_data *VAR_3,
         bool VAR_4)
{
 const char *VAR_5 = ((void*)0);
 u32 VAR_6 = 0;

 FUNC_0(VAR_2->filename == ((void*)0) && VAR_2->file == ((void*)0));

 if (VAR_2->filename) {
  VAR_5 = VAR_2->filename;
  VAR_6 = FUNC_2(VAR_2->filename);

  if (!VAR_4 || VAR_6 <= VAR_1)
   goto out;
 }

 if (VAR_2->file) {
  VAR_5 = VAR_2->file->f_path.dentry->d_name.name;
  VAR_6 = FUNC_2(VAR_5);
 } else




  VAR_6 = VAR_1;
out:
 return FUNC_1(VAR_5, VAR_6,
          VAR_0, VAR_3);
}
