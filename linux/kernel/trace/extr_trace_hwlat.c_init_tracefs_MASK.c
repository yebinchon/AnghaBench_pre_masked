
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int sample_width; int sample_window; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 TYPE_1__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 void* FUNC_2 (char*,int,struct dentry*,int *,int *) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct dentry *VAR_6;
 struct dentry *VAR_7;

 VAR_6 = FUNC_4();
 if (FUNC_0(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_1("hwlat_detector", VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_3 = FUNC_2("window", 0640,
        VAR_7,
        &VAR_1.sample_window,
        &VAR_5);
 if (!VAR_3)
  goto err;

 VAR_2 = FUNC_2("width", 0644,
       VAR_7,
       &VAR_1.sample_width,
       &VAR_4);
 if (!VAR_2)
  goto err;

 return 0;

 err:
 FUNC_3(VAR_7);
 return -VAR_0;
}
