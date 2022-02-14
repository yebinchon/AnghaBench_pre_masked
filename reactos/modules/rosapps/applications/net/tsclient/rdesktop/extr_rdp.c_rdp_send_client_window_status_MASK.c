
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current_status; } ;
struct TYPE_7__ {TYPE_1__ rdp; int height; int width; } ;
typedef int * STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (int *) ;

BOOL
FUNC_5(RDPCLIENT * VAR_3, int VAR_4)
{
 STREAM VAR_5;

 if (VAR_3->rdp.current_status == VAR_4)
  return VAR_2;

 VAR_5 = FUNC_2(VAR_3, 12);

 if(VAR_5 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_5, VAR_4);

 switch (VAR_4)
 {
  case 0:
   break;

  case 1:
   FUNC_1(VAR_5, 0);
   FUNC_0(VAR_5, VAR_3->width);
   FUNC_0(VAR_5, VAR_3->height);
   break;
 }

 FUNC_4(VAR_5);
 VAR_3->rdp.current_status = VAR_4;
 return FUNC_3(VAR_3, VAR_5, VAR_1);
}
