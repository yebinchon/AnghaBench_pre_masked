
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eos_; } ;
typedef TYPE_1__ VP8LBitReader ;


 int FUNC_0 (TYPE_1__* const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(VP8LBitReader* const VAR_3,
                         int* const VAR_4, int* const VAR_5,
                         int* const VAR_6) {
  if (FUNC_0(VAR_3, 8) != VAR_1) return 0;
  *VAR_4 = FUNC_0(VAR_3, VAR_0) + 1;
  *VAR_5 = FUNC_0(VAR_3, VAR_0) + 1;
  *VAR_6 = FUNC_0(VAR_3, 1);
  if (FUNC_0(VAR_3, VAR_2) != 0) return 0;
  return !VAR_3->eos_;
}
