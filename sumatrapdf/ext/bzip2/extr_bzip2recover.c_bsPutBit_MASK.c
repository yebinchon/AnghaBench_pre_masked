
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UChar ;
struct TYPE_3__ {int buffLive; int buffer; int handle; } ;
typedef scalar_t__ Int32 ;
typedef TYPE_1__ BitStream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2 ( BitStream* VAR_2, Int32 VAR_3 )
{
   if (VAR_2->buffLive == 8) {
      Int32 VAR_4 = FUNC_0 ( (UChar) VAR_2->buffer, VAR_2->handle );
      if (VAR_4 == VAR_0) FUNC_1();
      VAR_1++;
      VAR_2->buffLive = 1;
      VAR_2->buffer = VAR_3 & 0x1;
   } else {
      VAR_2->buffer = ( (VAR_2->buffer << 1) | (VAR_3 & 0x1) );
      VAR_2->buffLive++;
   };
}
