
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int h; } ;
typedef TYPE_1__ fd_as_handle_union_t ;
struct TYPE_6__ {int tif_fd; } ;
typedef TYPE_2__ TIFF ;


 TYPE_2__* FUNC_0 (char const*,char const*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

TIFF*
FUNC_1(int VAR_7, const char* VAR_8, const char* VAR_9)
{
 TIFF* VAR_10;

 fd_as_handle_union_t VAR_11;
 VAR_11.fd = VAR_7;
 VAR_10 = FUNC_0(VAR_8, VAR_9,
     VAR_11.h,
     VAR_2, VAR_6,
     VAR_3, VAR_0, VAR_4,
     VAR_1, VAR_5);
 if (VAR_10)
  VAR_10->tif_fd = VAR_7;
 return (VAR_10);
}
