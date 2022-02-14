
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_3__ {int * intr0; int interrupts; } ;
typedef int RAnalEsilInterrupt ;
typedef TYPE_1__ RAnalEsil ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static RAnalEsilInterrupt *FUNC_1(RAnalEsil *VAR_0, ut32 VAR_1) {
 return VAR_1 ?
  (RAnalEsilInterrupt *)FUNC_0(VAR_0->interrupts, VAR_1) :
  VAR_0->intr0;
}
