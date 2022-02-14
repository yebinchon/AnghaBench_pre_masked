
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lat; scalar_t__ lon; } ;
typedef TYPE_1__ location_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(const location_t *VAR_5)
{

 if (VAR_5->lat < VAR_2 || VAR_5->lat > VAR_0) {

  FUNC_1(VAR_4,
   FUNC_0("Latitude must be between %.1f and %.1f.\n"),
   VAR_2, VAR_0);
  return 0;
 }


 if (VAR_5->lon < VAR_3 || VAR_5->lon > VAR_1) {

  FUNC_1(VAR_4,
   FUNC_0("Longitude must be between"
     " %.1f and %.1f.\n"), VAR_3, VAR_1);
  return 0;
 }

 return 1;
}
