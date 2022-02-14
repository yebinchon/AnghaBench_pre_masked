
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * channel; scalar_t__ serial; } ;
struct TYPE_6__ {TYPE_1__ seamless; int seamless_rdp; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_2__*,char*,int,int ) ;
 int VAR_3 ;

BOOL
FUNC_1(RDPCLIENT * VAR_4)
{
 if (!VAR_4->seamless_rdp)
  return VAR_2;

 VAR_4->seamless.serial = 0;

 VAR_4->seamless.channel =
  FUNC_0(VAR_4, "seamrdp", VAR_1 | VAR_0,
     VAR_3);
 return (VAR_4->seamless.channel != ((void*)0));
}
