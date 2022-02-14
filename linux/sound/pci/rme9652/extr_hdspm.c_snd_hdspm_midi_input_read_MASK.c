
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hdspm_midi {TYPE_1__* hdspm; int ie; int lock; scalar_t__ pending; int id; scalar_t__ input; } ;
typedef int buf ;
struct TYPE_4__ {int lock; int control_register; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct hdspm_midi*) ;
 unsigned char FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (scalar_t__,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7 (struct hdspm_midi *VAR_1)
{
 unsigned char VAR_2[128];


 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_5 (&VAR_1->lock, VAR_3);
 VAR_4 = FUNC_1 (VAR_1->hdspm, VAR_1->id);
 if (VAR_4 > 0) {
  if (VAR_1->input) {
   if (VAR_4 > (int)sizeof (VAR_2))
    VAR_4 = sizeof (VAR_2);
   for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    VAR_2[VAR_5] = FUNC_3 (VAR_1->hdspm,
           VAR_1->id);
   if (VAR_4)
    FUNC_4 (VAR_1->input, VAR_2,
           VAR_4);
  } else {

   while (VAR_4--)
    FUNC_3 (VAR_1->hdspm,
         VAR_1->id);
  }
 }
 VAR_1->pending = 0;
 FUNC_6(&VAR_1->lock, VAR_3);

 FUNC_5(&VAR_1->hdspm->lock, VAR_3);
 VAR_1->hdspm->control_register |= VAR_1->ie;
 FUNC_0(VAR_1->hdspm, VAR_0,
      VAR_1->hdspm->control_register);
 FUNC_6(&VAR_1->hdspm->lock, VAR_3);

 return FUNC_2 (VAR_1);
}
