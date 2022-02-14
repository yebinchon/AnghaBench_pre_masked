
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_info {int name; int init_thread; struct mic_info* next; } ;
struct TYPE_2__ {struct mic_info* next; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *,int ,struct mic_info*) ;
 int FUNC_2 (struct mic_info*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct mic_info *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_1.next; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_2(VAR_2);
  VAR_3 = FUNC_1(&VAR_2->init_thread, ((void*)0), VAR_0, VAR_2);
  if (VAR_3)
   FUNC_0("%s init_mic pthread_create failed %s\n",
    VAR_2->name, FUNC_4(VAR_3));
 }

 while (1)
  FUNC_3(60);
}
