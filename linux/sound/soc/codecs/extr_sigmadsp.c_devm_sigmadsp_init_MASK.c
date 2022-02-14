
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp_ops {int dummy; } ;
struct sigmadsp {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sigmadsp* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct sigmadsp*) ;
 struct sigmadsp* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct sigmadsp*) ;
 int FUNC_4 (struct sigmadsp*,struct device*,struct sigmadsp_ops const*,char const*) ;

struct sigmadsp *FUNC_5(struct device *VAR_3,
 const struct sigmadsp_ops *VAR_4, const char *VAR_5)
{
 struct sigmadsp *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, sizeof(*VAR_6),
  VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return FUNC_0(VAR_7);
 }

 FUNC_1(VAR_3, VAR_6);

 return VAR_6;
}
