
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dtexts; } ;
struct TYPE_4__ {TYPE_1__ control; } ;
struct soc_enum {int items; char const* const* texts; TYPE_2__ dobj; } ;
struct snd_soc_tplg_enum_control {int items; int * texts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct soc_enum*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct soc_enum *VAR_4,
 struct snd_soc_tplg_enum_control *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_4->dobj.control.dtexts =
  FUNC_0(FUNC_2(VAR_5->items), sizeof(char *), VAR_2);
 if (VAR_4->dobj.control.dtexts == ((void*)0))
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5->items; VAR_6++) {

  if (FUNC_4(VAR_5->texts[VAR_6], VAR_3) ==
   VAR_3) {
   VAR_7 = -VAR_0;
   goto err;
  }

  VAR_4->dobj.control.dtexts[VAR_6] = FUNC_1(VAR_5->texts[VAR_6], VAR_2);
  if (!VAR_4->dobj.control.dtexts[VAR_6]) {
   VAR_7 = -VAR_1;
   goto err;
  }
 }

 VAR_4->items = FUNC_2(VAR_5->items);
 VAR_4->texts = (const char * const *)VAR_4->dobj.control.dtexts;
 return 0;

err:
 VAR_4->items = VAR_6;
 FUNC_3(VAR_4);
 return VAR_7;
}
