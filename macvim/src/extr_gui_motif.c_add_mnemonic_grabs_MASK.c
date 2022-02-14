
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * WidgetList ;
typedef int Widget ;
typedef char KeySym ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,...) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_7(Widget VAR_10, Widget VAR_11)
{
    char VAR_12[2];
    WidgetList VAR_13;
    int VAR_14, VAR_15;
    Boolean VAR_16;
    KeySym VAR_17 = '\0';
    unsigned char VAR_18;

    if (FUNC_5(VAR_11))
    {
 if (FUNC_2(VAR_11) == VAR_9)
 {
     FUNC_6(VAR_11, VAR_7, &VAR_18, ((void*)0));
     VAR_16 = (VAR_18 != (unsigned char)VAR_8);
 }
 else
     VAR_16 = VAR_0;
 if (!VAR_16)
 {
     FUNC_6(VAR_11, VAR_4, &VAR_13, VAR_6,
         &VAR_14, ((void*)0));
     for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  FUNC_7(VAR_10, VAR_13[VAR_15]);
 }
    }
    else
    {
 FUNC_6(VAR_11, VAR_5, &VAR_17, ((void*)0));
 if (VAR_17 != '\0')
 {
     VAR_12[0] = VAR_17;
     VAR_12[1] = '\0';
     FUNC_4(VAR_10, FUNC_0(FUNC_3(VAR_10),
        FUNC_1(VAR_12)),
      VAR_2, VAR_3, VAR_1, VAR_1);
 }
    }
}
