
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {scalar_t__ verbose; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 long long FUNC_2 () ;
 int FUNC_3 (char*,...) ;

unsigned int FUNC_4(long VAR_1, struct config *VAR_2)
{
 int VAR_3;
 long long VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;

 if (VAR_2->verbose)
  FUNC_3("calibrating load of %lius, please wait...\n", VAR_1);


 VAR_4 = FUNC_2();
 FUNC_0(VAR_6);
 VAR_5 = FUNC_2();

 VAR_8 = (unsigned int)(VAR_5 - VAR_4);



 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_7 = (unsigned int)(VAR_1 * VAR_6 / VAR_8);
  FUNC_1("calibrating with %u rounds\n", VAR_7);
  VAR_4 = FUNC_2();
  FUNC_0(VAR_7);
  VAR_5 = FUNC_2();

  VAR_8 = (unsigned int)(VAR_5 - VAR_4);
  VAR_6 = VAR_7;
 }
 if (VAR_2->verbose)
  FUNC_3("calibration done\n");

 return VAR_6;
}
