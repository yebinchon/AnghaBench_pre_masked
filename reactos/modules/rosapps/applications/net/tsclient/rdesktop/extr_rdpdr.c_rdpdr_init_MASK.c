
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * channel; } ;
struct TYPE_6__ {scalar_t__ num_devices; TYPE_1__ rdpdr; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,char*,int,int ) ;
 int VAR_2 ;

BOOL
FUNC_1(RDPCLIENT * VAR_3)
{
 if (VAR_3->num_devices > 0)
 {
  VAR_3->rdpdr.channel =
   FUNC_0(VAR_3, "rdpdr",
      VAR_1 | VAR_0,
      VAR_2);
 }

 return (VAR_3->rdpdr.channel != ((void*)0));
}
