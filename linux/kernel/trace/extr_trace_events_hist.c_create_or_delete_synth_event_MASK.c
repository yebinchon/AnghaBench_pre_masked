
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_event {int devent; scalar_t__ ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char const*,char const**) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct synth_event* FUNC_2 (char const*) ;
 int FUNC_3 (struct synth_event*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct synth_event*) ;

__attribute__((used)) static int FUNC_7(int VAR_5, char **VAR_6)
{
 const char *VAR_7 = VAR_6[0];
 struct synth_event *VAR_8 = ((void*)0);
 int VAR_9;


 if (VAR_7[0] == '!') {
  FUNC_4(&VAR_4);
  VAR_8 = FUNC_2(VAR_7 + 1);
  if (VAR_8) {
   if (VAR_8->ref)
    VAR_9 = -VAR_0;
   else {
    VAR_9 = FUNC_6(VAR_8);
    if (!VAR_9) {
     FUNC_1(&VAR_8->devent);
     FUNC_3(VAR_8);
    }
   }
  } else
   VAR_9 = -VAR_3;
  FUNC_5(&VAR_4);
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_5 - 1, VAR_7, (const char **)VAR_6 + 1);
 return VAR_9 == -VAR_1 ? -VAR_2 : VAR_9;
}
