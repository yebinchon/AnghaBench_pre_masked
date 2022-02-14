
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
struct SYSCACHECALLBACK {int id; int link; int arg; int (* function ) (int ,int,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int* VAR_2 ;
 struct SYSCACHECALLBACK* VAR_3 ;

void
FUNC_3(int VAR_4, uint32 VAR_5)
{
 int VAR_6;

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  FUNC_1(VAR_0, "invalid cache ID: %d", VAR_4);

 VAR_6 = VAR_2[VAR_4] - 1;
 while (VAR_6 >= 0)
 {
  struct SYSCACHECALLBACK *VAR_7 = VAR_3 + VAR_6;

  FUNC_0(VAR_7->id == VAR_4);
  VAR_7->function(VAR_7->arg, VAR_4, VAR_5);
  VAR_6 = VAR_7->link - 1;
 }
}
