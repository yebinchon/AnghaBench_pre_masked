
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {int read_max; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(libgdbr_t *VAR_0) {
 int VAR_1;
 char *VAR_2;
 if (!(VAR_2 = FUNC_2 (128))) {
  return -1;
 }
 FUNC_4 (VAR_2, 127, "PacketSize=%x;QStartNoAckMode+;qXfer:exec-file:read+",
    (ut32) (VAR_0->read_max - 1));
 if ((VAR_1 = FUNC_1 (VAR_0)) < 0) {
  FUNC_0 (VAR_2);
  return -1;
 }
 VAR_1 = FUNC_3 (VAR_0, VAR_2);
 FUNC_0 (VAR_2);
 return VAR_1;
}
