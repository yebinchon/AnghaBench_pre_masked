
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ga_len; int ga_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5()
{
    if (VAR_11.ga_len > 0)
    {

 if (VAR_3 && (VAR_7 != VAR_1))
 {
     int VAR_13, VAR_14, VAR_15;

     if (VAR_4)
     {
  FUNC_3(VAR_9, 2);
  FUNC_3(VAR_10, 2);
  FUNC_4("m\n");
  VAR_4 = VAR_0;
     }


     FUNC_3(VAR_12, 2);
     FUNC_3(VAR_6, 2);


     VAR_13 = ((unsigned)VAR_7 & 0xff0000) >> 16;
     VAR_14 = ((unsigned)VAR_7 & 0xff00) >> 8;
     VAR_15 = VAR_7 & 0xff;
     FUNC_3(VAR_13 / 255.0, 3);
     FUNC_3(VAR_14 / 255.0, 3);
     FUNC_3(VAR_15 / 255.0, 3);
     FUNC_4("bg\n");
 }



 if (VAR_5)
 {
     if (VAR_4)
     {
  FUNC_3(VAR_9, 2);
  FUNC_3(VAR_10, 2);
  FUNC_4("m\n");
  VAR_4 = VAR_0;
     }


     FUNC_3(VAR_12, 2);
     FUNC_4("ul\n");
 }
     FUNC_4("(");
 FUNC_2(VAR_11.ga_data, VAR_11.ga_len);





     FUNC_4(")");

 if (VAR_4)
 {
     FUNC_3(VAR_9, 2);
     FUNC_3(VAR_10, 2);

     FUNC_4("ms\n");
     VAR_4 = VAR_0;
 }
 else
     FUNC_4("s\n");

 FUNC_0(&VAR_11);
 FUNC_1(&VAR_11, (int)sizeof(char), VAR_2);
    }
}
