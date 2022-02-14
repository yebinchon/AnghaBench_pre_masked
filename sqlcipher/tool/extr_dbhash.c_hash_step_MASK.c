
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* count; unsigned char const* buffer; int state; } ;
struct TYPE_4__ {TYPE_1__ cx; } ;


 int FUNC_0 (int ,unsigned char const*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (unsigned char const*,unsigned char const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(const unsigned char *VAR_1, unsigned int VAR_2){
  unsigned int VAR_3, VAR_4;

  VAR_4 = VAR_0.cx.count[0];
  if( (VAR_0.cx.count[0] += VAR_2 << 3) < VAR_4 ){
    VAR_0.cx.count[1] += (VAR_2>>29)+1;
  }
  VAR_4 = (VAR_4 >> 3) & 63;
  if( (VAR_4 + VAR_2) > 63 ){
    (void)FUNC_1(&VAR_0.cx.buffer[VAR_4], VAR_1, (VAR_3 = 64-VAR_4));
    FUNC_0(VAR_0.cx.state, VAR_0.cx.buffer);
    for(; VAR_3 + 63 < VAR_2; VAR_3 += 64){
      FUNC_0(VAR_0.cx.state, &VAR_1[VAR_3]);
    }
    VAR_4 = 0;
  }else{
    VAR_3 = 0;
  }
  (void)FUNC_1(&VAR_0.cx.buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
