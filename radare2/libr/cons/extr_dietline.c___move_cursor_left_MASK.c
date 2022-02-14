
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ buffer; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_1() {
 VAR_0.buffer.index = VAR_0.buffer.index
  ? VAR_0.buffer.index - FUNC_0 (VAR_0.buffer.data + VAR_0.buffer.index, VAR_0.buffer.index)
  : 0;
}
