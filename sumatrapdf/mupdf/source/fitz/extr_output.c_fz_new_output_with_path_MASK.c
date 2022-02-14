
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int as_stream; int tell; int seek; } ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (char const*,char*) ;
 int * FUNC_1 (char const*,char*) ;
 TYPE_1__* FUNC_2 (int *,int,int *,int ,int *,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,int ,char*,char const*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (scalar_t__) ;

fz_output *
FUNC_10(fz_context *VAR_10, const char *VAR_11, int VAR_12)
{
 FILE *VAR_13;
 fz_output *VAR_14;

 if (!FUNC_8(VAR_11, "/dev/null") || !FUNC_4(VAR_11, "nul:"))
  return FUNC_2(VAR_10, 0, ((void*)0), VAR_9, ((void*)0), ((void*)0));
 if (!VAR_12)
 {
  if (FUNC_6(VAR_11) < 0)
   if (VAR_3 != VAR_0)
    FUNC_5(VAR_10, VAR_1, "cannot remove file '%s': %s", VAR_11, FUNC_9(VAR_3));
 }
 VAR_13 = FUNC_0(VAR_11, VAR_12 ? "rb+" : "wb+");

 if (!VAR_13)
  FUNC_5(VAR_10, VAR_1, "cannot open file '%s': %s", VAR_11, FUNC_9(VAR_3));

 FUNC_7(VAR_13, ((void*)0), VAR_2, 0);
 VAR_14 = FUNC_2(VAR_10, 8192, VAR_13, VAR_8, ((void*)0), VAR_5);
 VAR_14->seek = VAR_6;
 VAR_14->tell = VAR_7;
 VAR_14->as_stream = VAR_4;

 return VAR_14;
}
