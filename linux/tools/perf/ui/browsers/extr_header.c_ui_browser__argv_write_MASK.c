
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int width; scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (char*) ;
 int FUNC_1 (struct ui_browser*,int) ;
 int FUNC_2 (struct ui_browser*,int ) ;
 int FUNC_3 (struct ui_browser*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct ui_browser *VAR_2,
       void *VAR_3, int VAR_4)
{
 char **VAR_5 = VAR_3;
 char *VAR_6 = *VAR_5;
 char VAR_7[] = " ";
 bool VAR_8 = FUNC_1(VAR_2, VAR_4);
 unsigned long VAR_9 = (unsigned long)VAR_2->priv;

 if (VAR_9 >= FUNC_0(VAR_6))
  VAR_6 = VAR_7;
 else
  VAR_6 = VAR_6 + VAR_9;

 FUNC_2(VAR_2, VAR_8 ? VAR_1 :
             VAR_0);

 FUNC_3(VAR_2, VAR_6, VAR_2->width);
}
