
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cursor; int len; } ;
struct TYPE_6__ {int copy_dest; int reached_eof; int (* data_source_cb ) (void*,int,int) ;TYPE_2__* fe_msgbuf; int copy_file; } ;
typedef TYPE_1__* CopyState ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int,int,int ) ;
 int FUNC_8 (TYPE_2__*,void*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 () ;
 int FUNC_14 (void*,int,int) ;

__attribute__((used)) static int
FUNC_15(CopyState VAR_5, void *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0;

 switch (VAR_5->copy_dest)
 {
  case 130:
   VAR_9 = FUNC_7(VAR_6, 1, VAR_8, VAR_5->copy_file);
   if (FUNC_6(VAR_5->copy_file))
    FUNC_2(VAR_4,
      (FUNC_4(),
       FUNC_5("could not read from COPY file: %m")));
   if (VAR_9 == 0)
    VAR_5->reached_eof = 1;
   break;
  case 128:
   if (FUNC_10((char *) VAR_6, VAR_7))
   {

    FUNC_2(VAR_4,
      (FUNC_3(VAR_1),
       FUNC_5("unexpected EOF on client connection with an open transaction")));
   }
   VAR_9 = VAR_7;
   break;
  case 129:
   while (VAR_8 > 0 && VAR_9 < VAR_7 && !VAR_5->reached_eof)
   {
    int VAR_10;

    while (VAR_5->fe_msgbuf->cursor >= VAR_5->fe_msgbuf->len)
    {

     int VAR_11;

   readmessage:
     FUNC_0();
     FUNC_13();
     VAR_11 = FUNC_9();
     if (VAR_11 == VAR_0)
      FUNC_2(VAR_4,
        (FUNC_3(VAR_1),
         FUNC_5("unexpected EOF on client connection with an open transaction")));
     if (FUNC_11(VAR_5->fe_msgbuf, 0))
      FUNC_2(VAR_4,
        (FUNC_3(VAR_1),
         FUNC_5("unexpected EOF on client connection with an open transaction")));
     FUNC_1();
     switch (VAR_11)
     {
      case 'd':
       break;
      case 'c':

       VAR_5->reached_eof = 1;
       return VAR_9;
      case 'f':
       FUNC_2(VAR_4,
         (FUNC_3(VAR_3),
          FUNC_5("COPY from stdin failed: %s",
           FUNC_12(VAR_5->fe_msgbuf))));
       break;
      case 'H':
      case 'S':







       goto readmessage;
      default:
       FUNC_2(VAR_4,
         (FUNC_3(VAR_2),
          FUNC_5("unexpected message type 0x%02X during COPY from stdin",
           VAR_11)));
       break;
     }
    }
    VAR_10 = VAR_5->fe_msgbuf->len - VAR_5->fe_msgbuf->cursor;
    if (VAR_10 > VAR_8)
     VAR_10 = VAR_8;
    FUNC_8(VAR_5->fe_msgbuf, VAR_6, VAR_10);
    VAR_6 = (void *) ((char *) VAR_6 + VAR_10);
    VAR_8 -= VAR_10;
    VAR_9 += VAR_10;
   }
   break;
  case 131:
   VAR_9 = VAR_5->data_source_cb(VAR_6, VAR_7, VAR_8);
   break;
 }

 return VAR_9;
}
