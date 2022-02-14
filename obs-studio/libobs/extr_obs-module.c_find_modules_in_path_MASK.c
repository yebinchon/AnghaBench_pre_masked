
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct obs_module_path {int bin; } ;
struct dstr {int array; int member_0; } ;
struct TYPE_6__ {size_t gl_pathc; TYPE_1__* gl_pathv; } ;
typedef TYPE_2__ os_glob_t ;
typedef int obs_find_module_callback_t ;
struct TYPE_5__ {int directory; int path; } ;


 int FUNC_0 (struct dstr*,int ) ;
 int FUNC_1 (struct dstr*,char) ;
 int FUNC_2 (struct dstr*,int ) ;
 char FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int ,TYPE_2__**) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct obs_module_path*,int ,int,int ,void*) ;
 char* FUNC_11 (int,char*) ;

__attribute__((used)) static void FUNC_12(struct obs_module_path *VAR_0,
     obs_find_module_callback_t VAR_1,
     void *VAR_2)
{
 struct dstr VAR_3 = {0};
 char *VAR_4;
 bool VAR_5 = 0;
 os_glob_t *VAR_6;

 FUNC_2(&VAR_3, VAR_0->bin);

 VAR_4 = FUNC_11(VAR_3.array, "%module%");
 if (VAR_4) {
  FUNC_6(&VAR_3, VAR_4 - VAR_3.array);
  VAR_5 = 1;
 }

 if (!FUNC_5(&VAR_3) && FUNC_3(&VAR_3) != '/')
  FUNC_1(&VAR_3, '/');

 FUNC_1(&VAR_3, '*');
 if (!VAR_5)
  FUNC_0(&VAR_3, FUNC_7());

 if (FUNC_8(VAR_3.array, 0, &VAR_6) == 0) {
  for (size_t VAR_7 = 0; VAR_7 < VAR_6->gl_pathc; VAR_7++) {
   if (VAR_5 == VAR_6->gl_pathv[VAR_7].directory)
    FUNC_10(VAR_0, VAR_6->gl_pathv[VAR_7].path,
           VAR_5,
           VAR_1, VAR_2);
  }

  FUNC_9(VAR_6);
 }

 FUNC_4(&VAR_3);
}
