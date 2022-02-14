
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int ** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(void)
{
 gint VAR_12;

 VAR_9 = VAR_11 = FUNC_2(VAR_0,
       VAR_5, VAR_5,
       VAR_5, VAR_5,
       VAR_5, VAR_5,
       VAR_4, VAR_1,
       VAR_3, VAR_2,
       VAR_3, VAR_3,
       VAR_3, VAR_3,
       VAR_3);
 VAR_7 = FUNC_0(VAR_11);

 for (VAR_8[0] = ((void*)0), VAR_12 = 1; VAR_12 < 256; VAR_12++)
  VAR_8[VAR_12] = (GtkTreeIter *) FUNC_1(sizeof(GtkTreeIter));

 VAR_10 = FUNC_2(VAR_0,
       VAR_5, VAR_5,
       VAR_5, VAR_5,
       VAR_5, VAR_5,
       VAR_4, VAR_1,
       VAR_3, VAR_2,
       VAR_3, VAR_3,
       VAR_3, VAR_3,
       VAR_3);
 VAR_6 = FUNC_0(VAR_10);
}
