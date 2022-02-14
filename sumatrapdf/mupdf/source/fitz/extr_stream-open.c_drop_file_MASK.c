
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; } ;
typedef TYPE_1__ fz_file_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, void *VAR_2)
{
 fz_file_stream *VAR_3 = VAR_2;
 int VAR_4 = FUNC_0(VAR_3->file);
 if (VAR_4 < 0)
  FUNC_2(VAR_1, "close error: %s", FUNC_3(VAR_0));
 FUNC_1(VAR_1, VAR_3);
}
