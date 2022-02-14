
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
struct _rfbClientRec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int ,int ,int,int,int) ;
 int FUNC_1 (int,int,int,struct _rfbClientRec*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(int VAR_5, int VAR_6, int VAR_7, struct _rfbClientRec *VAR_8)
{
 int VAR_9;
 uint32 VAR_10 = FUNC_2(((void*)0));

 FUNC_0(VAR_10, VAR_2, VAR_1, VAR_6, VAR_7);

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
 {
  int VAR_11 = 1 << (VAR_9);
  if (!(VAR_3 & VAR_11) && (VAR_5 & VAR_11))
  {
   FUNC_0(VAR_10, VAR_2,
           (VAR_4[VAR_9]) | VAR_0, VAR_6, VAR_7);
  }
  else if ((VAR_3 & VAR_11) && !(VAR_5 & VAR_11))
  {
   FUNC_0(VAR_10, VAR_2, (VAR_4[VAR_9]), VAR_6, VAR_7);
  }
 }
 VAR_3 = VAR_5;


 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
}
