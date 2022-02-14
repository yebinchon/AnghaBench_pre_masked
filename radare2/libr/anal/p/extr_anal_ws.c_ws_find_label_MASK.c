
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_10__ {scalar_t__ size; int buf_asm; } ;
struct TYPE_9__ {int desc; } ;
struct TYPE_8__ {scalar_t__ (* desc_size ) (int ) ;TYPE_2__* io; int (* read_at ) (TYPE_2__*,scalar_t__,int *,int) ;} ;
typedef TYPE_1__ RIOBind ;
typedef TYPE_2__ RIO ;
typedef TYPE_3__ RAsmOp ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int *,int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *,int) ;

__attribute__((used)) static ut64 FUNC_7(int VAR_0, RIOBind VAR_1) {
 RIO *VAR_2 = VAR_1.io;
 ut64 VAR_3 = 0, VAR_4 = VAR_1.desc_size (VAR_2->desc);
 ut8 VAR_5[128];
 RAsmOp VAR_6;
 VAR_1.read_at (VAR_1.io, VAR_3, VAR_5, 128);
 while (VAR_3 <= VAR_4 && FUNC_6 (&VAR_6, VAR_5, 128)) {
  const char *VAR_7 = FUNC_1 (&VAR_6.buf_asm);
  if (VAR_7 && (FUNC_2 (VAR_7) > 4) && VAR_7[0] == 'm' && VAR_7[1] == 'a' && VAR_0 == FUNC_0 (VAR_7 + 5)) {
   return VAR_3;
  }
  VAR_3 = VAR_3 + VAR_6.size;
  VAR_1.read_at (VAR_1.io, VAR_3, VAR_5, 128);
 }
 return 0;
}
