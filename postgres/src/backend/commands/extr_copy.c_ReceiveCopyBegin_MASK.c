
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_3__ {int copy_dest; scalar_t__ binary; int fe_msgbuf; int attnumlist; } ;
typedef int StringInfoData ;
typedef TYPE_1__* CopyState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13(CopyState VAR_5)
{
 if (FUNC_0(VAR_4) >= 3)
 {

  StringInfoData VAR_6;
  int VAR_7 = FUNC_4(VAR_5->attnumlist);
  int16 VAR_8 = (VAR_5->binary ? 1 : 0);
  int VAR_9;

  FUNC_6(&VAR_6, 'G');
  FUNC_10(&VAR_6, VAR_8);
  FUNC_11(&VAR_6, VAR_7);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_11(&VAR_6, VAR_8);
  FUNC_7(&VAR_6);
  VAR_5->copy_dest = VAR_0;
  VAR_5->fe_msgbuf = FUNC_5();
 }
 else
 {

  if (VAR_5->binary)
   FUNC_1(VAR_3,
     (FUNC_2(VAR_2),
      FUNC_3("COPY BINARY is not supported to stdout or from stdin")));
  FUNC_9('G');

  FUNC_12();
  VAR_5->copy_dest = VAR_1;
 }

 FUNC_8();
}
