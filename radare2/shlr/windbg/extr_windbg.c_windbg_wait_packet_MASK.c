
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ const type; scalar_t__ leader; } ;
typedef TYPE_1__ kd_packet_t ;
struct TYPE_11__ {int io_ptr; } ;
typedef TYPE_2__ WindCtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__**) ;
 int FUNC_5 () ;

int FUNC_6(WindCtx *VAR_7, const uint32_t VAR_8, kd_packet_t **VAR_9) {
 kd_packet_t *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12 = 10;

 do {
  if (VAR_10) {
   FUNC_0 (VAR_10);
  }

  VAR_11 = FUNC_4 (VAR_7->io_ptr, &VAR_10);
  if (VAR_11 != VAR_1 || !VAR_10) {
   break;
  }


  if (VAR_10->type != VAR_8) {
   FUNC_2 ("We were not waiting for this... %08x\n", VAR_10->type);
  }
  if (VAR_10->leader == VAR_3 && VAR_10->type == VAR_6) {

   FUNC_2 ("State64\n");
  }
  if (VAR_10->leader == VAR_3 && VAR_10->type == VAR_4) {
   FUNC_2 ("Replying IO\n");
   FUNC_1 (VAR_7, VAR_10);
  }



  if (VAR_10->leader == VAR_2 && VAR_10->type == VAR_5) {
   FUNC_5 ();
   FUNC_2 ("Waoh. You probably sent a malformed packet !\n");
   VAR_11 = VAR_0;

  }
 } while (VAR_10->type != VAR_8 && VAR_12--);

 if (VAR_11 != VAR_1) {
  FUNC_3 (VAR_10);
  return VAR_11;
 }

 if (VAR_9) {
  *VAR_9 = VAR_10;
 } else {
  FUNC_3 (VAR_10);
 }

 return VAR_1;
}
