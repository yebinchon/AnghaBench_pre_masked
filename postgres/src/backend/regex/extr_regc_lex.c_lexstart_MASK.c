
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int cflags; int nexttype; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vars*) ;
 int FUNC_4 (struct vars*) ;

__attribute__((used)) static void
FUNC_5(struct vars *VAR_10)
{
 FUNC_4(VAR_10);
 FUNC_1();

 if (VAR_10->cflags & VAR_9)
 {
  FUNC_2(!(VAR_10->cflags & (VAR_4 | VAR_6 | VAR_8)));
  FUNC_0(VAR_3);
 }
 else if (VAR_10->cflags & VAR_7)
 {
  FUNC_2(!(VAR_10->cflags & VAR_9));
  FUNC_0(VAR_2);
 }
 else
 {
  FUNC_2(!(VAR_10->cflags & (VAR_9 | VAR_5)));
  FUNC_0(VAR_1);
 }

 VAR_10->nexttype = VAR_0;
 FUNC_3(VAR_10);
}
