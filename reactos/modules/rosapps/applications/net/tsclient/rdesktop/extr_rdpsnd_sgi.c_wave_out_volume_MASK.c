
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {int * ptr; } ;
struct TYPE_5__ {int sizeIn; TYPE_1__ value; int param; } ;
typedef TYPE_2__ ALpv ;
typedef int ALfixed ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 double VAR_5 ;

void
FUNC_5(uint16 VAR_6, uint16 VAR_7)
{
 double VAR_8, VAR_9;
 ALpv VAR_10[1];
 ALfixed VAR_11[8];






 VAR_8 = (double) VAR_6 / VAR_2;
 VAR_9 = (double) VAR_7 / VAR_2;

 VAR_11[0] = FUNC_0(VAR_3 + VAR_8 * VAR_5);
 VAR_11[1] = FUNC_0(VAR_3 + VAR_9 * VAR_5);

 VAR_10[0].param = VAR_1;
 VAR_10[0].value.ptr = VAR_11;
 VAR_10[0].sizeIn = 8;
 if (FUNC_2(VAR_0, VAR_10, 1) < 0)
 {
  FUNC_3(VAR_4, "wave_out_volume: alSetParams failed: %s\n",
   FUNC_1(FUNC_4()));
  return;
 }




}
