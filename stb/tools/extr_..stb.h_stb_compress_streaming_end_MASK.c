
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chash; scalar_t__ buffer; int total_bytes; int length_id; scalar_t__ pending_literals; scalar_t__ valid; int hashmask; scalar_t__ start; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_6(void)
{

   FUNC_2(VAR_1.buffer, VAR_1.buffer+VAR_1.start, VAR_1.buffer+VAR_1.valid,
                      VAR_1.valid-VAR_1.start, &VAR_1.pending_literals, VAR_1.chash, VAR_1.hashmask);


   FUNC_1(VAR_1.buffer + VAR_1.valid - VAR_1.pending_literals, VAR_1.pending_literals);

   FUNC_3(0x05fa);
   FUNC_4(VAR_0);

   FUNC_5(VAR_1.length_id, VAR_1.total_bytes);

   FUNC_0(VAR_1.buffer);
   FUNC_0(VAR_1.chash);
   return 1;
}
