
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int copy_dest; int binary; int is_program; int copy_file; TYPE_1__* fe_msgbuf; } ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__* CopyState ;


 int FUNC_0 (int) ;




 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(CopyState VAR_5)
{
 StringInfo VAR_6 = VAR_5->fe_msgbuf;

 switch (VAR_5->copy_dest)
 {
  case 130:
   if (!VAR_5->binary)
   {


    FUNC_2(VAR_5, '\n');



   }

   if (FUNC_9(VAR_6->data, VAR_6->len, 1,
        VAR_5->copy_file) != 1 ||
    FUNC_8(VAR_5->copy_file))
   {
    if (VAR_5->is_program)
    {
     if (VAR_4 == VAR_0)
     {






      FUNC_1(VAR_5);






      VAR_4 = VAR_0;
     }
     FUNC_4(VAR_2,
       (FUNC_6(),
        FUNC_7("could not write to COPY program: %m")));
    }
    else
     FUNC_4(VAR_2,
       (FUNC_6(),
        FUNC_7("could not write to COPY file: %m")));
   }
   break;
  case 128:

   if (!VAR_5->binary)
    FUNC_2(VAR_5, '\n');

   if (FUNC_10(VAR_6->data, VAR_6->len))
   {

    FUNC_4(VAR_3,
      (FUNC_5(VAR_1),
       FUNC_7("connection lost during COPY to stdout")));
   }
   break;
  case 129:

   if (!VAR_5->binary)
    FUNC_2(VAR_5, '\n');


   (void) FUNC_11('d', VAR_6->data, VAR_6->len);
   break;
  case 131:
   FUNC_0(0);
   break;
 }

 FUNC_12(VAR_6);
}
