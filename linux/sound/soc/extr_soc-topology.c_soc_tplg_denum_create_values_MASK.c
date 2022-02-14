
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* dvalues; } ;
struct TYPE_4__ {TYPE_1__ control; } ;
struct soc_enum {TYPE_2__ dobj; } ;
struct snd_soc_tplg_enum_control {int * values; int items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct soc_enum *VAR_3,
 struct snd_soc_tplg_enum_control *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_4->items) > sizeof(*VAR_4->values))
  return -VAR_0;

 VAR_3->dobj.control.dvalues = FUNC_0(FUNC_1(VAR_4->items) *
        sizeof(u32),
        VAR_2);
 if (!VAR_3->dobj.control.dvalues)
  return -VAR_1;


 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_4->items); VAR_5++) {
  VAR_3->dobj.control.dvalues[VAR_5] = FUNC_1(VAR_4->values[VAR_5]);
 }

 return 0;
}
