
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md5_buf; int md5_std; int md5_stc; int md5_stb; int md5_sta; scalar_t__ md5_i; scalar_t__ md5_n; } ;
typedef TYPE_1__ md5_ctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(md5_ctxt *VAR_4)
{
 VAR_4->md5_n = 0;
 VAR_4->md5_i = 0;
 VAR_4->md5_sta = VAR_0;
 VAR_4->md5_stb = VAR_1;
 VAR_4->md5_stc = VAR_2;
 VAR_4->md5_std = VAR_3;
 FUNC_0(VAR_4->md5_buf, 0, sizeof(VAR_4->md5_buf));
}
