
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_stream ;
struct TYPE_2__ {int path; } ;
typedef TYPE_1__ fz_directory ;
typedef int fz_context ;
typedef int fz_archive ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static fz_stream *FUNC_3(fz_context *VAR_0, fz_archive *VAR_1, const char *VAR_2)
{
 fz_directory *VAR_3 = (fz_directory *) VAR_1;
 char VAR_4[2048];
 FUNC_2(VAR_4, VAR_3->path, sizeof VAR_4);
 FUNC_1(VAR_4, "/", sizeof VAR_4);
 FUNC_1(VAR_4, VAR_2, sizeof VAR_4);
 return FUNC_0(VAR_0, VAR_4);
}
