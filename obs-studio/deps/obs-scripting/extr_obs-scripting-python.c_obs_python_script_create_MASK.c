
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* array; } ;
struct TYPE_7__ {scalar_t__ loaded; int settings; TYPE_2__ file; TYPE_2__ path; int type; } ;
struct TYPE_9__ {int array; } ;
struct obs_python_script {TYPE_1__ base; TYPE_3__ dir; int name; } ;
typedef int obs_script_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct obs_python_script* FUNC_1 (int) ;
 struct obs_python_script* VAR_1 ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,char*,char*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (struct obs_python_script*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int VAR_2 ;
 char* FUNC_12 (char const*,char) ;
 char* FUNC_13 (char const*,char*) ;
 int FUNC_14 () ;

obs_script_t *FUNC_15(const char *VAR_3, obs_data_t *VAR_4)
{
 struct obs_python_script *VAR_5 = FUNC_1(sizeof(*VAR_5));

 VAR_5->base.type = VAR_0;

 FUNC_2(&VAR_5->base.path, VAR_3);
 FUNC_5(&VAR_5->base.path, "\\", "/");
 VAR_3 = VAR_5->base.path.array;

 const char *VAR_6 = VAR_3 && *VAR_3 ? FUNC_12(VAR_3, '/') : ((void*)0);
 if (VAR_6) {
  VAR_6++;
  FUNC_2(&VAR_5->base.file, VAR_6);
  FUNC_4(&VAR_5->dir, &VAR_5->base.path, VAR_6 - VAR_3);
 } else {
  FUNC_2(&VAR_5->base.file, VAR_3);
 }

 VAR_3 = VAR_5->base.file.array;
 FUNC_3(&VAR_5->name, &VAR_5->base.file);

 const char *VAR_7 = FUNC_13(VAR_3, ".py");
 if (VAR_7)
  FUNC_6(&VAR_5->name, VAR_7 - VAR_3);

 VAR_5->base.settings = FUNC_10();
 if (VAR_4)
  FUNC_9(VAR_5->base.settings, VAR_4);

 if (!VAR_2)
  return (obs_script_t *)VAR_5;

 FUNC_8();
 FUNC_0(VAR_5->dir.array);
 VAR_5->base.loaded = FUNC_7(VAR_5);
 if (VAR_5->base.loaded) {
  VAR_1 = VAR_5;
  FUNC_11(&VAR_5->base, ((void*)0));
  VAR_1 = ((void*)0);
 }
 FUNC_14();

 return (obs_script_t *)VAR_5;
}
