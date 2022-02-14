
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fdstate; } ;
typedef scalar_t__ Oid ;
typedef size_t File ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;

File
FUNC_5(bool VAR_7)
{
 File VAR_8 = 0;





 if (!VAR_7)
  FUNC_4(VAR_0);
 if (VAR_6 > 0 && !VAR_7)
 {
  Oid VAR_9 = FUNC_0();

  if (FUNC_1(VAR_9))
   VAR_8 = FUNC_2(VAR_9, 0);
 }






 if (VAR_8 <= 0)
  VAR_8 = FUNC_2(VAR_4 ?
            VAR_4 :
            VAR_1,
            1);


 VAR_5[VAR_8].fdstate |= VAR_2 | VAR_3;


 if (!VAR_7)
  FUNC_3(VAR_8);

 return VAR_8;
}
