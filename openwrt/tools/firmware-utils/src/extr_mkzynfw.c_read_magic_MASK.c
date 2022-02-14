
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int file_name; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int,int,int *) ;

int
FUNC_4(uint16_t *VAR_2)
{
 FILE *VAR_3;
 int VAR_4;

 VAR_1 = 0;
 VAR_3 = FUNC_2(VAR_0->file_name,"r");
 if (VAR_1) {
  FUNC_0("unable to open file: %s", VAR_0->file_name);
  return -1;
 }

 VAR_1 = 0;
 FUNC_3(VAR_2, 2, 1, VAR_3);
 if (VAR_1 != 0) {
  FUNC_0("unable to read from file: %s", VAR_0->file_name);
  VAR_4 = -1;
  goto err;
 }

 VAR_4 = 0;

err:
 FUNC_1(VAR_3);
 return VAR_4;
}
