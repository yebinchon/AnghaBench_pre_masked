
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ index; scalar_t__ length; char* data; } ;
struct TYPE_4__ {TYPE_1__ buffer; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static inline void FUNC_4() {
 if (VAR_0.buffer.index < VAR_0.buffer.length) {
  if (VAR_0.buffer.index > 0) {
   int VAR_1 = FUNC_2 (VAR_0.buffer.data + VAR_0.buffer.index, VAR_0.buffer.index);
   VAR_0.buffer.index -= VAR_1;
   FUNC_0 (VAR_0.buffer.data + VAR_0.buffer.index,
    VAR_0.buffer.data + VAR_0.buffer.index + VAR_1,
    FUNC_3 (VAR_0.buffer.data + VAR_0.buffer.index));
   VAR_0.buffer.length -= VAR_1;
  }
 } else {
  VAR_0.buffer.length -= FUNC_1 (VAR_0.buffer.data);
  VAR_0.buffer.index = VAR_0.buffer.length;
  if (VAR_0.buffer.length < 0) {
   VAR_0.buffer.length = 0;
  }
 }
 VAR_0.buffer.data[VAR_0.buffer.length] = '\0';
 if (VAR_0.buffer.index < 0) {
  VAR_0.buffer.index = 0;
 }
}
