
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mcs_id; } ;
typedef int STREAM ;
typedef int RD_BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

RD_BOOL
FUNC_8(STREAM VAR_7)
{
 unsigned int VAR_8;

 FUNC_6(VAR_7);
 if (!FUNC_3(VAR_7))
  goto error;

 FUNC_7();

 FUNC_4();
 if (!FUNC_1(&VAR_5))
  goto error;

 FUNC_5(VAR_5 + VAR_2);

 if (!FUNC_2())
  goto error;

 FUNC_5(VAR_1);
 if (!FUNC_2())
  goto error;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  FUNC_5(VAR_4[VAR_8].mcs_id);
  if (!FUNC_2())
   goto error;
 }
 return VAR_3;

      error:
 FUNC_0();
 return VAR_0;
}
