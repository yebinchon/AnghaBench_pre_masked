
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int count; int closed; int output; TYPE_1__* central; } ;
typedef TYPE_2__ fz_zip_writer ;
typedef int fz_context ;
struct TYPE_4__ {char* data; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;

void
FUNC_5(fz_context *VAR_1, fz_zip_writer *VAR_2)
{
 int64_t VAR_3 = FUNC_1(VAR_1, VAR_2->output);

 FUNC_2(VAR_1, VAR_2->output, VAR_2->central->data, VAR_2->central->len);

 FUNC_4(VAR_1, VAR_2->output, VAR_0);
 FUNC_3(VAR_1, VAR_2->output, 0);
 FUNC_3(VAR_1, VAR_2->output, 0);
 FUNC_3(VAR_1, VAR_2->output, VAR_2->count);
 FUNC_3(VAR_1, VAR_2->output, VAR_2->count);
 FUNC_4(VAR_1, VAR_2->output, (int)VAR_2->central->len);
 FUNC_4(VAR_1, VAR_2->output, (int)VAR_3);
 FUNC_3(VAR_1, VAR_2->output, 5);

 FUNC_2(VAR_1, VAR_2->output, "MuPDF", 5);

 FUNC_0(VAR_1, VAR_2->output);

 VAR_2->closed = 1;
}
