
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int read_ahead; int (* skip ) (TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ lzma_mf ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(lzma_mf *VAR_0, uint32_t VAR_1)
{
 if (VAR_1 != 0) {
  VAR_0->skip(VAR_0, VAR_1);
  VAR_0->read_ahead += VAR_1;
 }
}
