
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; scalar_t__ offset; } ;
typedef TYPE_2__ tar_entry ;
struct TYPE_6__ {int * file; } ;
struct TYPE_8__ {TYPE_1__ super; } ;
typedef TYPE_3__ fz_tar_archive ;
typedef int fz_stream ;
typedef int fz_context ;
typedef int fz_archive ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,scalar_t__,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 TYPE_2__* FUNC_4 (int *,TYPE_3__*,char const*) ;

__attribute__((used)) static fz_stream *FUNC_5(fz_context *VAR_1, fz_archive *VAR_2, const char *VAR_3)
{
 fz_tar_archive *VAR_4 = (fz_tar_archive *) VAR_2;
 fz_stream *VAR_5 = VAR_4->super.file;
 tar_entry *VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_4, VAR_3);
 if (!VAR_6)
  FUNC_3(VAR_1, VAR_0, "cannot find named tar archive entry");

 FUNC_1(VAR_1, VAR_5, VAR_6->offset + 512, 0);
 return FUNC_0(VAR_1, VAR_5, VAR_6->size, FUNC_2(VAR_1, VAR_5));
}
