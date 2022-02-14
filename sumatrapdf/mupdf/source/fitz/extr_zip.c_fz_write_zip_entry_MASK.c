
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_5__ {int count; int output; int central; } ;
typedef TYPE_1__ fz_zip_writer ;
typedef int fz_context ;
struct TYPE_6__ {char const* data; scalar_t__ len; } ;
typedef TYPE_2__ fz_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char const*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char const*,scalar_t__) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (char const*) ;

void
FUNC_9(fz_context *VAR_2, fz_zip_writer *VAR_3, const char *VAR_4, fz_buffer *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_4(VAR_2, VAR_3->output);
 int VAR_8;

 VAR_8 = FUNC_0(0, ((void*)0), 0);
 VAR_8 = FUNC_0(VAR_8, VAR_5->data, (uInt)VAR_5->len);

 FUNC_2(VAR_2, VAR_3->central, VAR_0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 20);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_2(VAR_2, VAR_3->central, VAR_8);
 FUNC_2(VAR_2, VAR_3->central, (int)VAR_5->len);
 FUNC_2(VAR_2, VAR_3->central, (int)VAR_5->len);
 FUNC_1(VAR_2, VAR_3->central, (int)FUNC_8(VAR_4));
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_1(VAR_2, VAR_3->central, 0);
 FUNC_2(VAR_2, VAR_3->central, 0);
 FUNC_2(VAR_2, VAR_3->central, VAR_7);
 FUNC_3(VAR_2, VAR_3->central, VAR_4);

 FUNC_7(VAR_2, VAR_3->output, VAR_1);
 FUNC_6(VAR_2, VAR_3->output, 20);
 FUNC_6(VAR_2, VAR_3->output, 0);
 FUNC_6(VAR_2, VAR_3->output, 0);
 FUNC_6(VAR_2, VAR_3->output, 0);
 FUNC_6(VAR_2, VAR_3->output, 0);
 FUNC_7(VAR_2, VAR_3->output, VAR_8);
 FUNC_7(VAR_2, VAR_3->output, (int)VAR_5->len);
 FUNC_7(VAR_2, VAR_3->output, (int)VAR_5->len);
 FUNC_6(VAR_2, VAR_3->output, (int)FUNC_8(VAR_4));
 FUNC_6(VAR_2, VAR_3->output, 0);
 FUNC_5(VAR_2, VAR_3->output, VAR_4, FUNC_8(VAR_4));
 FUNC_5(VAR_2, VAR_3->output, VAR_5->data, VAR_5->len);

 ++VAR_3->count;
}
