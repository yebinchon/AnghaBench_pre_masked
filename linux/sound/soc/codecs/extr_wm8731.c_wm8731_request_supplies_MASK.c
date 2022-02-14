
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wm8731_priv {TYPE_1__* supplies; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
  struct wm8731_priv *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->supplies); VAR_4++)
  VAR_2->supplies[VAR_4].supply = VAR_0[VAR_4];

 VAR_3 = FUNC_2(VAR_1, FUNC_0(VAR_2->supplies),
     VAR_2->supplies);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1, "Failed to request supplies: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(FUNC_0(VAR_2->supplies),
        VAR_2->supplies);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1, "Failed to enable supplies: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
