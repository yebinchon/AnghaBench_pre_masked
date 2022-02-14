
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct machine {TYPE_1__ dsos; } ;
struct kmod_path {int name; } ;
struct dso {int dummy; } ;


 struct dso* FUNC_0 (TYPE_1__*,int ) ;
 struct dso* FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dso*) ;
 int FUNC_4 (struct dso*,int ,int) ;
 int FUNC_5 (struct dso*,struct kmod_path*,struct machine*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct dso *FUNC_8(struct machine *VAR_0,
            struct kmod_path *VAR_1,
            const char *VAR_2)
{
 struct dso *VAR_3;

 FUNC_2(&VAR_0->dsos.lock);

 VAR_3 = FUNC_1(&VAR_0->dsos, VAR_1->name, 1);
 if (!VAR_3) {
  VAR_3 = FUNC_0(&VAR_0->dsos, VAR_1->name);
  if (VAR_3 == ((void*)0))
   goto out_unlock;

  FUNC_5(VAR_3, VAR_1, VAR_0);
  FUNC_4(VAR_3, FUNC_6(VAR_2), 1);
 }

 FUNC_3(VAR_3);
out_unlock:
 FUNC_7(&VAR_0->dsos.lock);
 return VAR_3;
}
