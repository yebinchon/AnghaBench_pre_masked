
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int usize; } ;
typedef TYPE_2__ zip_entry ;
struct TYPE_8__ {int * file; } ;
struct TYPE_10__ {TYPE_1__ super; } ;
typedef TYPE_3__ fz_zip_archive ;
typedef int fz_stream ;
typedef int fz_context ;
typedef int fz_archive ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,...) ;
 TYPE_2__* FUNC_4 (int *,TYPE_3__*,char const*) ;
 int FUNC_5 (int *,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static fz_stream *FUNC_6(fz_context *VAR_1, fz_archive *VAR_2, const char *VAR_3)
{
 fz_zip_archive *VAR_4 = (fz_zip_archive *) VAR_2;
 fz_stream *VAR_5 = VAR_4->super.file;
 int VAR_6;
 zip_entry *VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_4, VAR_3);
 if (!VAR_7)
  FUNC_3(VAR_1, VAR_0, "cannot find named zip archive entry");

 VAR_6 = FUNC_5(VAR_1, VAR_4, VAR_7);
 if (VAR_6 == 0)
  return FUNC_1(VAR_1, VAR_5, VAR_7->usize, FUNC_2(VAR_1, VAR_5));
 if (VAR_6 == 8)
  return FUNC_0(VAR_1, VAR_5, -15);
 FUNC_3(VAR_1, VAR_0, "unknown zip method: %d", VAR_6);
}
