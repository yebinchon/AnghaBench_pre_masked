
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * channel_hdr; int * rdp_hdr; int * sec_hdr; int * mcs_hdr; int * iso_hdr; scalar_t__ size; int * data; int * end; int * p; } ;
struct TYPE_3__ {int * channel_hdr; int * rdp_hdr; int * sec_hdr; int * mcs_hdr; int * iso_hdr; scalar_t__ size; int * data; int * end; int * p; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;

void
FUNC_1(void)
{
 int VAR_3;


 if (VAR_1.data != ((void*)0))
  FUNC_0(VAR_1.data);
 VAR_1.p = ((void*)0);
 VAR_1.end = ((void*)0);
 VAR_1.data = ((void*)0);
 VAR_1.size = 0;
 VAR_1.iso_hdr = ((void*)0);
 VAR_1.mcs_hdr = ((void*)0);
 VAR_1.sec_hdr = ((void*)0);
 VAR_1.rdp_hdr = ((void*)0);
 VAR_1.channel_hdr = ((void*)0);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_2[VAR_3].data != ((void*)0))
   FUNC_0(VAR_2[VAR_3].data);
  VAR_2[VAR_3].p = ((void*)0);
  VAR_2[VAR_3].end = ((void*)0);
  VAR_2[VAR_3].data = ((void*)0);
  VAR_2[VAR_3].size = 0;
  VAR_2[VAR_3].iso_hdr = ((void*)0);
  VAR_2[VAR_3].mcs_hdr = ((void*)0);
  VAR_2[VAR_3].sec_hdr = ((void*)0);
  VAR_2[VAR_3].rdp_hdr = ((void*)0);
  VAR_2[VAR_3].channel_hdr = ((void*)0);
 }
}
