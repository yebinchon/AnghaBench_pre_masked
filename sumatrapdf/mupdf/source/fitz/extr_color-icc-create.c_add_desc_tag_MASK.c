
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int byte_padding; } ;
typedef TYPE_1__ fz_icc_tag ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,char const*) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, fz_buffer *VAR_2, const char VAR_3[], fz_icc_tag VAR_4[], int VAR_5)
{
 int VAR_6 = FUNC_3(VAR_3);

 FUNC_1(VAR_1, VAR_2, VAR_0);
 FUNC_0(VAR_1, VAR_2, 0, 4);
 FUNC_1(VAR_1, VAR_2, VAR_6 + 1);
 FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_0(VAR_1, VAR_2, 0, 79);
 FUNC_0(VAR_1, VAR_2, 0, VAR_4[VAR_5].byte_padding);
}
