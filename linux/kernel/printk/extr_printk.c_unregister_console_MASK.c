
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int flags; struct console* next; int index; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct console*) ;
 struct console* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,int ,int ) ;

int FUNC_5(struct console *VAR_6)
{
        struct console *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_4("%sconsole [%s%d] disabled\n",
  (VAR_6->flags & VAR_0) ? "boot" : "" ,
  VAR_6->name, VAR_6->index);

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = 1;
 FUNC_1();
 if (VAR_4 == VAR_6) {
  VAR_4=VAR_6->next;
  VAR_9 = 0;
 } else if (VAR_4) {
  for (VAR_7=VAR_4->next, VAR_8=VAR_4 ;
       VAR_7; VAR_8=VAR_7, VAR_7=VAR_8->next) {
   if (VAR_7 == VAR_6) {
    VAR_8->next = VAR_7->next;
    VAR_9 = 0;
    break;
   }
  }
 }

 if (!VAR_9 && (VAR_6->flags & VAR_3))
  VAR_5--;





 if (VAR_4 != ((void*)0) && VAR_6->flags & VAR_1)
  VAR_4->flags |= VAR_1;

 VAR_6->flags &= ~VAR_2;
 FUNC_3();
 FUNC_2();
 return VAR_9;
}
