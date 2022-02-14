
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_stream ;
typedef int fz_context ;
struct TYPE_4__ {int file; } ;
typedef TYPE_1__ fz_archive ;


 TYPE_1__* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int *) ;

fz_archive *
FUNC_3(fz_context *VAR_0, fz_stream *VAR_1, int VAR_2)
{
 fz_archive *VAR_3;
 VAR_3 = FUNC_0(FUNC_1(VAR_0, 1, VAR_2), "fz_archive");
 VAR_3->file = FUNC_2(VAR_0, VAR_1);
 return VAR_3;
}
