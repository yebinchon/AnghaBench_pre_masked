
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int GtkWidget ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int * FUNC_4 (float,float,float,float) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static GtkWidget *
FUNC_12(const char *VAR_2, const char *VAR_3)
{
    char_u *VAR_4;
    GtkWidget *VAR_5;
    GtkWidget *VAR_6;
    GtkWidget *VAR_7;

    VAR_4 = FUNC_0((char_u *)VAR_3);

    VAR_5 = FUNC_8(VAR_0, 3);
    FUNC_5(FUNC_2(VAR_5),
         FUNC_9(VAR_2, VAR_1),
         VAR_0, VAR_0, 0);
    FUNC_5(FUNC_2(VAR_5),
         FUNC_10((const char *)VAR_4),
         VAR_0, VAR_0, 0);

    FUNC_1(VAR_4);

    VAR_6 = FUNC_4((float)0.5, (float)0.5,
            (float)0.0, (float)0.0);
    FUNC_7(FUNC_3(VAR_6), VAR_5);
    FUNC_11(VAR_6);

    VAR_7 = FUNC_6();
    FUNC_7(FUNC_3(VAR_7), VAR_6);

    return VAR_7;
}
