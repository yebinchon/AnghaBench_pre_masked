
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * channel; } ;
struct TYPE_6__ {TYPE_1__ cliprdr; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_2__*,char*,int,int ) ;
 int VAR_4 ;

BOOL
FUNC_1(RDPCLIENT * VAR_5)
{
 VAR_5->cliprdr.channel =
  FUNC_0(VAR_5, "cliprdr",
     VAR_2 | VAR_1 |
     VAR_0 | VAR_3,
     VAR_4);
 return (VAR_5->cliprdr.channel != ((void*)0));
}
