
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; int * type; } ;
struct ac97_controller {int nr; int parent; TYPE_1__ adap; int controllers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,struct ac97_controller*,int ,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct ac97_controller *VAR_5)
{
 int VAR_6;

 FUNC_6(&VAR_4);
 VAR_6 = FUNC_4(&VAR_1, VAR_5, 0, 0, VAR_0);
 VAR_5->nr = VAR_6;
 if (VAR_6 >= 0) {
  FUNC_2(&VAR_5->adap, "ac97-%d", VAR_6);
  VAR_5->adap.type = &VAR_2;
  VAR_5->adap.parent = VAR_5->parent;
  VAR_6 = FUNC_3(&VAR_5->adap);
  if (VAR_6)
   FUNC_8(&VAR_5->adap);
 }
 if (!VAR_6)
  FUNC_5(&VAR_5->controllers, &VAR_3);
 FUNC_7(&VAR_4);

 if (!VAR_6)
  FUNC_0(&VAR_5->adap, "adapter registered by %s\n",
   FUNC_1(VAR_5->parent));
 return VAR_6;
}
