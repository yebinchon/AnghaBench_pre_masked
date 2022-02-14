
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {scalar_t__ tid; int bits; TYPE_2__* user; } ;
struct TYPE_6__ {scalar_t__ dwThreadId; scalar_t__ hThread; } ;
struct TYPE_7__ {TYPE_1__ pi; } ;
typedef TYPE_2__ RIOW32Dbg ;
typedef TYPE_3__ RDebug ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int CONTEXT ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int *,int,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__) ;

int FUNC_8(RDebug *VAR_6, int VAR_7, ut8 *VAR_8, int VAR_9) {
 bool VAR_10 = 0;
 if (VAR_7 < -1) {
  VAR_10 = 1;
  VAR_7 = -VAR_7;
 }
 RIOW32Dbg *VAR_11 = VAR_6->user;

 bool VAR_12 = FUNC_2 (VAR_6, VAR_6->tid);
 HANDLE VAR_13 = VAR_11->pi.dwThreadId == VAR_6->tid ? VAR_11->pi.hThread : ((void*)0);
 if (!VAR_13 || VAR_13 == VAR_1) {
  DWORD VAR_14 = VAR_5 | VAR_3;
  if (VAR_6->bits == VAR_2) {
    VAR_14 |= VAR_4;
  }
  VAR_13 = FUNC_7 (VAR_14, VAR_0, VAR_6->tid);
  if (!VAR_13 && VAR_12) {
   FUNC_6 ("w32_reg_read/OpenThread");
  }
  if (!VAR_13) {
   return 0;
  }
 }

 if (VAR_12 && FUNC_5 (VAR_13, VAR_6->bits) == -1) {
  FUNC_0 (VAR_13);
  return 0;
 }
 VAR_9 = FUNC_1 (VAR_13, VAR_8, VAR_9, VAR_6->bits);
 if (VAR_10) {
  FUNC_3 (VAR_13, (CONTEXT *)VAR_8);
 }

 if (VAR_12 && FUNC_4 (VAR_13, VAR_6->bits) == -1) {
  VAR_9 = 0;
 }
 if (VAR_13 != VAR_11->pi.hThread) {
  FUNC_0 (VAR_13);
 }
 return VAR_9;
}
