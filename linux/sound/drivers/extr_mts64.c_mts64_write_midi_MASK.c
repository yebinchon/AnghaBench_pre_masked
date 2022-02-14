
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct parport {int dummy; } ;
struct mts64 {int current_midi_output_port; TYPE_1__* pardev; } ;
struct TYPE_2__ {struct parport* port; } ;


 int FUNC_0 (struct parport*,int) ;
 int FUNC_1 (struct parport*,int ) ;

__attribute__((used)) static void FUNC_2(struct mts64 *VAR_0, u8 VAR_1,
        int VAR_2)
{
 struct parport *VAR_3 = VAR_0->pardev->port;


 if (VAR_0->current_midi_output_port != VAR_2)
  FUNC_0(VAR_3, VAR_2);


 FUNC_1(VAR_3, VAR_1);
}
