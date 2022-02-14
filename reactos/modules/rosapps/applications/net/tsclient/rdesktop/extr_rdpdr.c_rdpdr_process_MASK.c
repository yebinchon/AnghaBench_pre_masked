
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8 ;
typedef int uint32 ;
struct TYPE_7__ {scalar_t__ p; scalar_t__ end; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char,char,char,char) ;

__attribute__((used)) static void
FUNC_12(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint32 VAR_2;
 uint8 *VAR_3;





 FUNC_3(VAR_1, VAR_3, 4);

 if ((VAR_3[0] == 'r') && (VAR_3[1] == 'D'))
 {
  if ((VAR_3[2] == 'R') && (VAR_3[3] == 'I'))
  {
   FUNC_6(VAR_0, VAR_1);
   return;
  }
  if ((VAR_3[2] == 'n') && (VAR_3[3] == 'I'))
  {
   FUNC_9(VAR_0);
   FUNC_10(VAR_0);
   return;
  }
  if ((VAR_3[2] == 'C') && (VAR_3[3] == 'C'))
  {

   FUNC_8(VAR_0);
   FUNC_7(VAR_0);
   return;
  }
  if ((VAR_3[2] == 'r') && (VAR_3[3] == 'd'))
  {

   FUNC_2(VAR_1, VAR_2);



   return;
  }
  if ((VAR_3[2] == 'P') && (VAR_3[3] == 'S'))
  {

   return;
  }
 }
 if ((VAR_3[0] == 'R') && (VAR_3[1] == 'P'))
 {
  if ((VAR_3[2] == 'C') && (VAR_3[3] == 'P'))
  {
   FUNC_4(VAR_0, VAR_1);
   return;
  }
 }
 FUNC_11("RDPDR packet type %c%c%c%c\n", VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);
}
