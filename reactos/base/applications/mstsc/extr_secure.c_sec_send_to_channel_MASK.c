
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_6__ {int end; int p; } ;
typedef TYPE_1__* STREAM ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int VAR_6 ;
 int FUNC_8 (int,int,int ,int ,int,int) ;

void
FUNC_9(STREAM VAR_7, uint32 VAR_8, uint16 VAR_9)
{
 int VAR_10;





 FUNC_4(VAR_7, VAR_6);
 if ((!VAR_3 && !VAR_2) || (VAR_8 & VAR_1))
  FUNC_3(VAR_7, VAR_8);

 if (VAR_8 & VAR_1)
 {
  VAR_8 &= ~VAR_1;
  VAR_10 = VAR_7->end - VAR_7->p - 8;






  FUNC_8(VAR_7->p, 8, VAR_5, VAR_4, VAR_7->p + 8, VAR_10);
  FUNC_7(VAR_7->p + 8, VAR_10);
 }

 FUNC_2(VAR_7, VAR_9);




}
