
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {unsigned int tx_max_cell_rate; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_6 (unsigned int) ;
 int * VAR_9 ;
 int FUNC_7 (int ) ;
 int * VAR_10 ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 (int) ;
 unsigned int VAR_13 ;
 struct clk* FUNC_11 () ;
 unsigned int FUNC_12 (struct clk*) ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_13(void)
{
 struct clk *VAR_18 = FUNC_11();
 unsigned int VAR_19 = FUNC_12(VAR_18);
 int VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23;

 *VAR_2 = FUNC_1(VAR_16);
 *VAR_10 = FUNC_8(VAR_15);
 *VAR_1 = FUNC_0(VAR_17 >> 1);




 for ( VAR_20 = 0; VAR_20 < VAR_0; VAR_20++ ) {
  if ( VAR_14.port[VAR_20].tx_max_cell_rate != 0 ) {
   VAR_21 = ((VAR_19 * VAR_17) >> 1) / VAR_14.port[VAR_20].tx_max_cell_rate;
   VAR_22 = VAR_21 >> 6;
   VAR_23 = (VAR_21 & ((1 << 6) - 1)) + 1;

   if ( VAR_23 == (1 << 6) ) {
    VAR_23 = 0;
    VAR_22++;
   }
   if ( VAR_22 == 0 )
    VAR_22 = VAR_23 = 1;




   *VAR_9 = FUNC_7(VAR_11);
   *VAR_8 = FUNC_6(VAR_23);
   *VAR_3 = FUNC_3(VAR_5) |
     FUNC_5(VAR_6) |
     FUNC_2(VAR_4) |
     FUNC_4(VAR_20 & 0x01);

   *VAR_9 = FUNC_7(VAR_12);
   *VAR_8 = FUNC_6(VAR_13 | FUNC_10(VAR_20 & 0x01) | FUNC_9(VAR_22));
   *VAR_3 = FUNC_3(VAR_5) |
    FUNC_5(VAR_7) |
    FUNC_2(VAR_4) |
    FUNC_4(VAR_20 & 0x01);
  }
 }
}
