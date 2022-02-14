
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_9__ {TYPE_1__ env; } ;
struct TYPE_10__ {TYPE_2__ pkt; } ;
struct TYPE_11__ {int target_proto_minor; TYPE_3__ tran; } ;
typedef TYPE_4__ libqnxr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*) ;

int FUNC_6 (libqnxr_t *VAR_7, const char *VAR_8) {
 int VAR_9;
 int VAR_10 = 0;

 if (!VAR_7) return 0;

 VAR_9 = FUNC_5 (VAR_8) + 1;
 if (VAR_7->target_proto_minor >= 2) {
  while (VAR_9 > VAR_2) {
   FUNC_3 (VAR_7, VAR_3, VAR_1,
           VAR_5);
   FUNC_1 (VAR_7->tran.pkt.env.data, VAR_8 + VAR_10,
    VAR_2);
   if (!FUNC_2 (VAR_7, FUNC_4 (VAR_4, VAR_6) +
        VAR_2,
           1)) {

    return 0;
   }
   VAR_9 -= VAR_2;
   VAR_10 += VAR_2;
  }
 } else if (VAR_9 > VAR_2) {

  FUNC_0 ("Protovers < 0.2 do not handle env vars longer than %d\n",
    VAR_2 - 1);
  return 0;
 }
 FUNC_3 (VAR_7, VAR_3, VAR_0, VAR_5);
 FUNC_1 (VAR_7->tran.pkt.env.data, VAR_8 + VAR_10, VAR_9);
 return FUNC_2 (VAR_7, FUNC_4 (VAR_4, VAR_6) + VAR_9, 1);
}
