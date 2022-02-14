
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct MDCBufData {scalar_t__ mdc_avail; scalar_t__ mdc_buf; } ;


 int FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct MDCBufData *VAR_0, uint8 *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->mdc_buf + VAR_0->mdc_avail, VAR_1, VAR_2);
 VAR_0->mdc_avail += VAR_2;
}
