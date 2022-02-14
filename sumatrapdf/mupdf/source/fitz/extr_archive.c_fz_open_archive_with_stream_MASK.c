
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;
typedef int fz_archive ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,char*) ;

fz_archive *
FUNC_5(fz_context *VAR_1, fz_stream *VAR_2)
{
 fz_archive *VAR_3 = ((void*)0);

 if (FUNC_1(VAR_1, VAR_2))
  VAR_3 = FUNC_3(VAR_1, VAR_2);
 else if (FUNC_0(VAR_1, VAR_2))
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else
  FUNC_4(VAR_1, VAR_0, "cannot recognize archive");

 return VAR_3;
}
