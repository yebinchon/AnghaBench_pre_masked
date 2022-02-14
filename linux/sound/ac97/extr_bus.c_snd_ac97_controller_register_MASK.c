
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ac97_controller_ops {int dummy; } ;
struct ac97_controller {unsigned short slots_available; struct device* parent; struct ac97_controller_ops const* ops; void** codecs_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ac97_controller* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ac97_controller*) ;
 int FUNC_2 (struct ac97_controller*) ;
 int FUNC_3 (struct ac97_controller*) ;
 int FUNC_4 (struct ac97_controller*) ;
 struct ac97_controller* FUNC_5 (int,int ) ;

struct ac97_controller *FUNC_6(
 const struct ac97_controller_ops *VAR_3, struct device *VAR_4,
 unsigned short VAR_5, void **VAR_6)
{
 struct ac97_controller *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_0 && VAR_6; VAR_9++)
  VAR_7->codecs_pdata[VAR_9] = VAR_6[VAR_9];

 VAR_7->ops = VAR_3;
 VAR_7->slots_available = VAR_5;
 VAR_7->parent = VAR_4;
 VAR_8 = FUNC_1(VAR_7);

 if (VAR_8)
  goto err;
 FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 return VAR_7;
err:
 FUNC_4(VAR_7);
 return FUNC_0(VAR_8);
}
