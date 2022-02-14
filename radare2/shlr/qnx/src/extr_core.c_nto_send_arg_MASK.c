
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
struct TYPE_11__ {TYPE_3__ tran; } ;
typedef TYPE_4__ libqnxr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*) ;

int FUNC_6 (libqnxr_t *VAR_6, const char *VAR_7) {
 int VAR_8;

 if (!VAR_6) return 0;

 VAR_8 = FUNC_5 (VAR_7) + 1;
 if (VAR_8 > VAR_1) {
  FUNC_0 ("Argument too long: %.40s...\n", VAR_7);
  return 0;
 }
 FUNC_3 (VAR_6, VAR_2, VAR_0, VAR_4);
 FUNC_1 (VAR_6->tran.pkt.env.data, VAR_7, VAR_8);
 return FUNC_2 (VAR_6, FUNC_4 (VAR_3, VAR_5) + VAR_8, 1);
}
