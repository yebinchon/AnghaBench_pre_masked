
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int work; int * jack; } ;
struct TYPE_5__ {int work; int * jack; } ;
struct TYPE_4__ {int * jack; } ;
struct wm8350_data {int pga_work; TYPE_3__ hpr; TYPE_2__ hpl; TYPE_1__ mic; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 struct wm8350* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct wm8350_data* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct wm8350*,int ,int) ;
 int FUNC_5 (struct wm8350*,int ,struct wm8350_data*) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_11)
{
 struct wm8350_data *VAR_12 = FUNC_3(VAR_11);
 struct wm8350 *VAR_13 = FUNC_1(VAR_11->dev);

 FUNC_4(VAR_13, VAR_5,
     VAR_6 | VAR_7);
 FUNC_4(VAR_13, VAR_8, VAR_10);

 FUNC_5(VAR_13, VAR_3, VAR_12);
 FUNC_5(VAR_13, VAR_4, VAR_12);
 FUNC_5(VAR_13, VAR_1, VAR_12);
 FUNC_5(VAR_13, VAR_2, VAR_12);

 VAR_12->hpl.jack = ((void*)0);
 VAR_12->hpr.jack = ((void*)0);
 VAR_12->mic.jack = ((void*)0);

 FUNC_0(&VAR_12->hpl.work);
 FUNC_0(&VAR_12->hpr.work);



 FUNC_2(&VAR_12->pga_work);

 FUNC_4(VAR_13, VAR_9, VAR_0);
}
