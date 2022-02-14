
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * userdata; } ;
struct TYPE_4__ {TYPE_2__ font; } ;
typedef TYPE_1__ FONSttFontImpl ;
typedef int FONScontext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int ) ;

int FUNC_2(FONScontext *VAR_0, FONSttFontImpl *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_3);

 VAR_1->font.userdata = VAR_0;
 VAR_4 = FUNC_1(&VAR_1->font, VAR_2, 0);
 return VAR_4;
}
