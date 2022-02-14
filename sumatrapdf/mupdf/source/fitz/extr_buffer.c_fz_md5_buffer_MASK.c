
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_md5 ;
typedef int fz_context ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(fz_context *VAR_0, fz_buffer *VAR_1, unsigned char VAR_2[16])
{
 fz_md5 VAR_3;
 FUNC_1(&VAR_3);
 if (VAR_1)
  FUNC_2(&VAR_3, VAR_1->data, VAR_1->len);
 FUNC_0(&VAR_3, VAR_2);
}
